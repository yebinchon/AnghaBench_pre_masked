
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2, GetBitContext *VAR_3,
                               unsigned int *VAR_4, int **VAR_5,
                               const int *VAR_6, int *VAR_7)
{
    int VAR_8 = 0;
    int VAR_9;
    int VAR_10 = 0;

    do {
        int VAR_11, VAR_12;
        int VAR_13 = 0;
        int VAR_14[2];
        do {
            VAR_11 = FUNC_3(VAR_3, 11);
            if (!VAR_11) {
                FUNC_0(VAR_2, VAR_1, "Invalid uncompressed codeword\n");
                return VAR_0;
            }
            VAR_11 = 10 - FUNC_1(VAR_11);
            FUNC_4(VAR_3, VAR_11 + 1);
            if (VAR_11 > 5) {
                VAR_9 = FUNC_2(VAR_3);
                VAR_8 = 1;
                VAR_11 -= 6;
            }
            VAR_13 += VAR_11;
        } while(VAR_11 == 5);

        VAR_14[0] = VAR_13;
        VAR_14[1] = !VAR_8;

        for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
            if (VAR_14[VAR_12]) {
                if (*VAR_7 == !VAR_12) {
                    *(*VAR_5)++ = VAR_10;
                    if (*VAR_5 >= VAR_6) {
                        FUNC_0(VAR_2, VAR_1, "uncompressed run overrun\n");
                        return VAR_0;
                    }
                    if (*VAR_4 <= VAR_10) {
                        FUNC_0(VAR_2, VAR_1, "uncompressed run went out of bounds\n");
                        return VAR_0;
                    }
                    *VAR_4 -= VAR_10;
                    VAR_10 = 0;
                    *VAR_7 = !*VAR_7;
                }
                VAR_10 += VAR_14[VAR_12];
            }
        }
    } while (!VAR_8);
    *(*VAR_5)++ = VAR_10;
    if (*VAR_5 >= VAR_6) {
        FUNC_0(VAR_2, VAR_1, "uncompressed run overrun\n");
        return VAR_0;
    }
    if (*VAR_4 <= VAR_10) {
        if (*VAR_4 == VAR_10)
            return 1;
        FUNC_0(VAR_2, VAR_1, "uncompressed run went out of boundsE\n");
        return VAR_0;
    }
    *VAR_4 -= VAR_10;
    VAR_10 = 0;
    *VAR_7 = !*VAR_7;
    if (VAR_9 != *VAR_7) {
        *(*VAR_5)++ = 0;
        if (*VAR_5 >= VAR_6) {
            FUNC_0(VAR_2, VAR_1, "uncompressed run overrun\n");
            return VAR_0;
        }
        *VAR_7 = VAR_9;
    }
    return 0;
}
