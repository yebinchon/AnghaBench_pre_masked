
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ fc_npr_cnt; } ;


 int FUNC_0 (struct lpfc_vport*) ;
 scalar_t__ FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_vport *VAR_0)
{
 FUNC_0(VAR_0);



 if (VAR_0->fc_npr_cnt)
  if (FUNC_1(VAR_0))
   return;

 FUNC_2(VAR_0);
}
