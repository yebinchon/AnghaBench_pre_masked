
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* nfsnode_t ;
struct TYPE_3__ {int n_openflags; int n_openlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*) ;

void
FUNC_4(nfsnode_t VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->n_openlock);
 if (!(VAR_2->n_openflags & VAR_0))
  FUNC_2("nfs_open_state_clear_busy");
 VAR_3 = (VAR_2->n_openflags & VAR_1);
 VAR_2->n_openflags &= ~(VAR_0|VAR_1);
 FUNC_1(&VAR_2->n_openlock);
 if (VAR_3)
  FUNC_3(&VAR_2->n_openflags);
}
