
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;


 double VAR_0 ;
 int FUNC_0 (double) ;
 double FUNC_1 (int) ;

__attribute__((used)) static png_uint_32 FUNC_2(png_uint_32 VAR_1)
{
   if (VAR_1 > 0)
      return (png_uint_32)FUNC_0(.5-FUNC_1(VAR_1/65535.)*VAR_0);

   return 0xffffffff;
}
