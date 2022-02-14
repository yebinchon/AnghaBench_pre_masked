
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct dc390_srb {struct scsi_cmnd* pcmd; struct dc390_srb* pNextSRB; } ;
struct dc390_dcb {int GoingSRBCnt; struct dc390_dcb* pNextDCB; scalar_t__ TagMask; struct dc390_srb* pGoingSRB; } ;
struct dc390_acb {struct dc390_dcb* pLinkDCB; } ;


 int FUNC_0 (struct dc390_acb*,struct dc390_srb*) ;

__attribute__((used)) static void
FUNC_1(struct dc390_acb* VAR_0, struct scsi_cmnd *VAR_1)
{
    struct dc390_dcb *VAR_2, *VAR_3;
    struct dc390_srb *VAR_4, *VAR_5;
    int VAR_6;
    struct scsi_cmnd *VAR_7;

    VAR_2 = VAR_0->pLinkDCB;
    VAR_3 = VAR_2;
    if (! VAR_3) return;
    do
    {
 VAR_4 = VAR_3->pGoingSRB;
 for (VAR_6 = 0; VAR_6 < VAR_3->GoingSRBCnt; VAR_6++)
 {
     VAR_5 = VAR_4->pNextSRB;
     VAR_7 = VAR_4->pcmd;
     FUNC_0 (VAR_0, VAR_4);
     VAR_4 = VAR_5;
 }
 VAR_3->GoingSRBCnt = 0;
 VAR_3->pGoingSRB = ((void*)0);
 VAR_3->TagMask = 0;
 VAR_3 = VAR_3->pNextDCB;
    } while( VAR_3 != VAR_2 );
}
