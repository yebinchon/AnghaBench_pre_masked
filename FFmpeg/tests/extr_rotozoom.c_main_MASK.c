
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,int,int ) ;
 int FUNC_6 (char*,char*) ;
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

    if (VAR_8 != 3) {
        FUNC_6("usage: %s image.pnm file|dir\n"
               "generate a test video stream\n", VAR_9[0]);
        return 1;
    }

    if (!FUNC_1(VAR_9[2], "wb", VAR_5))
        VAR_14 = 1;

    VAR_10 = VAR_2;
    VAR_11 = VAR_0;

    VAR_4 = FUNC_4(VAR_10 * VAR_11 * 3);
    VAR_7 = VAR_10 * 3;
    VAR_6 = VAR_10;
    VAR_3 = VAR_11;

    if (FUNC_3(VAR_9[1]))
        return 1;

    for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
        FUNC_2(VAR_12, VAR_10, VAR_11);
        if (VAR_14) {
            FUNC_7(VAR_13, sizeof(VAR_13), "%s%02d.pgm", VAR_9[2], VAR_12);
            FUNC_5(VAR_13, VAR_10, VAR_11, VAR_4);
        } else {
            FUNC_5(((void*)0), VAR_10, VAR_11, VAR_4);
        }
    }

    FUNC_0(VAR_4);
    return 0;
}
