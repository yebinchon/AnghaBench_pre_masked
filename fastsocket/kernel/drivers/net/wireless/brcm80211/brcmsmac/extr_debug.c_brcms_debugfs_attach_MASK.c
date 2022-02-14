
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcms_pub {int dbgfs_dir; TYPE_3__* wlc; } ;
struct TYPE_6__ {TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* d11core; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

int FUNC_3(struct brcms_pub *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_2->dbgfs_dir = FUNC_1(
   FUNC_2(&VAR_2->wlc->hw->d11core->dev), VAR_1);
 return FUNC_0(VAR_2->dbgfs_dir);
}
