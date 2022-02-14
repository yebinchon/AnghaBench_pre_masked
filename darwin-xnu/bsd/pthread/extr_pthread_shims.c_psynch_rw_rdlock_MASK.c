
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct psynch_rw_rdlock_args {int flags; int rw_wc; int ugenval; int lgenval; int rwlock; } ;
typedef int proc_t ;
struct TYPE_2__ {int (* psynch_rw_rdlock ) (int ,int ,int ,int ,int ,int ,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int *) ;

int
FUNC_1(proc_t VAR_1, struct psynch_rw_rdlock_args * VAR_2, uint32_t * VAR_3)
{
 return VAR_0->psynch_rw_rdlock(VAR_1, VAR_2->rwlock, VAR_2->lgenval, VAR_2->ugenval, VAR_2->rw_wc, VAR_2->flags, VAR_3);
}
