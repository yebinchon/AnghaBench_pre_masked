
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;


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
 int FUNC_0 (char*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_1(png_uint_32 VAR_11)
{
   if (VAR_11 & VAR_7)
      FUNC_0(" --file");
   if (VAR_11 & VAR_8)
      FUNC_0(" --stdio");
   if (!(VAR_11 & VAR_6))
      FUNC_0(" --nostrict");
   if (VAR_11 & VAR_9)
      FUNC_0(" --verbose");
   if (VAR_11 & VAR_4)
      FUNC_0(" --preserve");
   if (VAR_11 & VAR_3)
      FUNC_0(" --keep-going");
   if (VAR_11 & VAR_0)
      FUNC_0(" --accumulate");
   if (!(VAR_11 & VAR_1))
      FUNC_0(" --slow");
   if (VAR_11 & VAR_10)
      FUNC_0(" --sRGB-16bit");
   if (VAR_11 & VAR_5)
      FUNC_0(" --noreseed");

   if (VAR_11 & VAR_2)
      FUNC_0(" --fault-gbg-warning");

}
