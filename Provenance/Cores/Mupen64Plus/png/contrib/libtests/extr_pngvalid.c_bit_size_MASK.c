
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_const_structp ;
typedef int png_byte ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static unsigned int
FUNC_1(png_const_structp VAR_0, png_byte VAR_1, png_byte VAR_2)
{
   switch (VAR_1)
   {
      default: FUNC_0(VAR_0, "invalid color type");

      case 0: return VAR_2;

      case 2: return 3*VAR_2;

      case 3: return VAR_2;

      case 4: return 2*VAR_2;

      case 6: return 4*VAR_2;
   }
}
