
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct whc_dbg {int dummy; } ;
struct TYPE_4__ {int * debugfs_dir; } ;
struct TYPE_5__ {TYPE_1__ pal; } ;
struct whc {TYPE_2__ wusbhc; TYPE_3__* dbg; } ;
struct TYPE_6__ {void* pzl_f; void* asl_f; void* di_f; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int,int *,struct whc*,int *) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int,int ) ;
 int VAR_3 ;

void FUNC_2(struct whc *VAR_4)
{
 if (VAR_4->wusbhc.pal.debugfs_dir == ((void*)0))
  return;

 VAR_4->dbg = FUNC_1(sizeof(struct whc_dbg), VAR_0);
 if (VAR_4->dbg == ((void*)0))
  return;

 VAR_4->dbg->di_f = FUNC_0("di", 0444,
           VAR_4->wusbhc.pal.debugfs_dir, VAR_4,
           &VAR_2);
 VAR_4->dbg->asl_f = FUNC_0("asl", 0444,
           VAR_4->wusbhc.pal.debugfs_dir, VAR_4,
           &VAR_1);
 VAR_4->dbg->pzl_f = FUNC_0("pzl", 0444,
           VAR_4->wusbhc.pal.debugfs_dir, VAR_4,
           &VAR_3);
}
