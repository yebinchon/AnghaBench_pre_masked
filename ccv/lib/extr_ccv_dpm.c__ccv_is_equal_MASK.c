
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int x; int y; } ;
struct TYPE_4__ {TYPE_1__ rect; } ;
typedef TYPE_2__ ccv_root_comp_t ;


 double FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(const void* VAR_0, const void* VAR_1, void* VAR_2)
{
 const ccv_root_comp_t* VAR_3 = (const ccv_root_comp_t*)VAR_0;
 const ccv_root_comp_t* VAR_4 = (const ccv_root_comp_t*)VAR_1;
 int VAR_5 = (int)(FUNC_0(VAR_3->rect.width, VAR_3->rect.height) * 0.25 + 0.5);

 return VAR_4->rect.x <= VAR_3->rect.x + VAR_5 &&
  VAR_4->rect.x >= VAR_3->rect.x - VAR_5 &&
  VAR_4->rect.y <= VAR_3->rect.y + VAR_5 &&
  VAR_4->rect.y >= VAR_3->rect.y - VAR_5 &&
  VAR_4->rect.width <= (int)(VAR_3->rect.width * 1.5 + 0.5) &&
  (int)(VAR_4->rect.width * 1.5 + 0.5) >= VAR_3->rect.width &&
  VAR_4->rect.height <= (int)(VAR_3->rect.height * 1.5 + 0.5) &&
  (int)(VAR_4->rect.height * 1.5 + 0.5) >= VAR_3->rect.height;
}
