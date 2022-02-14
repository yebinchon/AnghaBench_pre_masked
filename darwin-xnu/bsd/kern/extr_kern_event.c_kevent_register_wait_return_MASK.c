
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_p; } ;
struct kevent_internal_s {int flags; scalar_t__ data; } ;
struct _kevent_register {scalar_t__ eventout; scalar_t__* retval; int fp; int fd; int flags; int ueventlist; scalar_t__ handoff_thread; struct kevent_internal_s kev; struct kqueue* kq; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kevent_internal_s*,int *,int ,int ) ;
 int FUNC_1 (int ,int ,int ,struct kqueue*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct _kevent_register *VAR_2)
{
 struct kqueue *VAR_3 = VAR_2->kq;
 proc_t VAR_4 = VAR_3->kq_p;
 struct kevent_internal_s *VAR_5 = &VAR_2->kev;
 int VAR_6 = 0;

 if (VAR_2->handoff_thread) {
  FUNC_2(VAR_2->handoff_thread);
 }

 if (VAR_5->flags & (VAR_0|VAR_1)) {
  if ((VAR_5->flags & VAR_0) == 0) {
   VAR_5->flags |= VAR_0;
   VAR_5->data = 0;
  }
  VAR_6 = FUNC_0(VAR_5, &VAR_2->ueventlist, VAR_4, VAR_2->flags);
  if (VAR_6 == 0) VAR_2->eventout++;
 }

 FUNC_1(VAR_4, VAR_2->fd, VAR_2->fp, VAR_3);
 if (VAR_6 == 0) {
  *VAR_2->retval = VAR_2->eventout;
 }
 FUNC_3(VAR_6);
}
