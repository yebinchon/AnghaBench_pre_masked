
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int gsize ;
typedef int gint ;
typedef int gdouble ;
typedef int gchar ;
typedef int gboolean ;
struct TYPE_11__ {scalar_t__ code; int message; } ;
struct TYPE_10__ {int arg; int * arg_data; scalar_t__ long_name; } ;
typedef TYPE_1__ GOptionEntry ;
typedef int GKeyFile ;
typedef TYPE_2__ GError ;


 scalar_t__ VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int const*,scalar_t__,TYPE_2__**) ;
 int FUNC_3 (int *,int const*,scalar_t__,TYPE_2__**) ;
 int FUNC_4 (int *,int const*,scalar_t__,TYPE_2__**) ;
 int * FUNC_5 (int *,int const*,scalar_t__,TYPE_2__**) ;
 int ** FUNC_6 (int *,int const*,scalar_t__,int *,TYPE_2__**) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (char*,int ) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

int FUNC_11(GKeyFile *VAR_2, const gchar *VAR_3, GOptionEntry *VAR_4) {
 GError *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7, VAR_8;



 if (!VAR_2) return -1;
 if (!FUNC_7(VAR_2, VAR_3)) return 0;


 for (VAR_7 = 0; VAR_4[VAR_7].long_name; VAR_7++) {
  GOptionEntry *VAR_9 = &(VAR_4[VAR_7]);
  gchar *VAR_10;
  gchar **VAR_11;
  gboolean VAR_12 = 0;
  gint VAR_13 = 0;
  gdouble VAR_14 = 0;
  gsize VAR_15 = 0;

  switch (VAR_9->arg) {
  case 133:
  case 129:

   if (((void*)0) == VAR_9->arg_data || ((void*)0) != *(gchar **)(VAR_9->arg_data)) break;

   VAR_10 = FUNC_5(VAR_2, VAR_3, VAR_9->long_name, &VAR_5);
   if (!VAR_5) {

    *(gchar **)(VAR_9->arg_data) = FUNC_9(VAR_10);
   }
   break;
  case 132:
  case 128:

   if (((void*)0) == VAR_9->arg_data || ((void*)0) != *(gchar ***)(VAR_9->arg_data)) break;

   VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_9->long_name, &VAR_15, &VAR_5);
   if (!VAR_5) {
    for (VAR_8 = 0; VAR_11[VAR_8]; VAR_8++) {
     VAR_11[VAR_8] = FUNC_10(VAR_11[VAR_8]);
    }
    *(gchar ***)(VAR_9->arg_data) = VAR_11;
   }
   break;
  case 130:
   VAR_12 = FUNC_2(VAR_2, VAR_3, VAR_9->long_name, &VAR_5);
   if (!VAR_5) {
    *(int *)(VAR_9->arg_data) = VAR_12;
   }
   break;
  case 131:
   VAR_13 = FUNC_4(VAR_2, VAR_3, VAR_9->long_name, &VAR_5);
   if (!VAR_5) {
    *(gint *)(VAR_9->arg_data) = VAR_13;
   }
   break;
  default:
   FUNC_0("%s: (keyfile) the option %d can't be handled", VAR_1, VAR_9->arg);
   break;
  }

  if (VAR_5) {
   if (VAR_5->code != VAR_0) {
    FUNC_8("%s", VAR_5->message);
    VAR_6 = -1;
   }

   FUNC_1(VAR_5);
   VAR_5 = ((void*)0);
  }
 }

 return VAR_6;
}
