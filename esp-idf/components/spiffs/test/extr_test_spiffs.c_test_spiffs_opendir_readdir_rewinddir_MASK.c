
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; scalar_t__ d_type; } ;
typedef int name_dir_inner_file ;
typedef int name_dir_inner ;
typedef int name_dir_file2 ;
typedef int name_dir_file1 ;
typedef struct dirent DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dirent*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct dirent*) ;
 struct dirent* FUNC_5 (char const*) ;
 int FUNC_6 (char*,char*) ;
 struct dirent* FUNC_7 (struct dirent*) ;
 int FUNC_8 (struct dirent*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct dirent*,int) ;
 int FUNC_11 (char*,int,char*,char const*) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;

void FUNC_15(const char* VAR_1)
{
    char VAR_2[64];
    char VAR_3[64];
    char VAR_4[64];
    char VAR_5[64];
    char VAR_6[64];

    FUNC_11(VAR_2, sizeof(VAR_2), "%s/inner/3.txt", VAR_1);
    FUNC_11(VAR_3, sizeof(VAR_3), "%s/inner", VAR_1);
    FUNC_11(VAR_4, sizeof(VAR_5), "%s/boo.bin", VAR_1);
    FUNC_11(VAR_5, sizeof(VAR_5), "%s/2.txt", VAR_1);
    FUNC_11(VAR_6, sizeof(VAR_6), "%s/1.txt", VAR_1);

    FUNC_14(VAR_2);
    FUNC_9(VAR_3);
    FUNC_14(VAR_6);
    FUNC_14(VAR_5);
    FUNC_14(VAR_4);
    FUNC_9(VAR_1);

    FUNC_13(VAR_6, "1\n");
    FUNC_13(VAR_5, "2\n");
    FUNC_13(VAR_4, "\01\02\03");
    FUNC_13(VAR_2, "3\n");

    DIR* VAR_7 = FUNC_5(VAR_1);
    FUNC_1(VAR_7);
    int VAR_8 = 0;
    const char* VAR_9[4];
    while(VAR_8 < 4) {
        struct dirent* VAR_10 = FUNC_7(VAR_7);
        if (!VAR_10) {
            break;
        }
        FUNC_6("found '%s'\n", VAR_10->d_name);
        if (FUNC_12(VAR_10->d_name, "1.txt") == 0) {
            FUNC_2(VAR_10->d_type == VAR_0);
            VAR_9[VAR_8] = "1.txt";
            ++VAR_8;
        } else if (FUNC_12(VAR_10->d_name, "2.txt") == 0) {
            FUNC_2(VAR_10->d_type == VAR_0);
            VAR_9[VAR_8] = "2.txt";
            ++VAR_8;
        } else if (FUNC_12(VAR_10->d_name, "inner/3.txt") == 0) {
            FUNC_2(VAR_10->d_type == VAR_0);
            VAR_9[VAR_8] = "inner/3.txt";
            ++VAR_8;
        } else if (FUNC_12(VAR_10->d_name, "boo.bin") == 0) {
            FUNC_2(VAR_10->d_type == VAR_0);
            VAR_9[VAR_8] = "boo.bin";
            ++VAR_8;
        } else {
            FUNC_3("unexpected directory entry");
        }
    }
    FUNC_0(VAR_8, 4);

    FUNC_8(VAR_7);
    struct dirent* VAR_11 = FUNC_7(VAR_7);
    FUNC_1(VAR_11);
    FUNC_0(0, FUNC_12(VAR_11->d_name, VAR_9[0]));
    FUNC_10(VAR_7, 3);
    VAR_11 = FUNC_7(VAR_7);
    FUNC_1(VAR_11);
    FUNC_0(0, FUNC_12(VAR_11->d_name, VAR_9[3]));
    FUNC_10(VAR_7, 1);
    VAR_11 = FUNC_7(VAR_7);
    FUNC_1(VAR_11);
    FUNC_0(0, FUNC_12(VAR_11->d_name, VAR_9[1]));
    FUNC_10(VAR_7, 2);
    VAR_11 = FUNC_7(VAR_7);
    FUNC_1(VAR_11);
    FUNC_0(0, FUNC_12(VAR_11->d_name, VAR_9[2]));

    FUNC_0(0, FUNC_4(VAR_7));
}
