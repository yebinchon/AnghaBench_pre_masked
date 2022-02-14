
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_lock_state {int ls_count; } ;
struct TYPE_3__ {struct nfs4_lock_state* owner; } ;
struct TYPE_4__ {TYPE_1__ nfs4_fl; } ;
struct file_lock {TYPE_2__ fl_u; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 struct nfs4_lock_state *VAR_2 = VAR_1->fl_u.nfs4_fl.owner;

 VAR_0->fl_u.nfs4_fl.owner = VAR_2;
 FUNC_0(&VAR_2->ls_count);
}
