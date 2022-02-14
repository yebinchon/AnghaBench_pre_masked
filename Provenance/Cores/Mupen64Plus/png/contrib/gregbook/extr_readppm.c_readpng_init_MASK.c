
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulg ;
typedef char uch ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (char*,char*,int*,...) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(FILE *VAR_7, ulg *VAR_8, ulg *VAR_9)
{
    static uch VAR_10[256];
    int VAR_11;


    VAR_4 = VAR_7;

    FUNC_0(VAR_10, 256, VAR_7);
    if (VAR_10[0] != 'P' || VAR_10[1] != '6') {
        FUNC_1(VAR_5, "ERROR:  not a PPM file\n");
        return 1;
    }

    if (VAR_10[1] == '6') {
        VAR_2 = 2;
        VAR_1 = 3;
    } else if (VAR_10[1] == '8') {
        VAR_2 = 6;
        VAR_1 = 4;
    } else {
        VAR_2 = 0;
        VAR_1 = 1;
    }

    do {
        FUNC_0(VAR_10, 256, VAR_7);
    } while (VAR_10[0] == '#');
    FUNC_2(VAR_10, "%lu %lu", &VAR_6, &VAR_3);

    do {
        FUNC_0(VAR_10, 256, VAR_7);
    } while (VAR_10[0] == '#');
    FUNC_2(VAR_10, "%d", &VAR_11);
    if (VAR_11 != 255) {
        FUNC_1(VAR_5, "ERROR:  maxval = %d\n", VAR_11);
        return 2;
    }
    VAR_0 = 8;

    *VAR_8 = VAR_6;
    *VAR_9 = VAR_3;

    return 0;
}
