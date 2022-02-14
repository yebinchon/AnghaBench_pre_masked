
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct lpfc_hba* ring; } ;
struct lpfc_hba {TYPE_1__ sli; int brd_no; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_1)
{

 FUNC_0(&VAR_0, VAR_1->brd_no);


 FUNC_1(VAR_1->sli.ring);
 VAR_1->sli.ring = ((void*)0);

 FUNC_1(VAR_1);
 return;
}
