
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_infop ;
struct TYPE_3__ {int red; int green; int blue; int gray; int alpha; } ;
typedef TYPE_1__ png_color_8 ;
typedef int png_byte ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(png_structp VAR_1, png_infop VAR_2)
{
   png_byte VAR_3;
   png_color_8 VAR_4;

   if (FUNC_1(VAR_1, VAR_2) == VAR_0)
      VAR_3 = 8;

   else
      VAR_3 = FUNC_0(VAR_1, VAR_2);


   VAR_4.red = VAR_4.green = VAR_4.blue = VAR_4.gray = VAR_4.alpha =
      (png_byte)(VAR_3+1);
   FUNC_2(VAR_1, VAR_2, &VAR_4);
}
