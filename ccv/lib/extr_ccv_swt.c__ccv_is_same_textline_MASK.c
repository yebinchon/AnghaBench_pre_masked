
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int width; int y; int height; } ;
struct TYPE_4__ {TYPE_1__ rect; } ;
typedef TYPE_2__ ccv_textline_t ;


 double FUNC_0 (int,int) ;
 double FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(const void* VAR_0, const void* VAR_1, void* VAR_2)
{
 ccv_textline_t* VAR_3 = (ccv_textline_t*)VAR_0;
 ccv_textline_t* VAR_4 = (ccv_textline_t*)VAR_1;
 int VAR_5 = FUNC_1(VAR_3->rect.x + VAR_3->rect.width, VAR_4->rect.x + VAR_4->rect.width) - FUNC_0(VAR_3->rect.x, VAR_4->rect.x);
 int VAR_6 = FUNC_1(VAR_3->rect.y + VAR_3->rect.height, VAR_4->rect.y + VAR_4->rect.height) - FUNC_0(VAR_3->rect.y, VAR_4->rect.y);

 double* VAR_7 = (double*)VAR_2;
 return (VAR_5 > 0 && VAR_6 > 0 &&
   VAR_5 * VAR_6 > VAR_7[0] * FUNC_0(VAR_3->rect.width * VAR_3->rect.height, VAR_4->rect.width * VAR_4->rect.height) &&
   VAR_5 * VAR_6 > VAR_7[1] * FUNC_1(VAR_3->rect.width * VAR_3->rect.height, VAR_4->rect.width * VAR_4->rect.height));
}
