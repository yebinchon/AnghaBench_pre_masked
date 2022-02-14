
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int dmacHw_HANDLE_t ;
struct TYPE_5__ {scalar_t__ pEnd; } ;
typedef TYPE_1__ dmacHw_DESC_RING_t ;
struct TYPE_6__ {int channel; int module; } ;
typedef TYPE_2__ dmacHw_CBLK_t ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (void*) ;
 TYPE_2__* FUNC_2 (int ) ;

uint32_t FUNC_3(dmacHw_HANDLE_t VAR_0,
      void *VAR_1
    ) {
 dmacHw_CBLK_t *VAR_2 = FUNC_2(VAR_0);
 dmacHw_DESC_RING_t *VAR_3 = FUNC_1(VAR_1);


 if (!FUNC_0(VAR_2->module, VAR_2->channel)) {

  if (VAR_3->pEnd) {

   return 1;
  }
 }
 return 0;
}
