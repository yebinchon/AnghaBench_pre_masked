
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int,int,int) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*,int,int,int *) ;
 unsigned char* FUNC_6 (int) ;
 int FUNC_7 (unsigned char*,unsigned char*,unsigned char*,unsigned char const*,int,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_8(const char *VAR_1, int VAR_2, int VAR_3,
                        const unsigned char *VAR_4)
{
    FILE *VAR_5;
    int VAR_6, VAR_7, VAR_8;
    unsigned char *VAR_9, *VAR_10;
    unsigned char *VAR_11, *VAR_12, *VAR_13;

    VAR_11 = FUNC_6(VAR_2 * VAR_3);
    VAR_12 = FUNC_6(VAR_2 * VAR_3 / 4);
    VAR_13 = FUNC_6(VAR_2 * VAR_3 / 4);

    FUNC_7(VAR_11, VAR_12, VAR_13, VAR_4, VAR_2, VAR_3);

    if (VAR_1) {
        VAR_5 = FUNC_2(VAR_1, "wb");
        FUNC_3(VAR_5, "P5\n%d %d\n%d\n", VAR_2, VAR_3 * 3 / 2, 255);
    } else {
        VAR_5 = VAR_0;
    }

    FUNC_0(FUNC_5(VAR_11, 1, VAR_2 * VAR_3, VAR_5) != VAR_2 * VAR_3);
    VAR_7 = VAR_3 / 2;
    VAR_8 = VAR_2 / 2;
    VAR_9 = VAR_12;
    VAR_10 = VAR_13;

    if (VAR_1) {
        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
            FUNC_0(FUNC_5(VAR_9, 1, VAR_8, VAR_5) != VAR_8);
            FUNC_0(FUNC_5(VAR_10, 1, VAR_8, VAR_5) != VAR_8);
            VAR_9 += VAR_8;
            VAR_10 += VAR_8;
        }
        FUNC_1(VAR_5);
    } else {
        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
            FUNC_0(FUNC_5(VAR_9, 1, VAR_8, VAR_5) != VAR_8);
            VAR_9 += VAR_8;
        }
        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
            FUNC_0(FUNC_5(VAR_10, 1, VAR_8, VAR_5) != VAR_8);
            VAR_10 += VAR_8;
        }
    }

    FUNC_4(VAR_11);
    FUNC_4(VAR_12);
    FUNC_4(VAR_13);
}
