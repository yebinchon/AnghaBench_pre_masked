
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gint ;
typedef char gchar ;
struct TYPE_5__ {int flags; int entry; int key; int group; int keyfile; int button; } ;
typedef TYPE_1__ YuiFileEntry ;
typedef int GtkWidget ;
typedef int GKeyFile ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_4 (int *) ;
 int VAR_2 ;
 char* FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*,int,char*,int *,char*,char const*,char*,char const*,int *) ;
 int FUNC_7 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 () ;

GtkWidget * FUNC_14(GKeyFile * VAR_5, const gchar * VAR_6, const gchar * VAR_7, gint VAR_8, const gchar * VAR_9) {
 GtkWidget * VAR_10;
 YuiFileEntry * VAR_11;
 gchar * VAR_12;

 VAR_10 = FUNC_2(FUNC_6(FUNC_13(), "spacing", 10,
  "key-file", VAR_5, "group", VAR_6, "key", VAR_7, ((void*)0)));
 VAR_11 = FUNC_4(VAR_10);

 VAR_11->flags = VAR_8;

 if (VAR_9) {
         FUNC_8(FUNC_0(VAR_11), FUNC_12(VAR_9), VAR_0, VAR_0, 0);
 }

        VAR_11->entry = FUNC_10 ();
        FUNC_8(FUNC_0(VAR_11), VAR_11->entry, VAR_1, VAR_1, 0);

 if (VAR_8 & VAR_2) {
         VAR_11->button = FUNC_9 ("Browse");
         FUNC_7(VAR_11->button, "clicked", FUNC_3(VAR_3), VAR_11);
         FUNC_8(FUNC_0(VAR_11), VAR_11->button, VAR_0, VAR_0, 0);
 }

 VAR_12 = FUNC_5(VAR_11->keyfile, VAR_11->group, VAR_11->key, 0);
 if ( !VAR_12 ) VAR_12 = "";
        FUNC_11(FUNC_1(VAR_11->entry), VAR_12 );
        FUNC_7(FUNC_1(VAR_11->entry), "changed", FUNC_3(VAR_4), VAR_11);

 return VAR_10;
}
