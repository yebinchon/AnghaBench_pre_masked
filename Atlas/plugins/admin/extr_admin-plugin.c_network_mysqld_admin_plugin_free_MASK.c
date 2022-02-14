
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* lua_script; struct TYPE_4__* admin_password; struct TYPE_4__* admin_username; struct TYPE_4__* address; scalar_t__ listen_con; } ;
typedef TYPE_1__ chassis_plugin_config ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(chassis_plugin_config *VAR_0) {
 if (VAR_0->listen_con) {

 }

 if (VAR_0->address) {
  FUNC_0(VAR_0->address);
 }

 if (VAR_0->admin_username) FUNC_0(VAR_0->admin_username);
 if (VAR_0->admin_password) FUNC_0(VAR_0->admin_password);
 if (VAR_0->lua_script) FUNC_0(VAR_0->lua_script);

 FUNC_0(VAR_0);
}
