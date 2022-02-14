
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_infop ;
struct TYPE_3__ {scalar_t__ alpha; scalar_t__ gray; scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
typedef TYPE_1__ png_color_8 ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(png_structp VAR_0, png_infop VAR_1)
{

   png_color_8 VAR_2;
   VAR_2.red = VAR_2.green = VAR_2.blue = VAR_2.gray = VAR_2.alpha = 0;
   FUNC_0(VAR_0, VAR_1, &VAR_2);
}
