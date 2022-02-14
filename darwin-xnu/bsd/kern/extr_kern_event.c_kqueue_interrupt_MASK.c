
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;
struct kqueue {int kq_state; int kq_wqs; } ;
struct kqtailq {int dummy; } ;


 int FUNC_0 (struct kqtailq*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 struct kqtailq* FUNC_2 (struct kqueue*,int *) ;
 int FUNC_3 (struct waitq*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct kqueue *VAR_8)
{
 FUNC_1((VAR_8->kq_state & VAR_5) == 0);


 if ((VAR_8->kq_state & (VAR_4 | VAR_3)) != 0) {
  VAR_8->kq_state &= ~(VAR_4 | VAR_3);
  (void)FUNC_3((struct waitq *)&VAR_8->kq_wqs,
                           VAR_0,
                           VAR_6,
                           VAR_7);
 }


 if (VAR_8->kq_state & VAR_2) {
  struct kqtailq *VAR_9;

  FUNC_1(VAR_8->kq_state & VAR_1);

  VAR_8->kq_state &= ~VAR_2;
  VAR_9 = FUNC_2(VAR_8, ((void*)0));
  (void)FUNC_3((struct waitq *)&VAR_8->kq_wqs,
                           FUNC_0(VAR_9),
                           VAR_6,
                           VAR_7);
 }
}
