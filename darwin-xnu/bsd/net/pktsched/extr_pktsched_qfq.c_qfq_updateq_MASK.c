
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct qfq_if {int qif_ifq; } ;
struct qfq_class {int cl_inv_w; int * cl_sfb; int cl_q; int cl_handle; } ;
typedef int cqev_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qfq_if*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct qfq_if*) ;
 void FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct qfq_if *VAR_3, struct qfq_class *VAR_4, cqev_t VAR_5)
{
 FUNC_0(VAR_3->qif_ifq);

 if (VAR_2) {
  FUNC_4(VAR_0, "%s: %s update qid=%d weight=%d event=%s\n",
      FUNC_2(FUNC_1(VAR_3)), FUNC_6(VAR_3),
      VAR_4->cl_handle, (u_int32_t)(VAR_1 / VAR_4->cl_inv_w),
      FUNC_3(VAR_5));
 }

 if (FUNC_5(&VAR_4->cl_q) && VAR_4->cl_sfb != ((void*)0))
  return (FUNC_7(VAR_4->cl_sfb, VAR_5));
}
