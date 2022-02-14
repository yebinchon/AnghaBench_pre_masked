
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ table; int member_0; } ;
typedef TYPE_1__ VLC ;
struct TYPE_14__ {int* escapes; int* recode1; int* recode2; int* last; TYPE_1__* v2; TYPE_1__* v1; } ;
struct TYPE_13__ {int length; int current; int* bits; int* lengths; int* values; scalar_t__ maxlength; } ;
struct TYPE_12__ {int avctx; } ;
typedef TYPE_2__ SmackVContext ;
typedef TYPE_3__ HuffContext ;
typedef int GetBitContext ;
typedef TYPE_4__ DBCtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,char*) ;
 void* FUNC_3 (int) ;
 int* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ,int,int*,int,int,int*,int,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_11 (int *,TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_12(SmackVContext *VAR_6, GetBitContext *VAR_7, int **VAR_8, int *VAR_9, int VAR_10)
{
    int VAR_11;
    HuffContext VAR_12;
    HuffContext VAR_13, VAR_14;
    VLC VAR_15[2] = { { 0 } };
    int VAR_16[3];
    DBCtx VAR_17;
    int VAR_18 = 0;

    if(VAR_10 >= VAR_5>>4){
        FUNC_2(VAR_6->avctx, VAR_1, "size too large\n");
        return VAR_0;
    }

    VAR_13 = 256;
    VAR_13 = 0;
    VAR_13 = 0;
    VAR_13 = FUNC_3(256 * 4);
    VAR_13 = FUNC_3(256 * sizeof(int));
    VAR_13 = FUNC_3(256 * sizeof(int));

    VAR_14 = 256;
    VAR_14 = 0;
    VAR_14 = 0;
    VAR_14 = FUNC_3(256 * 4);
    VAR_14 = FUNC_3(256 * sizeof(int));
    VAR_14 = FUNC_3(256 * sizeof(int));
    if (!VAR_13 || !VAR_13 || !VAR_13 ||
        !VAR_14 || !VAR_14 || !VAR_14) {
        VAR_18 = FUNC_0(VAR_2);
        goto error;
    }

    if(FUNC_7(VAR_7)) {
        VAR_11 = FUNC_11(VAR_7, &VAR_13, 0, 0);
        if (VAR_11 < 0) {
            VAR_18 = VAR_11;
            goto error;
        }
        FUNC_9(VAR_7);
        if(VAR_13 > 1) {
            VAR_11 = FUNC_8(&VAR_15[0], VAR_4, VAR_13,
                        VAR_13, sizeof(int), sizeof(int),
                        VAR_13, sizeof(uint32_t), sizeof(uint32_t), VAR_3);
            if(VAR_11 < 0) {
                FUNC_2(VAR_6->avctx, VAR_1, "Cannot build VLC table\n");
                VAR_18 = VAR_11;
                goto error;
            }
        }
    }
    if (!VAR_15[0].table) {
        FUNC_2(VAR_6->avctx, VAR_1, "Skipping low bytes tree\n");
    }
    if(FUNC_7(VAR_7)){
        VAR_11 = FUNC_11(VAR_7, &VAR_14, 0, 0);
        if (VAR_11 < 0) {
            VAR_18 = VAR_11;
            goto error;
        }
        FUNC_9(VAR_7);
        if(VAR_14 > 1) {
            VAR_11 = FUNC_8(&VAR_15[1], VAR_4, VAR_14,
                        VAR_14, sizeof(int), sizeof(int),
                        VAR_14, sizeof(uint32_t), sizeof(uint32_t), VAR_3);
            if(VAR_11 < 0) {
                FUNC_2(VAR_6->avctx, VAR_1, "Cannot build VLC table\n");
                VAR_18 = VAR_11;
                goto error;
            }
        }
    }
    if (!VAR_15[1].table) {
        FUNC_2(VAR_6->avctx, VAR_1, "Skipping high bytes tree\n");
    }

    VAR_16[0] = FUNC_6(VAR_7, 16);
    VAR_16[1] = FUNC_6(VAR_7, 16);
    VAR_16[2] = FUNC_6(VAR_7, 16);

    VAR_9[0] = VAR_9[1] = VAR_9[2] = -1;

    VAR_17.escapes[0] = VAR_16[0];
    VAR_17.escapes[1] = VAR_16[1];
    VAR_17.escapes[2] = VAR_16[2];
    VAR_17.v1 = &VAR_15[0];
    VAR_17.v2 = &VAR_15[1];
    VAR_17.recode1 = VAR_13;
    VAR_17.recode2 = VAR_14;
    VAR_17.last = VAR_9;

    VAR_12.length = ((VAR_10 + 3) >> 2) + 4;
    VAR_12.maxlength = 0;
    VAR_12.current = 0;
    VAR_12.values = FUNC_4(VAR_12.length, sizeof(int));
    if (!VAR_12.values) {
        VAR_18 = FUNC_0(VAR_2);
        goto error;
    }

    VAR_11 = FUNC_10(VAR_7, &VAR_12, &VAR_17, 0);
    if (VAR_11 < 0)
        VAR_18 = VAR_11;
    FUNC_9(VAR_7);
    if(VAR_17.last[0] == -1) VAR_17.last[0] = VAR_12.current++;
    if(VAR_17.last[1] == -1) VAR_17.last[1] = VAR_12.current++;
    if(VAR_17.last[2] == -1) VAR_17.last[2] = VAR_12.current++;
    if (VAR_17.last[0] >= VAR_12.length ||
        VAR_17.last[1] >= VAR_12.length ||
        VAR_17.last[2] >= VAR_12.length) {
        FUNC_2(VAR_6->avctx, VAR_1, "Huffman codes out of range\n");
        VAR_18 = VAR_0;
    }

    *VAR_8 = VAR_12.values;

error:
    if(VAR_15[0].table)
        FUNC_5(&VAR_15[0]);
    if(VAR_15[1].table)
        FUNC_5(&VAR_15[1]);
    FUNC_1(VAR_13);
    FUNC_1(VAR_13);
    FUNC_1(VAR_13);
    FUNC_1(VAR_14);
    FUNC_1(VAR_14);
    FUNC_1(VAR_14);

    return VAR_18;
}
