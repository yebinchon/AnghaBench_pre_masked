
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wq_name ;
struct qib_pportdata {int * qib_wq; } ;
struct qib_devdata {int num_pports; int unit; struct qib_pportdata* pport; } ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_1)
{
 int VAR_2;
 struct qib_pportdata *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pports; ++VAR_2) {
  VAR_3 = VAR_1->pport + VAR_2;
  if (!VAR_3->qib_wq) {
   char VAR_4[8];
   FUNC_3(VAR_4, sizeof(VAR_4), "qib%d_%d",
    VAR_1->unit, VAR_2);
   VAR_3->qib_wq =
    FUNC_0(VAR_4);
   if (!VAR_3->qib_wq)
    goto wq_error;
  }
 }
 return 0;
wq_error:
 FUNC_2("create_singlethread_workqueue failed for port %d\n",
  VAR_2 + 1);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_pports; ++VAR_2) {
  VAR_3 = VAR_1->pport + VAR_2;
  if (VAR_3->qib_wq) {
   FUNC_1(VAR_3->qib_wq);
   VAR_3->qib_wq = ((void*)0);
  }
 }
 return -VAR_0;
}
