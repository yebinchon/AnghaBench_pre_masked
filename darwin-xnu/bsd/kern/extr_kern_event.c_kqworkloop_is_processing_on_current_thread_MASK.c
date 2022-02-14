
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kqr_thread; } ;
struct kqueue {int kq_state; } ;
struct kqworkloop {TYPE_1__ kqwl_request; struct kqueue kqwl_kqueue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct kqueue*) ;

__attribute__((used)) static inline bool
FUNC_2(struct kqworkloop *VAR_1)
{
 struct kqueue *VAR_2 = &VAR_1->kqwl_kqueue;

 FUNC_1(VAR_2);

 if (VAR_2->kq_state & VAR_0) {





  return VAR_1->kqwl_request.kqr_thread == FUNC_0();
 }
 return 0;
}
