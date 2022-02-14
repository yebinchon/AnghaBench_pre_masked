
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli_ring {int ringno; } ;
struct lpfc_hba {int sli3_options; int CAregaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_2, struct lpfc_sli_ring *VAR_3)
{
 int VAR_4 = VAR_3->ringno;




 if (!(VAR_2->sli3_options & VAR_1)) {
  FUNC_1();
  FUNC_2(VAR_0 << (VAR_4 * 4), VAR_2->CAregaddr);
  FUNC_0(VAR_2->CAregaddr);
 }
}
