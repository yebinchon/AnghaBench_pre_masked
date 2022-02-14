
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_inforp ;
typedef TYPE_3__* png_colorp ;
struct TYPE_18__ {void* blue; void* green; void* red; } ;
typedef TYPE_3__ png_color ;
typedef void* png_byte ;
struct TYPE_17__ {int valid; scalar_t__ num_trans; } ;
struct TYPE_16__ {int mode; int color_type; int bit_depth; int flags; scalar_t__ num_trans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,void**,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,TYPE_3__*,int) ;

void
FUNC_8(png_structrp VAR_11, png_inforp VAR_12, png_uint_32 VAR_13)
{
   png_color VAR_14[VAR_10];
   int VAR_15, VAR_16, VAR_17;




   FUNC_6(1, "in png_handle_PLTE");

   if ((VAR_11->mode & VAR_5) == 0)
      FUNC_1(VAR_11, "missing IHDR");






   else if ((VAR_11->mode & VAR_6) != 0)
      FUNC_1(VAR_11, "duplicate");

   else if ((VAR_11->mode & VAR_4) != 0)
   {



      FUNC_4(VAR_11, VAR_13);
      FUNC_0(VAR_11, "out of place");
      return;
   }

   VAR_11->mode |= VAR_6;

   if ((VAR_11->color_type & VAR_0) == 0)
   {
      FUNC_4(VAR_11, VAR_13);
      FUNC_0(VAR_11, "ignored in grayscale PNG");
      return;
   }


   if (VAR_11->color_type != VAR_1)
   {
      FUNC_4(VAR_11, VAR_13);
      return;
   }


   if (VAR_13 > 3*VAR_10 || VAR_13 % 3)
   {
      FUNC_4(VAR_11, VAR_13);

      if (VAR_11->color_type != VAR_1)
         FUNC_0(VAR_11, "invalid");

      else
         FUNC_1(VAR_11, "invalid");

      return;
   }


   VAR_16 = (int)VAR_13 / 3;






   if (VAR_11->color_type == VAR_1)
      VAR_15 = (1 << VAR_11->bit_depth);
   else
      VAR_15 = VAR_10;

   if (VAR_16 > VAR_15)
      VAR_16 = VAR_15;
   for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
   {
      png_byte VAR_18[3];

      FUNC_5(VAR_11, VAR_18, 3);

      VAR_14[VAR_17].red = VAR_18[0];
      VAR_14[VAR_17].green = VAR_18[1];
      VAR_14[VAR_17].blue = VAR_18[2];
   }
   if (VAR_11->color_type == VAR_1)

   {
      FUNC_4(VAR_11, (png_uint_32) (VAR_13 - (unsigned int)VAR_16 * 3));
   }


   else if (FUNC_3(VAR_11) != 0)
   {
      if ((VAR_11->flags & VAR_3) == 0)
      {
         if ((VAR_11->flags & VAR_2) != 0)
            return;

         else
            FUNC_1(VAR_11, "CRC error");
      }


      else if ((VAR_11->flags & VAR_2) == 0)
         FUNC_2(VAR_11, "CRC error");
   }
   FUNC_7(VAR_11, VAR_12, VAR_14, VAR_16);
}
