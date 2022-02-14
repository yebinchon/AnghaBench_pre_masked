
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcq_if {int tif_ifq; } ;
struct tcq_class {int * cl_sfb; int cl_q; int cl_pri; int cl_handle; } ;
typedef int cqev_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tcq_if*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;
 void FUNC_6 (int *,int ) ;
 int FUNC_7 (struct tcq_if*) ;

__attribute__((used)) static void
FUNC_8(struct tcq_if *VAR_2, struct tcq_class *VAR_3, cqev_t VAR_4)
{
 FUNC_0(VAR_2->tif_ifq);

 if (VAR_1) {
  FUNC_4(VAR_0, "%s: %s update qid=%d pri=%d event=%s\n",
      FUNC_2(FUNC_1(VAR_2)), FUNC_7(VAR_2),
      VAR_3->cl_handle, VAR_3->cl_pri, FUNC_3(VAR_4));
 }

 if (FUNC_5(&VAR_3->cl_q) && VAR_3->cl_sfb != ((void*)0))
  return (FUNC_6(VAR_3->cl_sfb, VAR_4));
}
