
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct kevent_args {int timeout; int nevents; int eventlist; int nchanges; int changelist; scalar_t__ fd; } ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*,int ,int *,int ,int ,int ,int ,unsigned long long,unsigned long long,unsigned int,int ,int ,int *) ;

int
FUNC_1(struct proc *VAR_2, struct kevent_args *VAR_3, int32_t *VAR_4)
{
 unsigned int VAR_5 = VAR_0;

 return FUNC_0(VAR_2,
                        (kqueue_id_t)VAR_3->fd, ((void*)0),
                        VAR_3->changelist, VAR_3->nchanges,
                        VAR_3->eventlist, VAR_3->nevents,
                        0ULL, 0ULL,
                        VAR_5,
                        VAR_3->timeout,
                        VAR_1,
                        VAR_4);
}
