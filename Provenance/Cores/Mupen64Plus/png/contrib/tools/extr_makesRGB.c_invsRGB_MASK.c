
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_0 ;

png_uint_16
FUNC_4(unsigned int VAR_1)
{
   unsigned int VAR_2 = FUNC_3(FUNC_1(VAR_1));

   if (VAR_2 > 65535)
   {
      FUNC_2(VAR_0, "invsRGB(%u) overflows to %u\n", VAR_1, VAR_2);
      FUNC_0(1);
   }

   return (png_uint_16)VAR_2;
}
