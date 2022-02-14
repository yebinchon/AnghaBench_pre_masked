
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqrequest {int kqr_state; scalar_t__ kqr_thread; } ;
struct kqworkloop {struct kqrequest kqwl_request; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(struct kqworkloop *VAR_2)
{
 struct kqrequest *VAR_3 = &VAR_2->kqwl_request;
 return (VAR_3->kqr_state & VAR_0) &&
   (VAR_3->kqr_thread == VAR_1);
}
