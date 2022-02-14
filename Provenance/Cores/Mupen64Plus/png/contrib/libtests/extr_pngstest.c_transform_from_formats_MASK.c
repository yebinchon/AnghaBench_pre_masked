
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_3__* png_const_colorp ;
struct TYPE_12__ {int ir; int ig; int ib; int dr; int dg; int db; } ;
struct TYPE_14__ {int in_opaque; int output_8bit; int accumulate; int * error_ptr; int * error; TYPE_2__ background_color; TYPE_2__* background; int * from_linear; void* transform; void* out_gp; void* in_gp; scalar_t__ is_palette; TYPE_5__ const* out_image; TYPE_5__* in_image; } ;
typedef TYPE_4__ Transform ;
struct TYPE_11__ {int format; } ;
struct TYPE_15__ {int opts; TYPE_1__ image; } ;
struct TYPE_13__ {size_t red; size_t green; size_t blue; } ;
typedef TYPE_5__ Image ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 void* FUNC_2 (int) ;
 int *** VAR_7 ;
 int *** VAR_8 ;
 int *** VAR_9 ;
 void*** VAR_10 ;
 void*** VAR_11 ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 void** VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_4(Transform *VAR_14, Image *VAR_15,
   const Image *VAR_16, png_const_colorp VAR_17, int VAR_18)
{
   png_uint_32 VAR_19, VAR_20;
   png_uint_32 VAR_21, VAR_22;

   FUNC_3(VAR_14, 0, sizeof *VAR_14);


   VAR_14->in_image = VAR_15;
   VAR_14->out_image = VAR_16;

   VAR_19 = VAR_15->image.format;
   VAR_20 = VAR_16->image.format;

   if (VAR_19 & VAR_6)
      VAR_14->in_opaque = 65535;
   else
      VAR_14->in_opaque = 255;

   VAR_14->output_8bit = (VAR_20 & VAR_6) == 0;

   VAR_14->is_palette = 0;
   VAR_14->accumulate = (VAR_15->opts & VAR_0) != 0;


   VAR_14->in_gp = FUNC_2(VAR_19);
   VAR_14->out_gp = FUNC_2(VAR_20);


   VAR_19 &= VAR_1 | VAR_5;
   VAR_21 = VAR_19 & VAR_1;
   VAR_20 &= VAR_1 | VAR_5;
   VAR_22 = VAR_20 & VAR_1;

   if (VAR_18)
   {

      if (VAR_20 & (VAR_6|VAR_5))
      {
         FUNC_1(VAR_13, "internal transform via linear error 0x%x->0x%x\n",
            VAR_19, VAR_20);
         FUNC_0(1);
      }

      VAR_14->transform = VAR_10[VAR_21][VAR_22 | VAR_6];
      VAR_14->from_linear = VAR_10[VAR_22 | VAR_6][VAR_22];
      VAR_14->error_ptr = VAR_9[VAR_19][VAR_20];
   }

   else if (~VAR_19 & VAR_20 & VAR_5)
   {




      VAR_14->transform = VAR_10[VAR_21][VAR_22];
      VAR_14->from_linear = ((void*)0);
      VAR_14->error_ptr = VAR_8[VAR_21][VAR_22];
   }

   else
   {






      if (VAR_19 & VAR_20 & VAR_5)
         VAR_14->transform = VAR_11[VAR_21][VAR_22];
      else
         VAR_14->transform = VAR_10[VAR_21][VAR_22];
      VAR_14->from_linear = ((void*)0);
      VAR_14->error_ptr = VAR_7[VAR_19][VAR_20];
   }





   VAR_14->background = ((void*)0);


   if (VAR_19 & ~VAR_20 & VAR_3)
   {







      VAR_14->background = &VAR_14->background_color;

      if (VAR_20 & VAR_6 || VAR_18)
      {
         if (VAR_20 & VAR_5)
         {
            VAR_14->background_color.ir =
               VAR_14->background_color.ig =
               VAR_14->background_color.ib = 0;
            VAR_14->background_color.dr =
               VAR_14->background_color.dg =
               VAR_14->background_color.db = 0;
         }

         else
         {
            VAR_14->background_color.ir =
               VAR_14->background_color.ig =
               VAR_14->background_color.ib = VAR_2 * 257;
            VAR_14->background_color.dr =
               VAR_14->background_color.dg =
               VAR_14->background_color.db = 0;
         }
      }

      else
      {
         if (VAR_17 != ((void*)0))
         {
            if (VAR_20 & VAR_4)
            {
               VAR_14->background_color.ir = VAR_17->red;
               VAR_14->background_color.ig = VAR_17->green;
               VAR_14->background_color.ib = VAR_17->blue;



               VAR_14->background_color.dr = VAR_12[VAR_17->red];
               VAR_14->background_color.dg = VAR_12[VAR_17->green];
               VAR_14->background_color.db = VAR_12[VAR_17->blue];
            }

            else
            {
               VAR_14->background_color.ir =
                  VAR_14->background_color.ig =
                  VAR_14->background_color.ib = VAR_17->green;



               VAR_14->background_color.dr =
                  VAR_14->background_color.dg =
                  VAR_14->background_color.db = VAR_12[VAR_17->green];
            }
         }

         else if ((VAR_20 & VAR_5) == 0)
         {
            VAR_14->background_color.ir =
               VAR_14->background_color.ig =
               VAR_14->background_color.ib = VAR_2;



            VAR_14->background_color.dr =
               VAR_14->background_color.dg =
               VAR_14->background_color.db = VAR_12[VAR_2];
         }





         else
            VAR_14->background = ((void*)0);
      }
   }

   if (VAR_14->background == ((void*)0))
   {
      VAR_14->background_color.ir =
         VAR_14->background_color.ig =
         VAR_14->background_color.ib = -1;
      VAR_14->background_color.dr =
         VAR_14->background_color.dg =
         VAR_14->background_color.db = 1E30;
   }



   VAR_14->error[0] = VAR_14->error_ptr[0];
   VAR_14->error[1] = VAR_14->error_ptr[1];
   VAR_14->error[2] = VAR_14->error_ptr[2];
   VAR_14->error[3] = VAR_14->error_ptr[3];
}
