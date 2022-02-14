
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {int kqwq_kqueue; } ;
struct kqrequest {int kqr_state; } ;
typedef int kq_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kqworkq*) ;
 int FUNC_2 (struct kqworkq*) ;
 int FUNC_3 (int *,struct kqrequest*,int ,int ) ;
 struct kqrequest* FUNC_4 (struct kqworkq*,int ) ;

__attribute__((used)) static void
FUNC_5(struct kqworkq *VAR_3, kq_index_t VAR_4)
{
 struct kqrequest *VAR_5;


 FUNC_0(VAR_4 < VAR_2);

 FUNC_1(VAR_3);
 VAR_5 = FUNC_4(VAR_3, VAR_4);

 if ((VAR_5->kqr_state & VAR_1) == 0) {
  VAR_5->kqr_state |= VAR_1;
  if ((VAR_5->kqr_state & VAR_0) == 0) {
   FUNC_3(&VAR_3->kqwq_kqueue, VAR_5, VAR_4, 0);
  }
 }
 FUNC_2(VAR_3);
}
