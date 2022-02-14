
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct b43legacy_wldev {struct b43legacy_dfsentry* dfsentry; } ;
struct TYPE_9__ {struct b43legacy_dfsentry* log; } ;
struct TYPE_8__ {int dentry; } ;
struct TYPE_7__ {int dentry; } ;
struct TYPE_12__ {int dentry; } ;
struct TYPE_11__ {int dentry; } ;
struct TYPE_10__ {int dentry; } ;
struct b43legacy_dfsentry {TYPE_3__ txstatlog; int subdir; TYPE_2__ file_restart; TYPE_1__ file_txstat; TYPE_6__ file_shm; TYPE_5__ file_ucode_regs; TYPE_4__ file_tsf; } ;


 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct b43legacy_dfsentry*) ;

void FUNC_3(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_dfsentry *VAR_1;

 if (!VAR_0)
  return;
 VAR_1 = VAR_0->dfsentry;
 if (!VAR_1)
  return;
 FUNC_0(VAR_0);

 FUNC_1(VAR_1->file_tsf.dentry);
 FUNC_1(VAR_1->file_ucode_regs.dentry);
 FUNC_1(VAR_1->file_shm.dentry);
 FUNC_1(VAR_1->file_txstat.dentry);
 FUNC_1(VAR_1->file_restart.dentry);

 FUNC_1(VAR_1->subdir);
 FUNC_2(VAR_1->txstatlog.log);
 FUNC_2(VAR_1);
}
