
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t guint ;
typedef int gchar ;
struct TYPE_5__ {int * option_grp_name; } ;
typedef TYPE_1__ chassis_plugin ;
struct TYPE_6__ {size_t len; TYPE_1__** pdata; } ;
typedef TYPE_2__ GPtrArray ;
typedef int GOptionGroup ;
typedef int GOptionEntry ;
typedef int GOptionContext ;
typedef int GKeyFile ;
typedef int GError ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (int *,char const*,int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int*,char***,int **) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int const*,int *,int *,int *,int *) ;
 int * FUNC_8 (char*,int *) ;

int FUNC_9(GPtrArray *VAR_1,
  GOptionContext *VAR_2,
  int *VAR_3, char ***VAR_4,
  GKeyFile *VAR_5,
  const char *VAR_6,
  const char *VAR_7,
  GError **VAR_8) {
 guint VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1->len; VAR_9++) {
  GOptionEntry *VAR_10;
  chassis_plugin *VAR_11 = VAR_1->pdata[VAR_9];

  if (((void*)0) != (VAR_10 = FUNC_2(VAR_11))) {
   gchar *VAR_12 = FUNC_8("%s-module", VAR_11->option_grp_name);
   gchar *VAR_13 = FUNC_8("Show options for the %s-module", VAR_11->option_grp_name);
   const gchar *VAR_14 = VAR_11->option_grp_name;

   GOptionGroup *VAR_15 = FUNC_7(VAR_14, VAR_12, VAR_13, ((void*)0), ((void*)0));
   FUNC_6(VAR_15, VAR_10);
   FUNC_4(VAR_2, VAR_15);

   FUNC_3(VAR_13);
   FUNC_3(VAR_12);


   if (VAR_0 == FUNC_5(VAR_2, VAR_3, VAR_4, VAR_8)) {
    return -1;
   }

   if (VAR_5) {
    if (FUNC_1(VAR_5, VAR_6, VAR_10)) {
     return -1;
    }
   }


   FUNC_0(VAR_7, VAR_10);
  }
 }

 return 0;
}
