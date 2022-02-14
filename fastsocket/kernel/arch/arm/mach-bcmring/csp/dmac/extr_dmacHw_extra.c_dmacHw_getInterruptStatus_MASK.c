
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dmacHw_INTERRUPT_STATUS_e ;
typedef int dmacHw_HANDLE_t ;
struct TYPE_3__ {int channel; int module; } ;
typedef TYPE_1__ dmacHw_CBLK_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

dmacHw_INTERRUPT_STATUS_e FUNC_4(dmacHw_HANDLE_t VAR_4
    ) {
 dmacHw_CBLK_t *VAR_5 = FUNC_0(VAR_4);
 dmacHw_INTERRUPT_STATUS_e VAR_6 = VAR_2;

 if (FUNC_3(VAR_5->module) &
     ((0x00000001 << VAR_5->channel))) {
  VAR_6 |= VAR_3;
 }
 if (FUNC_1(VAR_5->module) &
     ((0x00000001 << VAR_5->channel))) {
  VAR_6 |= VAR_0;
 }
 if (FUNC_2(VAR_5->module) &
     ((0x00000001 << VAR_5->channel))) {
  VAR_6 |= VAR_1;
 }

 return VAR_6;
}
