
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int img_x; int img_y; } ;
typedef TYPE_1__ stbi__context ;
struct TYPE_8__ {int all_a; scalar_t__ ma; } ;
typedef TYPE_2__ stbi__bmp_data ;


 void* FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
   void *VAR_4;
   stbi__bmp_data VAR_5;

   VAR_5.all_a = 255;
   VAR_4 = FUNC_0(VAR_0, &VAR_5);
   FUNC_1( VAR_0 );
   if (VAR_4 == ((void*)0))
      return 0;
   if (VAR_1) *VAR_1 = VAR_0->img_x;
   if (VAR_2) *VAR_2 = VAR_0->img_y;
   if (VAR_3) *VAR_3 = VAR_5.ma ? 4 : 3;
   return 1;
}
