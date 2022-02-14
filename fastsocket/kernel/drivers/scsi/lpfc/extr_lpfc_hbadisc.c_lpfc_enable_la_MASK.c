
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_sli {int sli_flag; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hbalock; int HCregaddr; struct lpfc_sli sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_3)
{
 uint32_t VAR_4;
 struct lpfc_sli *VAR_5 = &VAR_3->sli;
 FUNC_1(&VAR_3->hbalock);
 VAR_5->sli_flag |= VAR_1;
 if (VAR_3->sli_rev <= VAR_2) {
  VAR_4 = FUNC_0(VAR_3->HCregaddr);
  VAR_4 |= VAR_0;
  FUNC_3(VAR_4, VAR_3->HCregaddr);
  FUNC_0(VAR_3->HCregaddr);
 }
 FUNC_2(&VAR_3->hbalock);
}
