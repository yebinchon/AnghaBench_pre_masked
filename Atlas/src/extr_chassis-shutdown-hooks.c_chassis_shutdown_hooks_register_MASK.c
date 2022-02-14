
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gsize ;
typedef int gboolean ;
struct TYPE_5__ {int hooks; } ;
typedef TYPE_1__ chassis_shutdown_hooks_t ;
typedef int chassis_shutdown_hook_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (char const*,int ) ;

gboolean FUNC_5(chassis_shutdown_hooks_t *VAR_2,
  const char *VAR_3, gsize VAR_4,
  chassis_shutdown_hook_t *VAR_5) {
 gboolean VAR_6 = VAR_0;

 FUNC_0(VAR_2);
 if (((void*)0) == FUNC_3(VAR_2->hooks, VAR_3, VAR_4)) {
  FUNC_2(VAR_2->hooks, FUNC_4(VAR_3, VAR_4), VAR_5);
  VAR_6 = VAR_1;
 }
 FUNC_1(VAR_2);

 return VAR_6;
}
