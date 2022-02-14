
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_size_t ;
typedef TYPE_2__* png_const_color_16p ;
typedef int* png_const_bytep ;
typedef int png_byte ;
struct TYPE_8__ {int gray; int red; int green; int blue; } ;
struct TYPE_7__ {int bit_depth; scalar_t__ num_palette; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int*,int) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int*,int ) ;

void
FUNC_4(png_structrp VAR_4, png_const_bytep VAR_5,
    png_const_color_16p VAR_6, int VAR_7, int VAR_8)
{
   png_byte VAR_9[6];

   FUNC_1(1, "in png_write_tRNS");

   if (VAR_8 == VAR_1)
   {
      if (VAR_7 <= 0 || VAR_7 > (int)VAR_4->num_palette)
      {
         FUNC_0(VAR_4,
             "Invalid number of transparent colors specified");
         return;
      }


      FUNC_3(VAR_4, VAR_3, VAR_5,
          (png_size_t)VAR_7);
   }

   else if (VAR_8 == VAR_0)
   {

      if (VAR_6->gray >= (1 << VAR_4->bit_depth))
      {
         FUNC_0(VAR_4,
             "Ignoring attempt to write tRNS chunk out-of-range for bit_depth");

         return;
      }

      FUNC_2(VAR_9, VAR_6->gray);
      FUNC_3(VAR_4, VAR_3, VAR_9, (png_size_t)2);
   }

   else if (VAR_8 == VAR_2)
   {

      FUNC_2(VAR_9, VAR_6->red);
      FUNC_2(VAR_9 + 2, VAR_6->green);
      FUNC_2(VAR_9 + 4, VAR_6->blue);



      if ((VAR_9[0] | VAR_9[2] | VAR_9[4]) != 0)

      {
         FUNC_0(VAR_4,
             "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
         return;
      }

      FUNC_3(VAR_4, VAR_3, VAR_9, (png_size_t)6);
   }

   else
   {
      FUNC_0(VAR_4, "Can't write tRNS with an alpha channel");
   }
}
