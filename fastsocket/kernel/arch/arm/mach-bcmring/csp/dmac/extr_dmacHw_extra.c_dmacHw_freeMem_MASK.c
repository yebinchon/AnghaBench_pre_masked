
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_2__* pFree; TYPE_2__* pTail; } ;
typedef TYPE_3__ dmacHw_DESC_RING_t ;
struct TYPE_11__ {int transferType; } ;
typedef TYPE_4__ dmacHw_CONFIG_t ;
struct TYPE_8__ {int lo; } ;
struct TYPE_9__ {int devCtl; scalar_t__ sar; scalar_t__ dar; TYPE_1__ ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 void FUNC_3 (void*) ;
 void FUNC_4 (void*) ;

int FUNC_5(dmacHw_CONFIG_t *VAR_3,
     void *VAR_4,
     void (*VAR_5) (void *)
    ) {
 dmacHw_DESC_RING_t *VAR_6 = FUNC_1(VAR_4);
 uint32_t VAR_7 = 0;

 if (VAR_5 == ((void*)0)) {
  return -1;
 }

 while ((VAR_6->pFree != VAR_6->pTail)
        && (VAR_6->pFree->ctl.lo & VAR_0)) {
  if (VAR_6->pFree->devCtl == VAR_1) {

   if (FUNC_0(VAR_3->transferType)) {
    (*VAR_5) ((void *)VAR_6->pFree->dar);
   } else {

    (*VAR_5) ((void *)VAR_6->pFree->sar);
   }

   VAR_6->pFree->devCtl = ~VAR_1;
  }
  FUNC_2(VAR_6, VAR_2);

  VAR_7++;
 }

 return VAR_7;
}
