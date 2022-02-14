
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;
struct kqueue {int kq_state; int kq_wqs; } ;
struct kqtailq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kqtailq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,...) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct kqueue*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct kqueue*) ;
 int FUNC_6 (struct kqueue*) ;
 struct kqtailq* FUNC_7 (struct kqueue*,int *) ;
 scalar_t__ FUNC_8 (struct kqueue*,int ) ;
 int FUNC_9 (struct kqueue*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct waitq*,int ,int,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct kqueue *VAR_14)
{
 struct kqtailq *VAR_15;

 FUNC_6(VAR_14);

 FUNC_4((VAR_14->kq_state & (VAR_8 | VAR_7)) == 0);
 FUNC_1(FUNC_2(VAR_0) | VAR_2,
               FUNC_3(VAR_14), 0);


 for (;;) {
  if (VAR_14->kq_state & VAR_3) {
   FUNC_1(FUNC_2(VAR_0) | VAR_1,
                 FUNC_3(VAR_14), 2);
   return -1;
  }

  if ((VAR_14->kq_state & VAR_4) == 0)
   break;


  VAR_14->kq_state |= VAR_5;
  VAR_15 = FUNC_7(VAR_14, ((void*)0));
  FUNC_11((struct waitq *)&VAR_14->kq_wqs,
    FUNC_0(VAR_15), VAR_11 | VAR_12,
    VAR_13);

  FUNC_9(VAR_14);
  FUNC_10(VAR_10);
  FUNC_5(VAR_14);
 }




 FUNC_12(&VAR_14->kq_wqs);
 VAR_14->kq_state &= ~VAR_6;


 if (FUNC_8(VAR_14, VAR_9)) {
  FUNC_1(FUNC_2(VAR_0) | VAR_1,
                FUNC_3(VAR_14), 1);
  return -1;
 }


 VAR_14->kq_state |= VAR_4;

 FUNC_1(FUNC_2(VAR_0) | VAR_1,
               FUNC_3(VAR_14));

 return 0;
}
