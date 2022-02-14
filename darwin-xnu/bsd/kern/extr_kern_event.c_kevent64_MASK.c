
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct kevent64_args {unsigned int flags; int timeout; int nevents; int eventlist; int nchanges; int changelist; scalar_t__ fd; } ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int ,int *,int ,int ,int ,int ,unsigned long long,unsigned long long,unsigned int,int ,int ,int *) ;

int
FUNC_1(struct proc *VAR_3, struct kevent64_args *VAR_4, int32_t *VAR_5)
{
 unsigned int VAR_6;


 VAR_6 = VAR_4->flags & VAR_1;
 VAR_6 |= VAR_0;

 return FUNC_0(VAR_3,
                        (kqueue_id_t)VAR_4->fd, ((void*)0),
                        VAR_4->changelist, VAR_4->nchanges,
                        VAR_4->eventlist, VAR_4->nevents,
                        0ULL, 0ULL,
                        VAR_6,
                        VAR_4->timeout,
                        VAR_2,
                        VAR_5);
}
