
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_const_structp ;



 int VAR_0 ;

 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(png_const_structp VAR_1, int VAR_2)
{
   switch (VAR_2)
   {
   default:
      FUNC_0(VAR_1, "invalid interlace type");

   case 128:
      return 1;

   case 129:
      return VAR_0;
   }
}
