
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disque_stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int ,struct disque_stat*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

int FUNC_11(int VAR_1, char **VAR_2) {
    char *VAR_3;
    int VAR_4 = 0;

    if (VAR_1 < 2) {
        FUNC_7("Usage: %s [--fix] <file.aof>\n", VAR_2[0]);
        FUNC_1(1);
    } else if (VAR_1 == 2) {
        VAR_3 = VAR_2[1];
    } else if (VAR_1 == 3) {
        if (FUNC_9(VAR_2[1],"--fix") != 0) {
            FUNC_7("Invalid argument: %s\n", VAR_2[1]);
            FUNC_1(1);
        }
        VAR_3 = VAR_2[2];
        VAR_4 = 1;
    } else {
        FUNC_7("Invalid arguments\n");
        FUNC_1(1);
    }

    FILE *VAR_5 = FUNC_5(VAR_3,"r+");
    if (VAR_5 == ((void*)0)) {
        FUNC_7("Cannot open file: %s\n", VAR_3);
        FUNC_1(1);
    }

    struct disque_stat VAR_6;
    if (FUNC_0(FUNC_4(VAR_5),&VAR_6) == -1) {
        FUNC_7("Cannot stat file: %s\n", VAR_3);
        FUNC_1(1);
    }

    off_t VAR_7 = VAR_6.st_size;
    if (VAR_7 == 0) {
        FUNC_7("Empty file: %s\n", VAR_3);
        FUNC_1(1);
    }

    off_t VAR_8 = FUNC_8(VAR_5);
    off_t VAR_9 = VAR_7-VAR_8;
    FUNC_7("AOF analyzed: size=%lld, ok_up_to=%lld, diff=%lld\n",
        (long long) VAR_7, (long long) VAR_8, (long long) VAR_9);
    if (VAR_9 > 0) {
        if (VAR_4) {
            char VAR_10[2];
            FUNC_7("This will shrink the AOF from %lld bytes, with %lld bytes, to %lld bytes\n",(long long)VAR_7,(long long)VAR_9,(long long)VAR_8);
            FUNC_7("Continue? [y/N]: ");
            if (FUNC_3(VAR_10,sizeof(VAR_10),VAR_0) == ((void*)0) ||
                FUNC_10(VAR_10,"y",1) != 0) {
                    FUNC_7("Aborting...\n");
                    FUNC_1(1);
            }
            if (FUNC_6(FUNC_4(VAR_5), VAR_8) == -1) {
                FUNC_7("Failed to truncate AOF\n");
                FUNC_1(1);
            } else {
                FUNC_7("Successfully truncated AOF\n");
            }
        } else {
            FUNC_7("AOF is not valid\n");
            FUNC_1(1);
        }
    } else {
        FUNC_7("AOF is valid\n");
    }

    FUNC_2(VAR_5);
    return 0;
}
