
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int dmacHw_HANDLE_t ;
typedef int dmacHw_CONTROLLER_ATTRIB_e ;
struct TYPE_3__ {int channel; int module; } ;
typedef TYPE_1__ dmacHw_CBLK_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;





 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;

uint32_t FUNC_7(dmacHw_HANDLE_t VAR_0,
       dmacHw_CONTROLLER_ATTRIB_e VAR_1
    ) {
 dmacHw_CBLK_t *VAR_2 = FUNC_6(VAR_0);

 switch (VAR_1) {
 case 129:
  return FUNC_4(VAR_2->module);
 case 130:
  return (1 <<
    (FUNC_3
     (VAR_2->module, VAR_2->module) + 2)) - 8;
 case 128:
  return FUNC_5(VAR_2->module);
 case 132:
  return 32 << FUNC_2(VAR_2->module,
          VAR_2->channel);
 case 131:
  return FUNC_0(VAR_0);
 }
 FUNC_1(0);
 return 0;
}
