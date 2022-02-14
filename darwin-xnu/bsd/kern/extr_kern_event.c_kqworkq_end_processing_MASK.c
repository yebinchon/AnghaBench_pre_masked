
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {int kqwq_kqueue; } ;
struct kqrequest {int kqr_state; int kqr_qos_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kqworkq*) ;
 int FUNC_1 (struct kqworkq*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct kqworkq*,struct kqrequest*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct kqworkq *VAR_3, struct kqrequest *VAR_4,
  int VAR_5)
{
 if (!FUNC_2(&VAR_3->kqwq_kqueue, VAR_4->kqr_qos_index)) {

  FUNC_0(VAR_3);
  VAR_4->kqr_state |= VAR_1;
  FUNC_1(VAR_3);
 }

 if (VAR_5 & VAR_0) {




  int VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5,
    VAR_2);
  if (VAR_6 == 0) {
   return -1;
  }
 }

 return 0;
}
