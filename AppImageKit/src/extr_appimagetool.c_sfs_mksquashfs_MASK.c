
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef char gchar ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 char* VAR_2 ;
 int FUNC_1 (char*,char**) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,int) ;
 char* VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 char* VAR_4 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int,int*,int ) ;

int FUNC_10(char *VAR_6, char *VAR_7, int VAR_8) {
    pid_t VAR_9 = FUNC_2();

    if (VAR_9 == -1) {

        return(-1);
    } else if (VAR_9 > 0) {
        int VAR_10;
        FUNC_9(VAR_9, &VAR_10, 0);
    } else {

        gchar* VAR_11;
        VAR_11 = FUNC_3("%i", VAR_8);

        char* VAR_12[32];
        bool VAR_13 = FUNC_6(VAR_4, "xz") >= 0;

        int VAR_14 = 0;

        VAR_12[VAR_14++] = "mksquashfs";



        VAR_12[VAR_14++] = VAR_6;
        VAR_12[VAR_14++] = VAR_7;
        VAR_12[VAR_14++] = "-offset";
        VAR_12[VAR_14++] = VAR_11;
        VAR_12[VAR_14++] = "-comp";

        if (VAR_13)
            VAR_12[VAR_14++] = "xz";
        else
            VAR_12[VAR_14++] = VAR_4;

        VAR_12[VAR_14++] = "-root-owned";
        VAR_12[VAR_14++] = "-noappend";

        if (VAR_13) {


            VAR_12[VAR_14++] = "-Xdict-size";
            VAR_12[VAR_14++] = "100%";
            VAR_12[VAR_14++] = "-b";
            VAR_12[VAR_14++] = "16384";
        }


        if (FUNC_0(VAR_0, VAR_1) >= 0) {
            FUNC_5("Including %s", VAR_0);
            VAR_12[VAR_14++] = "-wildcards";
            VAR_12[VAR_14++] = "-ef";


            char* VAR_15 = FUNC_7(VAR_0);
            VAR_12[VAR_14++] = VAR_15;
        }


        if (VAR_2 != 0 && FUNC_8(VAR_2) > 0) {
            if (FUNC_0(VAR_2, VAR_1) < 0) {
                FUNC_5("WARNING: exclude file %s not found!", VAR_2);
                return -1;
            }

            VAR_12[VAR_14++] = "-wildcards";
            VAR_12[VAR_14++] = "-ef";
            VAR_12[VAR_14++] = VAR_2;
        }

        VAR_12[VAR_14++] = "-mkfs-time";
        VAR_12[VAR_14++] = "0";

        VAR_12[VAR_14++] = 0;

        if (VAR_5) {
            FUNC_5("mksquashfs commandline: ");
            for (char** VAR_16 = VAR_12; *VAR_16 != 0; VAR_16++) {
                FUNC_5("%s ", *VAR_16);
            }
            FUNC_5("\n");
        }


        FUNC_1("mksquashfs", VAR_12);




        FUNC_4("execlp");
        return -1;
    }
    return 0;
}
