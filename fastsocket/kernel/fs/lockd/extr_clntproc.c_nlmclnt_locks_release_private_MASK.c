
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; int list; } ;
struct TYPE_4__ {TYPE_1__ nfs_fl; } ;
struct file_lock {TYPE_2__ fl_u; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct file_lock *VAR_0)
{
 FUNC_0(&VAR_0->fl_u.nfs_fl.list);
 FUNC_1(VAR_0->fl_u.nfs_fl.owner);
}
