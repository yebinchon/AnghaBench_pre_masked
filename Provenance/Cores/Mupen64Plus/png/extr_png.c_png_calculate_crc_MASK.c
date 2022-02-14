
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uLong ;
typedef scalar_t__ uInt ;
typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef scalar_t__ png_size_t ;
typedef int png_const_bytep ;
struct TYPE_3__ {int flags; scalar_t__ crc; int chunk_name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,scalar_t__) ;

void
FUNC_2(png_structrp VAR_4, png_const_bytep VAR_5, png_size_t VAR_6)
{
   int VAR_7 = 1;

   if (FUNC_0(VAR_4->chunk_name) != 0)
   {
      if ((VAR_4->flags & VAR_0) ==
          (VAR_2 | VAR_1))
         VAR_7 = 0;
   }

   else
   {
      if ((VAR_4->flags & VAR_3) != 0)
         VAR_7 = 0;
   }






   if (VAR_7 != 0 && VAR_6 > 0)
   {
      uLong VAR_8 = VAR_4->crc;

      do
      {
         uInt VAR_9 = (uInt)VAR_6;

         if (VAR_9 == 0)
            VAR_9 = (uInt)-1;


         VAR_8 = FUNC_1(VAR_8, VAR_5, VAR_9);





         VAR_5 += VAR_9;
         VAR_6 -= VAR_9;
      }
      while (VAR_6 > 0);


      VAR_4->crc = (png_uint_32)VAR_8;
   }
}
