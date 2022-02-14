
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_structrp ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*) ;

void
FUNC_2(png_structrp VAR_0, png_uint_32 VAR_1)
{
   int VAR_2;

   FUNC_1(1, "in png_check_chunk_name");

   for (VAR_2=1; VAR_2<=4; ++VAR_2)
   {
      int VAR_3 = VAR_1 & 0xff;

      if (VAR_3 < 65 || VAR_3 > 122 || (VAR_3 > 90 && VAR_3 < 97))
         FUNC_0(VAR_0, "invalid chunk type");

      VAR_1 >>= 8;
   }
}
