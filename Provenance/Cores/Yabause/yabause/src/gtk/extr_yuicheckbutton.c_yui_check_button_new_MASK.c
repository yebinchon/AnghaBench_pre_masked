
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gchar ;
typedef int gboolean ;
struct TYPE_5__ {int key; int group; int keyfile; } ;
typedef TYPE_1__ YuiCheckButton ;
typedef int GtkWidget ;
typedef int GKeyFile ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,char*,int const*,char*,int *,char*,int const*,char*,int const*,int *) ;
 int FUNC_6 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int VAR_1 ;

GtkWidget * FUNC_10(const gchar * VAR_2, GKeyFile * VAR_3, const gchar * VAR_4, const gchar * VAR_5) {
 GtkWidget * VAR_6;
 YuiCheckButton * VAR_7;
 gboolean VAR_8;

 VAR_6 = FUNC_1(FUNC_5(FUNC_9(),
  "label", VAR_2,
  "key-file", VAR_3, "group", VAR_4, "key", VAR_5, ((void*)0)));
 VAR_7 = FUNC_3(VAR_6);

 FUNC_7(FUNC_0(VAR_7), VAR_0);

 VAR_8 = FUNC_4(VAR_7->keyfile, VAR_7->group, VAR_7->key, ((void*)0));
 FUNC_8(FUNC_0(VAR_7), VAR_8);

        FUNC_6(FUNC_0(VAR_7), "toggled", FUNC_2(VAR_1), VAR_7);

 return VAR_6;
}
