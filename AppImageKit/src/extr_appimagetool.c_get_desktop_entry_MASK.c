
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GKeyFile ;


 int FUNC_0 (int ,char*,char*) ;
 int * FUNC_1 (int *,char*,char*,int *) ;
 int VAR_0 ;

gchar* FUNC_2(GKeyFile *VAR_1, char *VAR_2) {
    gchar *VAR_3 = FUNC_1 (VAR_1, "Desktop Entry", VAR_2, ((void*)0));
    if (! VAR_3){
        FUNC_0(VAR_0, "%s entry not found in desktop file\n", VAR_2);
    }
    return VAR_3;
}
