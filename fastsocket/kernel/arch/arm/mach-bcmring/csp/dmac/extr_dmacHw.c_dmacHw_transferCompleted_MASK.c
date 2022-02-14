
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dmacHw_TRANSFER_STATUS_e ;
typedef int dmacHw_HANDLE_t ;
struct TYPE_3__ {int channel; int module; } ;
typedef TYPE_1__ dmacHw_CBLK_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

dmacHw_TRANSFER_STATUS_e FUNC_3(dmacHw_HANDLE_t VAR_3
    ) {
 dmacHw_CBLK_t *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_4->module, VAR_4->channel)) {
  return VAR_0;
 } else if (FUNC_2(VAR_4->module) &
     (0x00000001 << VAR_4->channel)) {
  return VAR_2;
 }

 return VAR_1;
}
