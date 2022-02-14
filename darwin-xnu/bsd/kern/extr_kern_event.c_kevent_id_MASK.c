
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct proc {int dummy; } ;
struct kevent_id_args {int flags; scalar_t__ data_available; int data_out; int nevents; int eventlist; int nchanges; int changelist; scalar_t__ id; } ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int ,int *,int ,int ,int ,int ,int ,int ,int,unsigned long long,int ,int *) ;

int
FUNC_1(struct proc *VAR_3, struct kevent_id_args *VAR_4, int32_t *VAR_5)
{

 VAR_4->flags &= VAR_1;

 return FUNC_0(VAR_3,
                        (kqueue_id_t)VAR_4->id, ((void*)0),
                        VAR_4->changelist, VAR_4->nchanges,
                        VAR_4->eventlist, VAR_4->nevents,
                        VAR_4->data_out, (uint64_t)VAR_4->data_available,
                        (VAR_4->flags | VAR_0),
                        0ULL,
                        VAR_2,
                        VAR_5);
}
