
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t gint ;
typedef int gchar ;
struct TYPE_3__ {int arg; int *** arg_data; scalar_t__ long_name; } ;
typedef TYPE_1__ GOptionEntry ;




 int FUNC_0 (char const*,int **) ;

int FUNC_1(const char *VAR_0, GOptionEntry *VAR_1) {
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].long_name; VAR_2++) {
  GOptionEntry VAR_3 = VAR_1[VAR_2];

  switch(VAR_3.arg) {
  case 129: {
   gchar **VAR_4 = *VAR_3.arg_data;
   FUNC_0(VAR_0, VAR_4);
   break;
  }
  case 128: {
   gchar ***VAR_5 = VAR_3.arg_data;
   gchar **VAR_6 = *VAR_5;
   if (((void*)0) != VAR_6) {
    gint VAR_7;
    for (VAR_7 = 0; VAR_6[VAR_7]; VAR_7++) FUNC_0(VAR_0, &VAR_6[VAR_7]);
   }
   break;
  }
  default:

   break;
  }
 }

 return 0;
}
