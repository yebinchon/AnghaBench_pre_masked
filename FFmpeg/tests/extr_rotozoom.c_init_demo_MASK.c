
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;

__attribute__((used)) static int FUNC_5(const char *VAR_9)
{
    int VAR_10, VAR_11;
    int VAR_12;
    int VAR_13;
    char VAR_14[3 * VAR_3];

    FILE *VAR_15;

    VAR_15 = FUNC_1(VAR_9, "rb");
    if (!VAR_15) {
        FUNC_4(VAR_9);
        return 1;
    }

    if (FUNC_2(VAR_14, 1, 15, VAR_15) != 15)
        return 1;
    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
        if (FUNC_2(VAR_14, 1, 3 * VAR_3, VAR_15) != 3 * VAR_3)
            return 1;
        for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
            VAR_8[VAR_3 * VAR_10 + VAR_11] = VAR_14[3 * VAR_11 ];
            VAR_7[VAR_3 * VAR_10 + VAR_11] = VAR_14[3 * VAR_11 + 1];
            VAR_6[VAR_3 * VAR_10 + VAR_11] = VAR_14[3 * VAR_11 + 2];
        }
    }
    FUNC_0(VAR_15);


    for (VAR_10 = 0; VAR_10 < 360; VAR_10++) {
        VAR_13 = 2 * VAR_10 * VAR_2 / 360;
        VAR_12 = 2 * VAR_0 + FUNC_3(VAR_13);
        VAR_4[VAR_10] = VAR_12 * FUNC_3(VAR_13 + VAR_2 / 2) / 2 / VAR_0;
        VAR_5[VAR_10] = VAR_12 * FUNC_3(VAR_13) / 2 / VAR_0;
    }

    return 0;
}
