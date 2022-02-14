
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct proc {int dummy; } ;
struct kqueue {int kq_state; } ;
struct TYPE_3__ {int kqwl; struct kqueue* kq; } ;
typedef TYPE_1__ kqueue_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct kqueue*) ;
 int FUNC_3 (struct proc*,struct kqueue*) ;
 scalar_t__ FUNC_4 (struct kqueue*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_7(struct proc *VAR_2, kqueue_t VAR_3)
{
 struct kqueue *VAR_4 = VAR_3.kq;
 if (VAR_4->kq_state & VAR_1) {
  FUNC_0(VAR_2);
  if (FUNC_4(VAR_4, VAR_0)) {
   thread_t VAR_5 = FUNC_5(VAR_3.kqwl);
   FUNC_3(VAR_2, VAR_4);
   FUNC_1(VAR_2);
   if (VAR_5) FUNC_6(VAR_5);
   FUNC_2(VAR_4);
  } else {
   FUNC_1(VAR_2);
  }
 }
}
