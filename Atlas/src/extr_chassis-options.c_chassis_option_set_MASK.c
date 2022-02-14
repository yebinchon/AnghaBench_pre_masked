
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpointer ;
typedef int gint ;
typedef int gchar ;
struct TYPE_3__ {void* arg_description; void* description; int arg_data; int arg; int flags; int short_name; void* long_name; } ;
typedef TYPE_1__ chassis_option_t ;
typedef int GOptionArg ;


 void* FUNC_0 (char const*) ;

int FUNC_1(chassis_option_t *VAR_0,
  const char *VAR_1,
  gchar VAR_2,
  gint VAR_3,
  GOptionArg VAR_4,
  gpointer VAR_5,
  const char *VAR_6,
  const char *VAR_7) {
 VAR_0->long_name = FUNC_0(VAR_1);
 VAR_0->short_name = VAR_2;
 VAR_0->flags = VAR_3;
 VAR_0->arg = VAR_4;
 VAR_0->arg_data = VAR_5;
 VAR_0->description = FUNC_0(VAR_6);
 VAR_0->arg_description = FUNC_0(VAR_7);

 return 0;
}
