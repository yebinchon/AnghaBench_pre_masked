
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* owner; int list; int state; } ;
struct TYPE_7__ {TYPE_3__ nfs_fl; } ;
struct file_lock {TYPE_2__ fl_u; } ;
struct TYPE_9__ {TYPE_1__* host; } ;
struct TYPE_6__ {int h_granted; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 VAR_0->fl_u.nfs_fl.state = VAR_1->fl_u.nfs_fl.state;
 VAR_0->fl_u.nfs_fl.owner = FUNC_1(VAR_1->fl_u.nfs_fl.owner);
 FUNC_0(&VAR_0->fl_u.nfs_fl.list, &VAR_1->fl_u.nfs_fl.owner->host->h_granted);
}
