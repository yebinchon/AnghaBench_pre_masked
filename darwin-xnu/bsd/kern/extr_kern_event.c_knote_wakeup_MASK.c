
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct waitq {int dummy; } ;
struct kqworkq {int dummy; } ;
struct kqworkloop {int dummy; } ;
struct kqueue {int kq_state; int kq_wqs; } ;
struct TYPE_2__ {int si_note; } ;
struct kqfile {TYPE_1__ kqf_sel; } ;
struct knote {int kn_qos_index; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct kqueue* FUNC_1 (struct knote*) ;
 int FUNC_2 (struct kqueue*) ;
 int FUNC_3 (struct kqworkloop*) ;
 int FUNC_4 (struct kqworkloop*,int ) ;
 int FUNC_5 (struct kqworkq*,int ) ;
 int FUNC_6 (struct waitq*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct knote *VAR_9)
{
 struct kqueue *VAR_10 = FUNC_1(VAR_9);

 FUNC_2(VAR_10);

 if (VAR_10->kq_state & VAR_6) {
  struct kqworkq *VAR_11 = (struct kqworkq *)VAR_10;

  FUNC_5(VAR_11, VAR_9->kn_qos_index);
 } else if (VAR_10->kq_state & VAR_5) {
  struct kqworkloop *VAR_12 = (struct kqworkloop *)VAR_10;





  if (!FUNC_3(VAR_12)) {
   FUNC_4(VAR_12, VAR_9->kn_qos_index);
  }
 } else {
  struct kqfile *VAR_13 = (struct kqfile *)VAR_10;


  if (VAR_10->kq_state & VAR_1)
   VAR_10->kq_state |= VAR_4;


  if (VAR_10->kq_state & (VAR_3 | VAR_2)) {
   VAR_10->kq_state &= ~(VAR_3 | VAR_2);
   FUNC_6((struct waitq *)&VAR_10->kq_wqs, VAR_0,
     VAR_7, VAR_8);
  }


  FUNC_0(&VAR_13->kqf_sel.si_note, 0);
 }
}
