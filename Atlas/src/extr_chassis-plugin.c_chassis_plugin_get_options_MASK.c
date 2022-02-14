
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int config; int * (* get_options ) (int ) ;} ;
typedef TYPE_1__ chassis_plugin ;
typedef int GOptionEntry ;


 int FUNC_0 (char*,int ) ;
 int * FUNC_1 (int ) ;

GOptionEntry *FUNC_2(chassis_plugin *VAR_0) {
 GOptionEntry * VAR_1;

 if (!VAR_0->get_options) return ((void*)0);

 if (((void*)0) == (VAR_1 = VAR_0->get_options(VAR_0->config))) {
  FUNC_0("adding config options for module '%s' failed", VAR_0->name);
 }

 return VAR_1;
}
