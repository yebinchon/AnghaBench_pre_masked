
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int hbalock; int fabric_iocb_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct lpfc_hba*,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct lpfc_hba *VAR_3)
{
 FUNC_0(VAR_2);

 FUNC_3(&VAR_3->hbalock);
 FUNC_1(&VAR_3->fabric_iocb_list, &VAR_2);
 FUNC_4(&VAR_3->hbalock);


 FUNC_2(VAR_3, &VAR_2, VAR_1,
         VAR_0);
}
