
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef unsigned int png_uint_32 ;
typedef void* png_uint_16 ;
typedef TYPE_2__* png_structrp ;
typedef TYPE_3__* png_inforp ;
struct TYPE_17__ {size_t index; void* gray; void* blue; void* green; void* red; } ;
typedef TYPE_4__ png_color_16 ;
typedef size_t png_byte ;
struct TYPE_16__ {int valid; scalar_t__ num_palette; } ;
struct TYPE_15__ {int mode; int color_type; TYPE_1__* palette; } ;
struct TYPE_14__ {scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,size_t*,unsigned int) ;
 int FUNC_4 (int,char*) ;
 void* FUNC_5 (size_t*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_4__*) ;

void
FUNC_7(png_structrp VAR_6, png_inforp VAR_7, png_uint_32 VAR_8)
{
   unsigned int VAR_9;
   png_byte VAR_10[6];
   png_color_16 VAR_11;

   FUNC_4(1, "in png_handle_bKGD");

   if ((VAR_6->mode & VAR_3) == 0)
      FUNC_1(VAR_6, "missing IHDR");

   else if ((VAR_6->mode & VAR_2) != 0 ||
       (VAR_6->color_type == VAR_1 &&
       (VAR_6->mode & VAR_4) == 0))
   {
      FUNC_2(VAR_6, VAR_8);
      FUNC_0(VAR_6, "out of place");
      return;
   }

   else if (VAR_7 != ((void*)0) && (VAR_7->valid & VAR_5) != 0)
   {
      FUNC_2(VAR_6, VAR_8);
      FUNC_0(VAR_6, "duplicate");
      return;
   }

   if (VAR_6->color_type == VAR_1)
      VAR_9 = 1;

   else if ((VAR_6->color_type & VAR_0) != 0)
      VAR_9 = 6;

   else
      VAR_9 = 2;

   if (VAR_8 != VAR_9)
   {
      FUNC_2(VAR_6, VAR_8);
      FUNC_0(VAR_6, "invalid");
      return;
   }

   FUNC_3(VAR_6, VAR_10, VAR_9);

   if (FUNC_2(VAR_6, 0) != 0)
      return;






   if (VAR_6->color_type == VAR_1)
   {
      VAR_11.index = VAR_10[0];

      if (VAR_7 != ((void*)0) && VAR_7->num_palette != 0)
      {
         if (VAR_10[0] >= VAR_7->num_palette)
         {
            FUNC_0(VAR_6, "invalid index");
            return;
         }

         VAR_11.red = (png_uint_16)VAR_6->palette[VAR_10[0]].red;
         VAR_11.green = (png_uint_16)VAR_6->palette[VAR_10[0]].green;
         VAR_11.blue = (png_uint_16)VAR_6->palette[VAR_10[0]].blue;
      }

      else
         VAR_11.red = VAR_11.green = VAR_11.blue = 0;

      VAR_11.gray = 0;
   }

   else if ((VAR_6->color_type & VAR_0) == 0)
   {
      VAR_11.index = 0;
      VAR_11.red =
      VAR_11.green =
      VAR_11.blue =
      VAR_11.gray = FUNC_5(VAR_10);
   }

   else
   {
      VAR_11.index = 0;
      VAR_11.red = FUNC_5(VAR_10);
      VAR_11.green = FUNC_5(VAR_10 + 2);
      VAR_11.blue = FUNC_5(VAR_10 + 4);
      VAR_11.gray = 0;
   }

   FUNC_6(VAR_6, VAR_7, &VAR_11);
}
