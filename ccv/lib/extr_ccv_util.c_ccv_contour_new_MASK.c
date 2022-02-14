
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_point_t ;
struct TYPE_4__ {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {scalar_t__ set; scalar_t__ size; TYPE_1__ rect; } ;
typedef TYPE_2__ ccv_contour_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int ) ;

ccv_contour_t* FUNC_2(int VAR_0)
{
 ccv_contour_t* VAR_1 = (ccv_contour_t*)FUNC_0(sizeof(ccv_contour_t));
 VAR_1->rect.x = VAR_1->rect.y =
 VAR_1->rect.width = VAR_1->rect.height = 0;
 VAR_1->size = 0;
 if (VAR_0)
  VAR_1->set = FUNC_1(sizeof(ccv_point_t), 5, 0);
 else
  VAR_1->set = 0;
 return VAR_1;
}
