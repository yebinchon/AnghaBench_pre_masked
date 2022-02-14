
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;
struct kqueue {int kq_state; int kq_wqs; } ;
struct kqtailq {int dummy; } ;
struct knote {int kn_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct kqtailq*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct knote* FUNC_3 (struct kqtailq*) ;
 int VAR_6 ;
 int FUNC_4 (struct kqueue*) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct knote*) ;
 int FUNC_7 (struct kqueue*) ;
 struct kqtailq* FUNC_8 (struct kqueue*,int *) ;
 int FUNC_9 (struct waitq*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(struct kqueue *VAR_8)
{
 struct knote *VAR_9;
 struct kqtailq *VAR_10;
 int VAR_11;

 FUNC_7(VAR_8);

 FUNC_5((VAR_8->kq_state & (VAR_5|VAR_4)) == 0);

 FUNC_1(FUNC_2(VAR_0),
   FUNC_4(VAR_8), 0);




 VAR_10 = FUNC_8(VAR_8, ((void*)0));
 while ((VAR_9 = FUNC_3(VAR_10)) != ((void*)0)) {
  FUNC_5(VAR_9->kn_status & VAR_1);
  FUNC_6(VAR_9);
 }

 VAR_11 = (VAR_8->kq_state & VAR_3);
 VAR_8->kq_state &= ~(VAR_2 | VAR_3);

 if (VAR_11) {

  FUNC_9((struct waitq *)&VAR_8->kq_wqs,
                     FUNC_0(VAR_10),
                     VAR_6,
                     VAR_7);
 }
}
