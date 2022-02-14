
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ hostdata; TYPE_1__* host; } ;
struct dc390_dcb {int GoingSRBCnt; struct dc390_dcb* pNextDCB; } ;
struct dc390_acb {int DCBCnt; struct dc390_dcb* pDCBRunRobin; struct dc390_dcb* pLinkDCB; struct dc390_dcb* pActiveDCB; struct dc390_dcb* pLastDCB; scalar_t__ scan_devices; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dc390_dcb*) ;

__attribute__((used)) static void FUNC_2(struct scsi_device *VAR_0)
{
 struct dc390_acb* VAR_1 = (struct dc390_acb*) VAR_0->host->hostdata;
 struct dc390_dcb* VAR_2 = (struct dc390_dcb*) VAR_0->hostdata;
 struct dc390_dcb* VAR_3 = VAR_1->pLinkDCB;

 VAR_1->scan_devices = 0;

 FUNC_0(VAR_2->GoingSRBCnt > 1);

 if (VAR_2 == VAR_1->pLinkDCB) {
  if (VAR_1->pLastDCB == VAR_2) {
   VAR_2->pNextDCB = ((void*)0);
   VAR_1->pLastDCB = ((void*)0);
  }
  VAR_1->pLinkDCB = VAR_2->pNextDCB;
 } else {
  while (VAR_3->pNextDCB != VAR_2)
   VAR_3 = VAR_3->pNextDCB;
  VAR_3->pNextDCB = VAR_2->pNextDCB;
  if (VAR_2 == VAR_1->pLastDCB)
   VAR_1->pLastDCB = VAR_3;
 }

 if (VAR_2 == VAR_1->pActiveDCB)
  VAR_1->pActiveDCB = ((void*)0);
 if (VAR_2 == VAR_1->pLinkDCB)
  VAR_1->pLinkDCB = VAR_2->pNextDCB;
 if (VAR_2 == VAR_1->pDCBRunRobin)
  VAR_1->pDCBRunRobin = VAR_2->pNextDCB;
 FUNC_1(VAR_2);

 VAR_1->DCBCnt--;
}
