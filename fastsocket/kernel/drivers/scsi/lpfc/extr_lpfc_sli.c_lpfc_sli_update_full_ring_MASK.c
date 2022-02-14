
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iocb_cmd_full; } ;
struct lpfc_sli_ring {int ringno; TYPE_1__ stats; int flag; } ;
struct lpfc_hba {int CAregaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_3, struct lpfc_sli_ring *VAR_4)
{
 int VAR_5 = VAR_4->ringno;

 VAR_4->flag |= VAR_2;

 FUNC_1();





 FUNC_2((VAR_0|VAR_1) << (VAR_5*4), VAR_3->CAregaddr);
 FUNC_0(VAR_3->CAregaddr);

 VAR_4->stats.iocb_cmd_full++;
}
