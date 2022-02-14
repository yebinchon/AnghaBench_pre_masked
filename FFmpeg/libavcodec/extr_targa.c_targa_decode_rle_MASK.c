
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int gb; } ;
typedef TYPE_1__ TargaContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int * FUNC_1 (int *,int *,int,int*,int,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_2, TargaContext *VAR_3,
                            uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7,
                            int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    int VAR_12 = (VAR_8 + 1) >> 3;
    int VAR_13, VAR_14;
    uint8_t *VAR_15 = VAR_4;
    uint8_t *VAR_16 = VAR_15;

    VAR_10 = VAR_11 = VAR_14 = 0;
    while (VAR_16) {
        if (FUNC_4(&VAR_3->gb) <= 0) {
            FUNC_2(VAR_2, VAR_1,
                   "Ran ouf of data before end-of-image\n");
            return VAR_0;
        }
        VAR_13 = FUNC_5(&VAR_3->gb);
        VAR_14 = (VAR_13 & 0x7F) + 1;
        VAR_13 &= 0x80;
        if (!VAR_13) {
            do {
                int VAR_17 = FUNC_0(VAR_14, VAR_5 - VAR_10);
                FUNC_3(&VAR_3->gb, VAR_16, VAR_17 * VAR_12);
                VAR_14 -= VAR_17;
                VAR_16 += VAR_17 * VAR_12;
                VAR_10 += VAR_17;
                if (VAR_10 == VAR_5) {
                    VAR_10 = 0;
                    VAR_16 = VAR_15 = FUNC_1(VAR_4, VAR_15, VAR_7, &VAR_11, VAR_6, VAR_9);
                }
            } while (VAR_16 && VAR_14 > 0);
        } else {
            uint8_t VAR_18[4];
            FUNC_3(&VAR_3->gb, VAR_18, VAR_12);
            do {
                int VAR_19 = FUNC_0(VAR_14, VAR_5 - VAR_10);
                VAR_14 -= VAR_19;
                VAR_10 += VAR_19;
                do {
                    FUNC_6(VAR_16, VAR_18, VAR_12);
                    VAR_16 += VAR_12;
                } while (--VAR_19);
                if (VAR_10 == VAR_5) {
                    VAR_10 = 0;
                    VAR_16 = VAR_15 = FUNC_1(VAR_4, VAR_15, VAR_7, &VAR_11, VAR_6, VAR_9);
                }
            } while (VAR_16 && VAR_14 > 0);
        }
    }

    if (VAR_14) {
        FUNC_2(VAR_2, VAR_1, "Packet went out of bounds\n");
        return VAR_0;
    }

    return 0;
}
