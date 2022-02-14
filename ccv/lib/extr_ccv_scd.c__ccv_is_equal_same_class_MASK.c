
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int x; int width; int y; int height; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_6__ {TYPE_2__ rect; TYPE_1__ classification; } ;
typedef TYPE_3__ ccv_comp_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(const void* VAR_0, const void* VAR_1, void* VAR_2)
{
 const ccv_comp_t* VAR_3 = (const ccv_comp_t*)VAR_0;
 const ccv_comp_t* VAR_4 = (const ccv_comp_t*)VAR_1;

 if (VAR_4->classification.id != VAR_3->classification.id)
  return 0;

 int VAR_5 = FUNC_0(FUNC_1(VAR_4->rect.x + VAR_4->rect.width, VAR_3->rect.x + VAR_3->rect.width) - FUNC_0(VAR_4->rect.x, VAR_3->rect.x), 0) * FUNC_0(FUNC_1(VAR_4->rect.y + VAR_4->rect.height, VAR_3->rect.y + VAR_3->rect.height) - FUNC_0(VAR_4->rect.y, VAR_3->rect.y), 0);
 int VAR_6 = FUNC_1(VAR_4->rect.width * VAR_4->rect.height, VAR_3->rect.width * VAR_3->rect.height);

 return VAR_5 >= 0.3 * VAR_6;
}
