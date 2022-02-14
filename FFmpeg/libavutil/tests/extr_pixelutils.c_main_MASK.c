
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (char*,int *,int,int *,int,int,int) ;
 int FUNC_8 (char*,int *,int *) ;
 int VAR_4 ;

int FUNC_9(void)
{
    int VAR_5, VAR_6, VAR_7;
    uint8_t *VAR_8 = FUNC_3(VAR_2*VAR_0);
    uint8_t *VAR_9 = FUNC_3(VAR_3*VAR_1);
    uint32_t VAR_10 = 0;

    if (!VAR_8 || !VAR_9) {
        FUNC_5(VAR_4, "malloc failure\n");
        VAR_7 = 1;
        goto end;
    }

    FUNC_4();
    do { int VAR_11; for (VAR_11 = 0; VAR_11 < VAR_2*VAR_0; VAR_11++) { VAR_10 = VAR_10 * 1664525 + 1013904223; VAR_8[VAR_11] = VAR_10>>24; } } while (0);
    do { int VAR_12; for (VAR_12 = 0; VAR_12 < VAR_3*VAR_1; VAR_12++) { VAR_10 = VAR_10 * 1664525 + 1013904223; VAR_9[VAR_12] = VAR_10>>24; } } while (0);
    VAR_7 = FUNC_8("random", VAR_8, VAR_9);
    if (VAR_7 < 0)
        goto end;


    FUNC_6(VAR_8, 0xff, VAR_2*VAR_0);
    FUNC_6(VAR_9, 0x00, VAR_3*VAR_1);
    VAR_7 = FUNC_8("max", VAR_8, VAR_9);
    if (VAR_7 < 0)
        goto end;


    FUNC_6(VAR_8, 0x90, VAR_2*VAR_0);
    FUNC_6(VAR_9, 0x90, VAR_3*VAR_1);
    VAR_7 = FUNC_8("min", VAR_8, VAR_9);
    if (VAR_7 < 0)
        goto end;


    for (VAR_5 = 1; VAR_5 <= 5; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
            int VAR_13, VAR_14;

            FUNC_2(&VAR_8);
            FUNC_2(&VAR_9);

            VAR_13 = VAR_14 = 1 << (VAR_5 << 1);

            switch (VAR_6) {
            case 0: VAR_13++; VAR_14++; break;
            case 1: VAR_14++; break;
            case 2: break;
            }

            VAR_8 = FUNC_3(VAR_13);
            VAR_9 = FUNC_3(VAR_14);
            if (!VAR_8 || !VAR_9) {
                FUNC_5(VAR_4, "malloc failure\n");
                VAR_7 = 1;
                goto end;
            }
            do { int VAR_15; for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) { VAR_10 = VAR_10 * 1664525 + 1013904223; VAR_8[VAR_15] = VAR_10>>24; } } while (0);
            do { int VAR_16; for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) { VAR_10 = VAR_10 * 1664525 + 1013904223; VAR_9[VAR_16] = VAR_10>>24; } } while (0);
            VAR_7 = FUNC_7("small", VAR_8, 1<<VAR_5, VAR_9, 1<<VAR_5, VAR_6, VAR_5);
            if (VAR_7 < 0)
                goto end;
        }
    }

end:
    FUNC_1(VAR_8);
    FUNC_1(VAR_9);
    return VAR_7;
}
