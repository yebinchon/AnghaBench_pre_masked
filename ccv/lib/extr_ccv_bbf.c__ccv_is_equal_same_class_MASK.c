
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {double width; int x; int y; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_6__ {TYPE_2__ rect; TYPE_1__ classification; } ;
typedef TYPE_3__ ccv_comp_t ;



__attribute__((used)) static int FUNC_0(const void* VAR_0, const void* VAR_1, void* VAR_2)
{
 const ccv_comp_t* VAR_3 = (const ccv_comp_t*)VAR_0;
 const ccv_comp_t* VAR_4 = (const ccv_comp_t*)VAR_1;
 int VAR_5 = (int)(VAR_3->rect.width * 0.25 + 0.5);

 return VAR_4->classification.id == VAR_3->classification.id &&
     VAR_4->rect.x <= VAR_3->rect.x + VAR_5 &&
     VAR_4->rect.x >= VAR_3->rect.x - VAR_5 &&
     VAR_4->rect.y <= VAR_3->rect.y + VAR_5 &&
     VAR_4->rect.y >= VAR_3->rect.y - VAR_5 &&
     VAR_4->rect.width <= (int)(VAR_3->rect.width * 1.5 + 0.5) &&
     (int)(VAR_4->rect.width * 1.5 + 0.5) >= VAR_3->rect.width;
}
