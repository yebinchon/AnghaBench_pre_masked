
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dmacHw_HANDLE_t ;
struct TYPE_3__ {int module; int channel; } ;
typedef TYPE_1__ dmacHw_CBLK_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (void*,int ,int) ;

int FUNC_15(dmacHw_HANDLE_t VAR_0
    ) {
 dmacHw_CBLK_t *VAR_1 = FUNC_6(VAR_0);
 int VAR_2 = VAR_1->module;
 int VAR_3 = VAR_1->channel;


 FUNC_14((void *)VAR_1, 0, sizeof(dmacHw_CBLK_t));
 VAR_1->module = VAR_2;
 VAR_1->channel = VAR_3;


 FUNC_2(VAR_1->module);

 FUNC_10(VAR_1->module, VAR_1->channel);
 FUNC_9(VAR_1->module, VAR_1->channel);
 FUNC_8(VAR_1->module, VAR_1->channel);
 FUNC_7(VAR_1->module, VAR_1->channel);


 FUNC_12(VAR_1->module, VAR_1->channel);
 FUNC_0(VAR_1->module, VAR_1->channel);
 FUNC_4(VAR_1->module, VAR_1->channel);


 FUNC_13(VAR_1->module, VAR_1->channel);
 FUNC_1(VAR_1->module, VAR_1->channel);
 FUNC_11(VAR_1->module, VAR_1->channel);
 FUNC_3(VAR_1->module, VAR_1->channel);
 FUNC_5(VAR_1->module, VAR_1->channel);

 return 0;
}
