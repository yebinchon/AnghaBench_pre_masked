
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_device {int node; } ;
struct TYPE_4__ {int fccp; } ;
struct TYPE_3__ {int fecp; } ;
struct fs_enet_private {TYPE_2__ fcc; TYPE_1__ fec; int interrupt; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 struct of_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fs_enet_private *VAR_2)
{
 struct of_device *VAR_3 = FUNC_2(VAR_2->dev);

 VAR_2->interrupt = FUNC_1(VAR_3->node, 0, ((void*)0));
 if (VAR_2->interrupt == VAR_1)
  return -VAR_0;

 VAR_2->fec.fecp = FUNC_0(VAR_3->node, 0);
 if (!VAR_2->fcc.fccp)
  return -VAR_0;

 return 0;
}
