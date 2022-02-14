
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char gchar ;
struct TYPE_3__ {int options; int group; int keyfile; int entry_h; int entry_w; } ;
typedef TYPE_1__ YuiResolution ;
typedef int GtkWidget ;
typedef int GKeyFile ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,char*,int ) ;
 char* FUNC_5 (int ,int ,char*,int ) ;
 int FUNC_6 (int ,char*,int *,char*,char const*,int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;

GtkWidget* FUNC_10(GKeyFile * VAR_0, const gchar * VAR_1) {
 GtkWidget * VAR_2;
 YuiResolution * VAR_3;
 gchar *VAR_4, *VAR_5;

 VAR_2 = FUNC_2(FUNC_6(FUNC_9(), "key-file", VAR_0, "group", VAR_1, ((void*)0)));
 VAR_3 = FUNC_3(VAR_2);

 VAR_4 = FUNC_5(VAR_3->keyfile, VAR_3->group, "Width", 0);
 if ( !VAR_4 ) VAR_4 = "";
 VAR_5 = FUNC_5(VAR_3->keyfile, VAR_3->group, "Height", 0);
 if ( !VAR_5 ) VAR_5 = "";
 FUNC_8(FUNC_1(VAR_3->entry_w), VAR_4 );
 FUNC_8(FUNC_1(VAR_3->entry_h), VAR_5 );
 if (FUNC_4(VAR_3->keyfile, VAR_3->group, "Fullscreen", 0) == 1)
  FUNC_7(FUNC_0(VAR_3->options), 1);
 else if (FUNC_4(VAR_3->keyfile, VAR_3->group, "KeepRatio", 0) == 1)
  FUNC_7(FUNC_0(VAR_3->options), 2);
 else
  FUNC_7(FUNC_0(VAR_3->options), 0);

 return VAR_2;
}
