
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int hi; int lo; } ;
struct TYPE_6__ {int devCtl; int dstat; int sstat; TYPE_1__ ctl; scalar_t__ llp; int dar; int sar; } ;
typedef TYPE_2__ dmacHw_DESC_t ;
struct TYPE_7__ {TYPE_2__* pFree; TYPE_2__* pEnd; TYPE_2__* pProg; TYPE_2__* pTail; TYPE_2__* pHead; } ;
typedef TYPE_3__ dmacHw_DESC_RING_t ;


 TYPE_3__* FUNC_0 (void*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,...) ;
 int FUNC_3 (char const*,...) ;
 int FUNC_4 (char const*,...) ;
 int FUNC_5 (char const*,...) ;
 int FUNC_6 (char const*,...) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char const*,...) ;
 int FUNC_14 (char const*,...) ;
 int FUNC_15 (char const*,...) ;
 int FUNC_16 (char const*,...) ;
 int FUNC_17 (char const*,...) ;
 int FUNC_18 (char const*,...) ;
 int FUNC_19 (char const*,...) ;
 int FUNC_20 (char const*,...) ;
 int FUNC_21 (char const*,...) ;
 int FUNC_22 (char const*) ;
 int FUNC_23 (char const*) ;
 int FUNC_24 (char const*) ;
 int FUNC_25 (char const*,...) ;
 int FUNC_26 (char const*,...) ;
 int FUNC_27 (char const*,...) ;
 int FUNC_28 (char const*,...) ;

__attribute__((used)) static void FUNC_29(void *VAR_0,
       int (*VAR_1) (const char *, ...)
    ) {
 dmacHw_DESC_RING_t *VAR_2 = FUNC_0(VAR_0);
 dmacHw_DESC_t *VAR_3;

 if (VAR_2->pHead == ((void*)0)) {
  return;
 }

 VAR_3 = VAR_2->pHead;

 while ((dmacHw_DESC_t *) VAR_3->llp != VAR_2->pHead) {
  if (VAR_3 == VAR_2->pHead) {
   (*VAR_1) ("Head\n");
  }
  if (VAR_3 == VAR_2->pTail) {
   (*VAR_1) ("Tail\n");
  }
  if (VAR_3 == VAR_2->pProg) {
   (*VAR_1) ("Prog\n");
  }
  if (VAR_3 == VAR_2->pEnd) {
   (*VAR_1) ("End\n");
  }
  if (VAR_3 == VAR_2->pFree) {
   (*VAR_1) ("Free\n");
  }
  (*VAR_1) ("0x%X:\n", (uint32_t) VAR_3);
  (*VAR_1) ("sar    0x%0X\n", VAR_3->sar);
  (*VAR_1) ("dar    0x%0X\n", VAR_3->dar);
  (*VAR_1) ("llp    0x%0X\n", VAR_3->llp);
  (*VAR_1) ("ctl.lo 0x%0X\n", VAR_3->ctl.lo);
  (*VAR_1) ("ctl.hi 0x%0X\n", VAR_3->ctl.hi);
  (*VAR_1) ("sstat  0x%0X\n", VAR_3->sstat);
  (*VAR_1) ("dstat  0x%0X\n", VAR_3->dstat);
  (*VAR_1) ("devCtl 0x%0X\n", VAR_3->devCtl);

  VAR_3 = (dmacHw_DESC_t *) VAR_3->llp;
 }
 if (VAR_3 == VAR_2->pHead) {
  (*VAR_1) ("Head\n");
 }
 if (VAR_3 == VAR_2->pTail) {
  (*VAR_1) ("Tail\n");
 }
 if (VAR_3 == VAR_2->pProg) {
  (*VAR_1) ("Prog\n");
 }
 if (VAR_3 == VAR_2->pEnd) {
  (*VAR_1) ("End\n");
 }
 if (VAR_3 == VAR_2->pFree) {
  (*VAR_1) ("Free\n");
 }
 (*VAR_1) ("0x%X:\n", (uint32_t) VAR_3);
 (*VAR_1) ("sar    0x%0X\n", VAR_3->sar);
 (*VAR_1) ("dar    0x%0X\n", VAR_3->dar);
 (*VAR_1) ("llp    0x%0X\n", VAR_3->llp);
 (*VAR_1) ("ctl.lo 0x%0X\n", VAR_3->ctl.lo);
 (*VAR_1) ("ctl.hi 0x%0X\n", VAR_3->ctl.hi);
 (*VAR_1) ("sstat  0x%0X\n", VAR_3->sstat);
 (*VAR_1) ("dstat  0x%0X\n", VAR_3->dstat);
 (*VAR_1) ("devCtl 0x%0X\n", VAR_3->devCtl);
}
