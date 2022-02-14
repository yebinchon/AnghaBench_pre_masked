
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dirent*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct dirent*) ;
 int FUNC_5 (char const*,int) ;
 struct dirent* FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*) ;
 struct dirent* FUNC_8 (struct dirent*) ;
 int FUNC_9 (struct dirent*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct dirent*,int) ;
 int FUNC_12 (char*,int,char*,char const*) ;
 int FUNC_13 (char*,char const*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;

void FUNC_16(const char* VAR_2)
{
    char VAR_3[64];
    char VAR_4[64];
    char VAR_5[64];
    char VAR_6[64];
    char VAR_7[64];

    FUNC_12(VAR_3, sizeof(VAR_3), "%s/inner/3.txt", VAR_2);
    FUNC_12(VAR_4, sizeof(VAR_4), "%s/inner", VAR_2);
    FUNC_12(VAR_5, sizeof(VAR_6), "%s/boo.bin", VAR_2);
    FUNC_12(VAR_6, sizeof(VAR_6), "%s/2.txt", VAR_2);
    FUNC_12(VAR_7, sizeof(VAR_7), "%s/1.txt", VAR_2);

    FUNC_15(VAR_3);
    FUNC_10(VAR_4);
    FUNC_15(VAR_7);
    FUNC_15(VAR_6);
    FUNC_15(VAR_5);
    FUNC_10(VAR_2);

    FUNC_0(0, FUNC_5(VAR_2, 0755));
    FUNC_14(VAR_7, "1\n");
    FUNC_14(VAR_6, "2\n");
    FUNC_14(VAR_5, "\01\02\03");
    FUNC_0(0, FUNC_5(VAR_4, 0755));
    FUNC_14(VAR_3, "3\n");

    DIR* VAR_8 = FUNC_6(VAR_2);
    FUNC_1(VAR_8);
    int VAR_9 = 0;
    const char* VAR_10[4];
    while(VAR_9 < 4) {
        struct dirent* VAR_11 = FUNC_8(VAR_8);
        if (!VAR_11) {
            break;
        }
        FUNC_7("found '%s'\n", VAR_11->d_name);
        if (FUNC_13(VAR_11->d_name, "1.txt") == 0) {
            FUNC_2(VAR_11->d_type == VAR_1);
            VAR_10[VAR_9] = "1.txt";
            ++VAR_9;
        } else if (FUNC_13(VAR_11->d_name, "2.txt") == 0) {
            FUNC_2(VAR_11->d_type == VAR_1);
            VAR_10[VAR_9] = "2.txt";
            ++VAR_9;
        } else if (FUNC_13(VAR_11->d_name, "inner") == 0) {
            FUNC_2(VAR_11->d_type == VAR_0);
            VAR_10[VAR_9] = "inner";
            ++VAR_9;
        } else if (FUNC_13(VAR_11->d_name, "boo.bin") == 0) {
            FUNC_2(VAR_11->d_type == VAR_1);
            VAR_10[VAR_9] = "boo.bin";
            ++VAR_9;
        } else {
            FUNC_3("unexpected directory entry");
        }
    }
    FUNC_0(VAR_9, 4);

    FUNC_9(VAR_8);
    struct dirent* VAR_12 = FUNC_8(VAR_8);
    FUNC_1(VAR_12);
    FUNC_0(0, FUNC_13(VAR_12->d_name, VAR_10[0]));
    FUNC_11(VAR_8, 3);
    VAR_12 = FUNC_8(VAR_8);
    FUNC_1(VAR_12);
    FUNC_0(0, FUNC_13(VAR_12->d_name, VAR_10[3]));
    FUNC_11(VAR_8, 1);
    VAR_12 = FUNC_8(VAR_8);
    FUNC_1(VAR_12);
    FUNC_0(0, FUNC_13(VAR_12->d_name, VAR_10[1]));
    FUNC_11(VAR_8, 2);
    VAR_12 = FUNC_8(VAR_8);
    FUNC_1(VAR_12);
    FUNC_0(0, FUNC_13(VAR_12->d_name, VAR_10[2]));

    FUNC_0(0, FUNC_4(VAR_8));
}
