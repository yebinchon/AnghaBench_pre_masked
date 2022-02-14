
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; } ;
struct TYPE_4__ {TYPE_1__ hash; } ;
struct ttm_lock {TYPE_2__ base; int vt_holder; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(struct ttm_lock *VAR_1)
{
 return FUNC_0(VAR_1->vt_holder,
      VAR_1->base.hash.key, VAR_0);
}
