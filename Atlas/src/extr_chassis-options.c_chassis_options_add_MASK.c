
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int gint ;
typedef int gchar ;
typedef int chassis_options_t ;
typedef int chassis_option_t ;
typedef int GOptionArg ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int ,int ,int ,char const*,char const*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

int FUNC_4(chassis_options_t *VAR_0,
  const char *VAR_1,
  gchar VAR_2,
  gint VAR_3,
  GOptionArg VAR_4,
  gpointer VAR_5,
  const char *VAR_6,
  const char *VAR_7) {
 chassis_option_t *VAR_8;

 VAR_8 = FUNC_1();
 if (0 != FUNC_2(VAR_8,
   VAR_1,
   VAR_2,
   VAR_3,
   VAR_4,
   VAR_5,
   VAR_6,
   VAR_7) ||
     0 != FUNC_3(VAR_0, VAR_8)) {
  FUNC_0(VAR_8);
  return -1;
 } else {
  return 0;
 }
}
