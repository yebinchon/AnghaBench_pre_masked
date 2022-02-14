
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int * table; } ;
typedef TYPE_1__ VLC ;
struct TYPE_7__ {int avctx; } ;
typedef int GetBitContext ;
typedef TYPE_2__ CLLCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int*,int,int,int *,int,int,int*,int,int,int ) ;
 void* FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(CLLCContext *VAR_4, GetBitContext *VAR_5, VLC *VAR_6)
{
    uint8_t VAR_7[256];
    uint8_t VAR_8[256];
    uint16_t VAR_9[256];
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14, VAR_15, VAR_16;

    VAR_13 = 0;
    VAR_16 = 0;
    VAR_12 = 0;

    VAR_10 = FUNC_2(VAR_5, 5);

    if (VAR_10 > VAR_2 * VAR_3) {
        VAR_6->table = ((void*)0);

        FUNC_0(VAR_4->avctx, VAR_1, "To long VLCs %d\n", VAR_10);
        return VAR_0;
    }

    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
        VAR_11 = FUNC_2(VAR_5, 9);
        VAR_12 += VAR_11;

        if (VAR_12 > 256) {
            VAR_6->table = ((void*)0);

            FUNC_0(VAR_4->avctx, VAR_1,
                   "Too many VLCs (%d) to be read.\n", VAR_12);
            return VAR_0;
        }

        for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
            VAR_7[VAR_16] = FUNC_2(VAR_5, 8);
            VAR_8[VAR_16] = VAR_14 + 1;
            VAR_9[VAR_16] = VAR_13++;

            VAR_16++;
        }
        if (VAR_13 > (65535 - 256)/2) {
            VAR_6->table = ((void*)0);
            return VAR_0;
        }

        VAR_13 <<= 1;
    }

    return FUNC_1(VAR_6, VAR_2, VAR_16, VAR_8, 1, 1,
                              VAR_9, 2, 2, VAR_7, 1, 1, 0);
}
