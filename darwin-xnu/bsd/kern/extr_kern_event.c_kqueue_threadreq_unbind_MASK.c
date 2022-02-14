
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct kqrequest {int kqr_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct kqrequest*) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*,struct kqrequest*) ;

void
FUNC_3(struct proc *VAR_1, struct kqrequest *VAR_2)
{
 if (VAR_2->kqr_state & VAR_0) {
  FUNC_1(VAR_1, FUNC_0(VAR_2));
 } else {
  FUNC_2(VAR_1, VAR_2);
 }
}
