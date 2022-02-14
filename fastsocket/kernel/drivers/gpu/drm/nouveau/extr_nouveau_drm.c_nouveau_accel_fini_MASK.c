
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {scalar_t__ fence; int cechan; int channel; int notify; } ;
struct TYPE_2__ {int (* dtor ) (struct nouveau_drm*) ;} ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct nouveau_drm*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nouveau_drm*) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_drm *VAR_0)
{
 FUNC_2(((void*)0), &VAR_0->notify);
 FUNC_0(&VAR_0->channel);
 FUNC_0(&VAR_0->cechan);
 if (VAR_0->fence)
  FUNC_1(VAR_0)->dtor(VAR_0);
}
