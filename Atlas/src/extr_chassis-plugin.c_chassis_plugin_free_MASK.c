
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* version; scalar_t__ module; struct TYPE_4__* name; struct TYPE_4__* option_grp_name; } ;
typedef TYPE_1__ chassis_plugin ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(chassis_plugin *VAR_0) {
 if (VAR_0->option_grp_name) FUNC_0(VAR_0->option_grp_name);
 if (VAR_0->name) FUNC_0(VAR_0->name);
 if (VAR_0->module) FUNC_1(VAR_0->module);
 if (VAR_0->version) FUNC_0(VAR_0->version);

 FUNC_0(VAR_0);
}
