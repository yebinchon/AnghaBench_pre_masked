
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_infop ;
struct TYPE_3__ {int red; int green; int blue; int gray; int alpha; } ;
typedef TYPE_1__ png_color_8 ;
typedef int * png_charpp ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 void* FUNC_0 (int ,int ,unsigned int const) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(png_structp VAR_3, png_infop VAR_4, int VAR_5,
      png_charpp VAR_6)
{
   const int VAR_7 = FUNC_3(VAR_3, VAR_4);
   const int VAR_8 = (VAR_7 & VAR_1 ? 3 : 1) +
      (VAR_7 & VAR_0 ? 1 : 0);
   const unsigned int VAR_9 =
      VAR_7 & VAR_2 ? 8U : FUNC_2(VAR_3, VAR_4);
   png_color_8 VAR_10;

   if (VAR_5 != VAR_8)
      FUNC_1(VAR_3, "sBIT: incorrect parameter count");

   if (VAR_7 & VAR_1)
   {
      VAR_10.red = FUNC_0(VAR_3, VAR_6[0], VAR_9);
      VAR_10.green = FUNC_0(VAR_3, VAR_6[1], VAR_9);
      VAR_10.blue = FUNC_0(VAR_3, VAR_6[2], VAR_9);
      VAR_10.gray = 42;
   }

   else
   {
      VAR_10.red = VAR_10.green = VAR_10.blue = 42;
      VAR_10.gray = FUNC_0(VAR_3, VAR_6[0], VAR_9);
   }

   if (VAR_7 & VAR_0)
      VAR_10.alpha = FUNC_0(VAR_3, VAR_6[VAR_5-1], VAR_9);

   else
      VAR_10.alpha = 42;

   FUNC_4(VAR_3, VAR_4, &VAR_10);
}
