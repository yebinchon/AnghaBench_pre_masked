
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct proc {int dummy; } ;
struct kevent_qos_args {int flags; scalar_t__ data_available; int data_out; int nevents; int eventlist; int nchanges; int changelist; scalar_t__ fd; } ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*,int ,int *,int ,int ,int ,int ,int ,int ,int ,unsigned long long,int ,int *) ;

int
FUNC_1(struct proc *VAR_2, struct kevent_qos_args *VAR_3, int32_t *VAR_4)
{

 VAR_3->flags &= VAR_0;

 return FUNC_0(VAR_2,
                        (kqueue_id_t)VAR_3->fd, ((void*)0),
                        VAR_3->changelist, VAR_3->nchanges,
                        VAR_3->eventlist, VAR_3->nevents,
                        VAR_3->data_out, (uint64_t)VAR_3->data_available,
                        VAR_3->flags,
                        0ULL,
                        VAR_1,
                        VAR_4);
}
