
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; } ;
typedef TYPE_2__ ccv_point_t ;
struct TYPE_7__ {int x; int y; int width; int height; } ;
struct TYPE_9__ {int size; int m10; int m01; int m11; int m20; int m02; scalar_t__ set; TYPE_1__ rect; } ;
typedef TYPE_3__ ccv_contour_t ;


 int FUNC_0 (scalar_t__,TYPE_2__*) ;

void FUNC_1(ccv_contour_t* VAR_0, ccv_point_t VAR_1)
{
 if (VAR_0->size == 0)
 {
  VAR_0->rect.x = VAR_1.x;
  VAR_0->rect.y = VAR_1.y;
  VAR_0->rect.width = VAR_0->rect.height = 1;
  VAR_0->m10 = VAR_1.x;
  VAR_0->m01 = VAR_1.y;
  VAR_0->m11 = VAR_1.x * VAR_1.y;
  VAR_0->m20 = VAR_1.x * VAR_1.x;
  VAR_0->m02 = VAR_1.y * VAR_1.y;
  VAR_0->size = 1;
 } else {
  if (VAR_1.x < VAR_0->rect.x)
  {
   VAR_0->rect.width += VAR_0->rect.x - VAR_1.x;
   VAR_0->rect.x = VAR_1.x;
  } else if (VAR_1.x > VAR_0->rect.x + VAR_0->rect.width - 1) {
   VAR_0->rect.width = VAR_1.x - VAR_0->rect.x + 1;
  }
  if (VAR_1.y < VAR_0->rect.y)
  {
   VAR_0->rect.height += VAR_0->rect.y - VAR_1.y;
   VAR_0->rect.y = VAR_1.y;
  } else if (VAR_1.y > VAR_0->rect.y + VAR_0->rect.height - 1) {
   VAR_0->rect.height = VAR_1.y - VAR_0->rect.y + 1;
  }
  VAR_0->m10 += VAR_1.x;
  VAR_0->m01 += VAR_1.y;
  VAR_0->m11 += VAR_1.x * VAR_1.y;
  VAR_0->m20 += VAR_1.x * VAR_1.x;
  VAR_0->m02 += VAR_1.y * VAR_1.y;
  VAR_0->size++;
 }
 if (VAR_0->set)
  FUNC_0(VAR_0->set, &VAR_1);
}
