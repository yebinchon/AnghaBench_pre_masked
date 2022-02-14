
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_queue {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_eqe {int dummy; } ;


 int VAR_0 ;
 struct lpfc_eqe* FUNC_0 (struct lpfc_queue*) ;
 int FUNC_1 (struct lpfc_queue*,int ) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_1, struct lpfc_queue *VAR_2)
{
 struct lpfc_eqe *VAR_3;


 while ((VAR_3 = FUNC_0(VAR_2)))
  ;


 FUNC_1(VAR_2, VAR_0);
}
