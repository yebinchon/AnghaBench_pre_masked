
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct qfq_if {int dummy; } ;
struct qfq_group {scalar_t__ qfg_S; int qfg_slot_shift; } ;
struct qfq_class {scalar_t__ cl_inv_w; scalar_t__ cl_S; scalar_t__ cl_F; int cl_q; } ;
struct mbuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct qfq_group*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct qfq_if*,struct qfq_group*,struct qfq_class*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static inline int
FUNC_6(struct qfq_if *VAR_0, struct qfq_group *VAR_1,
    struct qfq_class *VAR_2)
{
#pragma unused(qif)
 VAR_2->cl_S = VAR_2->cl_F;
 if (FUNC_1(&VAR_2->cl_q)) {
  FUNC_2(VAR_1);
 } else {
  u_int32_t VAR_3;
  u_int64_t VAR_4;

  VAR_3 = FUNC_0((struct mbuf *)FUNC_5(&VAR_2->cl_q));
  VAR_2->cl_F = VAR_2->cl_S + (u_int64_t)VAR_3 * VAR_2->cl_inv_w;
  VAR_4 = FUNC_3(VAR_2->cl_S, VAR_1->qfg_slot_shift);
  if (VAR_4 == VAR_1->qfg_S)
   return (0);

  FUNC_2(VAR_1);
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4);
 }
 return (1);
}
