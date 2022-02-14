
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fence {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct nouveau_cli {TYPE_1__ base; } ;
struct nouveau_channel {int handle; struct nouveau_cli* cli; } ;


 int FUNC_0 (struct nouveau_cli*,char*,int ,int ) ;
 int FUNC_1 (struct nouveau_channel*,int,struct nouveau_fence**) ;
 int FUNC_2 (struct nouveau_fence**) ;
 int FUNC_3 (struct nouveau_fence*,int,int) ;

int
FUNC_4(struct nouveau_channel *VAR_0)
{
 struct nouveau_cli *VAR_1 = VAR_0->cli;
 struct nouveau_fence *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, 0, &VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_3(VAR_2, 0, 0);
  FUNC_2(&VAR_2);
 }

 if (VAR_3)
  FUNC_0(VAR_1, "failed to idle channel 0x%08x [%s]\n",
    VAR_0->handle, VAR_1->base.name);
 return VAR_3;
}
