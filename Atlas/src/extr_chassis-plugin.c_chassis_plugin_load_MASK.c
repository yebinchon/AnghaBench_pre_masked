
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int gpointer ;
typedef int gchar ;
struct TYPE_6__ {scalar_t__ magic; int (* new_stats ) () ;int stats; int version; scalar_t__ name; int (* init ) () ;int config; int module; } ;
typedef TYPE_1__ chassis_plugin ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,int const*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int const*,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

chassis_plugin *FUNC_9(const gchar *VAR_2) {
 int (*VAR_3)(chassis_plugin *VAR_4);
 chassis_plugin *VAR_5 = FUNC_1();

 VAR_5->module = FUNC_4(VAR_2, VAR_1);

 if (!VAR_5->module) {
  FUNC_2("loading module '%s' failed: %s", VAR_2, FUNC_3());

  FUNC_0(VAR_5);

  return ((void*)0);
 }


 if (!FUNC_5(VAR_5->module, "plugin_init", (gpointer) &VAR_3)) {
  FUNC_2("module '%s' doesn't have a init-function: %s", VAR_2, FUNC_3());
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 if (0 != VAR_3(VAR_5)) {
  FUNC_2("init-function for module '%s' failed", VAR_2);
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 if (VAR_5->magic != VAR_0) {
  FUNC_2("plugin '%s' doesn't match the current plugin interface (plugin is %lx, chassis is %lx)", VAR_2, VAR_5->magic, VAR_0);
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 if (VAR_5->init) {
  VAR_5->config = VAR_5->init();
 }


 if (!VAR_5->name) VAR_5->name = FUNC_6(VAR_2);

 if (!VAR_5->version) {
  FUNC_2("plugin '%s' doesn't set a version number, refusing to load this plugin", VAR_2);
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 if (VAR_5->new_stats) {
  VAR_5->stats = VAR_5->new_stats();
 }

 return VAR_5;
}
