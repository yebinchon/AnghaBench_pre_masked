
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (int,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,int,int ) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int FUNC_7 (char*,int,char*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_8(int VAR_8, char **VAR_9)
{
    int VAR_10, VAR_11, VAR_12;
    char VAR_13[1024];
    int VAR_14 = 0;

    if (VAR_8 < 2 || VAR_8 > 4) {
        FUNC_6(VAR_9[0]);
    }

    if (!FUNC_2(VAR_9[1], "wb", VAR_5))
        VAR_14 = 1;

    VAR_10 = VAR_2;
    if(VAR_8 > 2) {
        VAR_10 = FUNC_0(VAR_9[2]);
        if (VAR_10 < 1) FUNC_6(VAR_9[0]);
    }
    VAR_11 = VAR_0;
    if(VAR_8 > 3) {
        VAR_11 = FUNC_0(VAR_9[3]);
        if (VAR_11 < 1) FUNC_6(VAR_9[0]);
    }

    VAR_4 = FUNC_4(VAR_10 * VAR_11 * 3);
    VAR_7 = VAR_10 * 3;
    VAR_6 = VAR_10;
    VAR_3 = VAR_11;

    for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
        FUNC_3(VAR_12, VAR_10, VAR_11);
        if (VAR_14) {
            FUNC_7(VAR_13, sizeof(VAR_13), "%s%02d.pgm", VAR_9[1], VAR_12);
            FUNC_5(VAR_13, VAR_10, VAR_11, VAR_4);
        } else {
            FUNC_5(((void*)0), VAR_10, VAR_11, VAR_4);
        }
    }

    FUNC_1(VAR_4);
    return 0;
}
