
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dmacHw_HANDLE_t ;
struct TYPE_3__ {int channel; int module; } ;
typedef TYPE_1__ dmacHw_CBLK_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(dmacHw_HANDLE_t VAR_0
    ) {
 dmacHw_CBLK_t *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->module, VAR_1->channel);
 FUNC_0(VAR_1->module, VAR_1->channel);
 FUNC_1(VAR_1->module, VAR_1->channel);
}
