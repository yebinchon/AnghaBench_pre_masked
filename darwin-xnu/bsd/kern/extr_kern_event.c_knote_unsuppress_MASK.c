
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkloop {int dummy; } ;
struct kqueue {int kq_state; } ;
struct kqtailq {int dummy; } ;
struct knote {int kn_status; int kn_qos_override; int kn_qos_index; int kn_req_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct kqtailq*) ;
 int FUNC_1 (struct kqtailq*,struct knote*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct knote*) ;
 struct kqueue* FUNC_3 (struct knote*) ;
 int FUNC_4 (struct knote*) ;
 int FUNC_5 (struct kqworkloop*) ;
 int FUNC_6 (struct kqworkloop*) ;
 int FUNC_7 (struct kqueue*) ;
 struct kqtailq* FUNC_8 (struct kqueue*,struct knote*) ;
 scalar_t__ FUNC_9 (struct kqworkloop*) ;
 int FUNC_10 (struct kqworkloop*,int ,int ) ;

__attribute__((used)) static void
FUNC_11(struct knote *VAR_5)
{
 struct kqtailq *VAR_6;
 struct kqueue *VAR_7 = FUNC_3(VAR_5);

 FUNC_7(VAR_7);

 if ((VAR_5->kn_status & VAR_1) == 0)
  return;

 VAR_5->kn_status &= ~VAR_1;
 VAR_6 = FUNC_8(VAR_7, VAR_5);
 FUNC_1(VAR_6, VAR_5, VAR_4);





 if ((VAR_5->kn_status & VAR_0) == 0) {
  VAR_5->kn_qos_override = VAR_5->kn_req_index;
 }
 VAR_5->kn_qos_index = VAR_5->kn_qos_override;


 if (FUNC_2(VAR_5) && (VAR_5->kn_status & VAR_0)) {
  FUNC_4(VAR_5);
 }

 if ((VAR_7->kq_state & VAR_3) && FUNC_0(VAR_6)) {
  struct kqworkloop *VAR_8 = (struct kqworkloop *)VAR_7;

  if (FUNC_9(VAR_8)) {





  } else {
   FUNC_5(VAR_8);
   FUNC_10(VAR_8, VAR_2, 0);
   FUNC_6(VAR_8);
  }
 }
}
