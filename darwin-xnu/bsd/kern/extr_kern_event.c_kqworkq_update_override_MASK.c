
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {int dummy; } ;
struct kqrequest {scalar_t__ kqr_override_index; scalar_t__ kqr_thread; int kqr_qos_index; } ;
struct knote {scalar_t__ kn_qos_index; } ;
typedef scalar_t__ kq_index_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct kqworkq*) ;
 int FUNC_2 (struct kqworkq*) ;
 struct kqrequest* FUNC_3 (struct kqworkq*,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct kqworkq *VAR_0, struct knote *VAR_1,
  kq_index_t VAR_2)
{
 struct kqrequest *VAR_3;
 kq_index_t VAR_4;
 kq_index_t VAR_5 = VAR_1->kn_qos_index;

 if (VAR_2 <= VAR_5) {
  return;
 }

 VAR_3 = FUNC_3(VAR_0, VAR_5);

 FUNC_1(VAR_0);
 VAR_4 = VAR_3->kqr_override_index;
 if (VAR_2 > FUNC_0(VAR_3->kqr_qos_index, VAR_4)) {
  VAR_3->kqr_override_index = VAR_2;


  if (VAR_3->kqr_thread) {
   if (VAR_4)
    FUNC_5(VAR_3->kqr_thread, VAR_2);
   else
    FUNC_4(VAR_3->kqr_thread, VAR_2);
  }
 }
 FUNC_2(VAR_0);
}
