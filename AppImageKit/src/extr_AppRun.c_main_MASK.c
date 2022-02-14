
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int FILE ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char*,...) ;
 char* FUNC_1 (size_t,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (char*,char**) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,char) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char**,size_t*,int *) ;
 char* FUNC_12 (size_t) ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int *) ;
 int FUNC_15 (char*,struct dirent***,int ,int *) ;
 int FUNC_16 (char*,size_t,char*,char*,...) ;
 int VAR_13 ;
 int FUNC_17 (int) ;
 size_t FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*,char*,int) ;

int FUNC_20(int VAR_14, char *VAR_15[]) {
    char *VAR_16 = FUNC_4(FUNC_14("/proc/self/exe", ((void*)0)));
    if (!VAR_16)
        FUNC_3("Could not access /proc/self/exe\n");

    int VAR_17;
    struct dirent **VAR_18;
    VAR_17 = FUNC_15(VAR_16, &VAR_18, VAR_2, ((void*)0));

    if (VAR_17 == 0) {
        FUNC_3("No .desktop files found\n");
    } else if(VAR_17 == -1) {
        FUNC_3("Could not scan directory %s\n", VAR_16);
    }


    char *VAR_19 = FUNC_1(VAR_0, sizeof(char));
    FUNC_16(VAR_19, VAR_0, "%s/%s", VAR_16, VAR_18[0]->d_name);
    FILE *VAR_20 = FUNC_7(VAR_19, "r");
    char *VAR_21 = FUNC_12(VAR_0);
    size_t VAR_22 = VAR_0;

    do {
        if (FUNC_11(&VAR_21, &VAR_22, VAR_20) == -1)
            FUNC_3("Executable not found, make sure there is a line starting with 'Exec='\n");
    } while(FUNC_19(VAR_21, "Exec=", 5));
    FUNC_6(VAR_20);
    char *VAR_23 = VAR_21+5;


    bool VAR_24 = 0;
    for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
        if (!VAR_21[VAR_22])
            break;
        else if (VAR_21[VAR_22] == 10 || VAR_21[VAR_22] == 13) {
            VAR_21[VAR_22] = '\0';
            VAR_21[VAR_22+1] = '\0';
            VAR_21[VAR_22+2] = '\0';
            break;
        } else if (VAR_21[VAR_22] == '"') {
            VAR_24 = !VAR_24;
        } else if (VAR_21[VAR_22] == ' ' && !VAR_24)
            VAR_21[VAR_22] = '\0';
    }


    char* VAR_25 = VAR_23;
    int VAR_26 = 0;
    while ((VAR_25 += (FUNC_18(VAR_25)+1)) && *VAR_25)
        VAR_26 += 1;


    char* VAR_27[VAR_26 + VAR_14 + 1];
    VAR_27[0] = VAR_23;
    int VAR_28 = 1;
    VAR_25 = VAR_23;
    int VAR_29 = VAR_14 - 1;
    char** VAR_30 = VAR_15 + 1;
    while ((VAR_25 += (FUNC_18(VAR_25)+1)) && *VAR_25) {
        if (VAR_25[0] == '%' || (VAR_25[0] == '"' && VAR_25[1] == '%')) {
            char VAR_31 = VAR_25[VAR_25[0] == '%' ? 1 : 2];
            switch(VAR_31) {
                case 'f':
                case 'u':
                    if (VAR_29 > 0) {
                        VAR_27[VAR_28++] = *VAR_30++;
                        VAR_29--;
                    }
                    break;
                case 'F':
                case 'U':
                    while (VAR_29 > 0) {
                        VAR_27[VAR_28++] = *VAR_30++;
                        VAR_29--;
                    }
                    break;
                case 'i':
                case 'c':
                case 'k':
                    FUNC_8(VAR_13, "WARNING: Desktop file field code %%%c is not currently supported\n", VAR_31);
                    break;
                default:
                    FUNC_8(VAR_13, "WARNING: Invalid desktop file field code %%%c\n", VAR_31);
                    break;
            }
        } else {
            VAR_27[VAR_28++] = VAR_25;
        }
    }
    while (VAR_29 > 0) {
        VAR_27[VAR_28++] = *VAR_30++;
        VAR_29--;
    }
    VAR_27[VAR_28] = '\0';


    size_t VAR_32 = FUNC_18(VAR_16);
    char *VAR_33 = FUNC_12(VAR_32 + 5);
    FUNC_16(VAR_33, VAR_32 + 5, "%s/usr", VAR_16);
    VAR_17 = FUNC_2(VAR_33);
    if (VAR_17 != 0)
        FUNC_3("Could not cd into %s\n", VAR_33);


    char *VAR_34;
    size_t VAR_35;
    const char *VAR_36;


    FUNC_0(VAR_9, VAR_32, "PYTHONHOME=%s/usr/", VAR_16);

    VAR_34 = FUNC_10("PATH") ?: "";
    FUNC_0(VAR_7, VAR_32*5 + FUNC_18(VAR_34), "PATH=%s/usr/bin/:%s/usr/sbin/:%s/usr/games/:%s/bin/:%s/sbin/:%s", VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_34);

    VAR_34 = FUNC_10("LD_LIBRARY_PATH") ?: "";
    FUNC_0(VAR_6, VAR_32*10 + FUNC_18(VAR_34), "LD_LIBRARY_PATH=%s/usr/lib/:%s/usr/lib/i386-linux-gnu/:%s/usr/lib/x86_64-linux-gnu/:%s/usr/lib32/:%s/usr/lib64/:%s/lib/:%s/lib/i386-linux-gnu/:%s/lib/x86_64-linux-gnu/:%s/lib32/:%s/lib64/:%s", VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_34);

    VAR_34 = FUNC_10("PYTHONPATH") ?: "";
    FUNC_0(VAR_10, VAR_32 + FUNC_18(VAR_34), "PYTHONPATH=%s/usr/share/pyshared/:%s", VAR_16, VAR_34);

    VAR_34 = FUNC_10("XDG_DATA_DIRS") ?: "/usr/local/share/:/usr/share/";
    FUNC_0(VAR_12, VAR_32 + FUNC_18(VAR_34), "XDG_DATA_DIRS=%s/usr/share/:%s", VAR_16, VAR_34);

    VAR_34 = FUNC_10("PERLLIB") ?: "";
    FUNC_0(VAR_8, VAR_32*2 + FUNC_18(VAR_34), "PERLLIB=%s/usr/share/perl5/:%s/usr/lib/perl5/:%s", VAR_16, VAR_16, VAR_34);


    VAR_34 = FUNC_10("GSETTINGS_SCHEMA_DIR") ?: "";
    FUNC_0(VAR_3, VAR_32 + FUNC_18(VAR_34), "GSETTINGS_SCHEMA_DIR=%s/usr/share/glib-2.0/schemas/:%s", VAR_16, VAR_34);

    VAR_34 = FUNC_10("QT_PLUGIN_PATH") ?: "";
    FUNC_0(VAR_11, VAR_32*10 + FUNC_18(VAR_34), "QT_PLUGIN_PATH=%s/usr/lib/qt4/plugins/:%s/usr/lib/i386-linux-gnu/qt4/plugins/:%s/usr/lib/x86_64-linux-gnu/qt4/plugins/:%s/usr/lib32/qt4/plugins/:%s/usr/lib64/qt4/plugins/:%s/usr/lib/qt5/plugins/:%s/usr/lib/i386-linux-gnu/qt5/plugins/:%s/usr/lib/x86_64-linux-gnu/qt5/plugins/:%s/usr/lib32/qt5/plugins/:%s/usr/lib64/qt5/plugins/:%s", VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_16, VAR_34);

    FUNC_0(VAR_4, VAR_32 + FUNC_18(VAR_34), "GST_PLUGIN_SYSTEM_PATH=%s/usr/lib/gstreamer:%s", VAR_16, VAR_34);
    FUNC_0(VAR_5, VAR_32 + FUNC_18(VAR_34), "GST_PLUGIN_SYSTEM_PATH_1_0=%s/usr/lib/gstreamer-1.0:%s", VAR_16, VAR_34);


    FUNC_13("PYTHONDONTWRITEBYTECODE=1");


    VAR_17 = FUNC_5(VAR_23, VAR_27);

    int VAR_37 = VAR_1;

    if (VAR_17 == -1)
        FUNC_3("Error executing '%s': %s\n", VAR_23, FUNC_17(VAR_37));

    FUNC_9(VAR_21);
    FUNC_9(VAR_19);
    FUNC_9(VAR_33);
    FUNC_9(VAR_9);
    FUNC_9(VAR_7);
    FUNC_9(VAR_6);
    FUNC_9(VAR_10);
    FUNC_9(VAR_12);
    FUNC_9(VAR_8);
    FUNC_9(VAR_3);
    FUNC_9(VAR_11);
    return 0;
}
