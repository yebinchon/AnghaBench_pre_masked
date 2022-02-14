
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {void* hi; } ;
struct TYPE_6__ {int llpPhy; int llp; TYPE_1__ ctl; } ;
typedef TYPE_2__ dmacHw_DESC_t ;
struct TYPE_7__ {int virt2PhyOffset; int num; TYPE_2__* pHead; int pProg; TYPE_2__* pEnd; TYPE_2__* pTail; TYPE_2__* pFree; } ;
typedef TYPE_3__ dmacHw_DESC_RING_t ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int ,int) ;

int FUNC_4(void *VAR_2,
     uint32_t VAR_3,
     uint32_t VAR_4,
     uint32_t VAR_5
    ) {
 uint32_t VAR_6;
 dmacHw_DESC_RING_t *VAR_7;
 dmacHw_DESC_t *VAR_8;


 if ((uint32_t) VAR_2 & 0x00000003) {
  FUNC_0(0);
  return -1;
 }


 if (VAR_4 < FUNC_2(VAR_5)) {
  return -1;
 }

 VAR_7 = FUNC_1(VAR_2);
 VAR_7->pHead =
     (dmacHw_DESC_t *) ((uint32_t) VAR_7 + sizeof(dmacHw_DESC_RING_t));
 VAR_7->pFree = VAR_7->pTail = VAR_7->pEnd = VAR_7->pHead;
 VAR_7->pProg = VAR_1;

 VAR_8 = VAR_7->pHead;

 VAR_7->virt2PhyOffset = (uint32_t) VAR_2 - VAR_3;


 for (VAR_6 = 0; VAR_6 < VAR_5 - 1; VAR_6++) {

  FUNC_3((void *)VAR_8, 0, sizeof(dmacHw_DESC_t));

  VAR_8->llpPhy = (uint32_t) (VAR_8 + 1) - VAR_7->virt2PhyOffset;

  VAR_8->llp = (uint32_t) (VAR_8 + 1);

  VAR_8->ctl.hi = VAR_0;

  VAR_8++;
 }


 FUNC_3((void *)VAR_8, 0, sizeof(dmacHw_DESC_t));


 VAR_8->llpPhy = (uint32_t) VAR_7->pHead - VAR_7->virt2PhyOffset;



 VAR_8->llp = (uint32_t) VAR_7->pHead;

 VAR_8->ctl.hi = VAR_0;

 VAR_7->num = VAR_5;
 return 0;
}
