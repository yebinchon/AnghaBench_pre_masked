
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device {int node; } ;
struct TYPE_2__ {void* sccp; void* ep; } ;
struct fs_enet_private {TYPE_1__ scc; int interrupt; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 struct of_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fs_enet_private *VAR_2)
{
 struct of_device *VAR_3 = FUNC_3(VAR_2->dev);

 VAR_2->interrupt = FUNC_2(VAR_3->node, 0, ((void*)0));
 if (VAR_2->interrupt == VAR_1)
  return -VAR_0;

 VAR_2->scc.sccp = FUNC_1(VAR_3->node, 0);
 if (!VAR_2->scc.sccp)
  return -VAR_0;

 VAR_2->scc.ep = FUNC_1(VAR_3->node, 1);
 if (!VAR_2->scc.ep) {
  FUNC_0(VAR_2->scc.sccp);
  return -VAR_0;
 }

 return 0;
}
