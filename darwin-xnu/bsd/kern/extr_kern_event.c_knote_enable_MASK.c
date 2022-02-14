
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_state; } ;
struct knote {int kn_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct knote*) ;
 struct kqueue* FUNC_1 (struct knote*) ;
 int FUNC_2 (struct knote*) ;
 int FUNC_3 (struct knote*) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_3)
{
 if ((VAR_3->kn_status & VAR_0) == 0)
  return;

 VAR_3->kn_status &= ~VAR_0;

 if (VAR_3->kn_status & VAR_1) {
  struct kqueue *VAR_4 = FUNC_1(VAR_3);
  if ((VAR_4->kq_state & VAR_2) == 0) {
   FUNC_2(VAR_3);
  }
 } else if (FUNC_0(VAR_3)) {
  FUNC_3(VAR_3);
 }
}
