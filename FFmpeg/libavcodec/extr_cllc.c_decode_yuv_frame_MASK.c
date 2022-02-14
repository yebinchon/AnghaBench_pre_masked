
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int VLC ;
struct TYPE_12__ {int height; } ;
struct TYPE_11__ {int * linesize; scalar_t__** data; } ;
struct TYPE_10__ {TYPE_3__* avctx; } ;
typedef int GetBitContext ;
typedef TYPE_1__ CLLCContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int*,int *,scalar_t__*,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(CLLCContext *VAR_2, GetBitContext *VAR_3, AVFrame *VAR_4)
{
    AVCodecContext *VAR_5 = VAR_2->avctx;
    uint8_t VAR_6;
    uint8_t *VAR_7[3];
    int VAR_8[3];
    int VAR_9;
    int VAR_10, VAR_11;
    VLC VAR_12[2];

    VAR_8[0] = 0x80;
    VAR_8[1] = 0x80;
    VAR_8[2] = 0x80;

    VAR_7[0] = VAR_4->data[0];
    VAR_7[1] = VAR_4->data[1];
    VAR_7[2] = VAR_4->data[2];

    FUNC_6(VAR_3, 8);

    VAR_6 = FUNC_3(VAR_3, 8);
    if (VAR_6) {
        FUNC_1(VAR_2->avctx, "Blocked YUV");
        return VAR_0;
    }


    for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
        VAR_9 = FUNC_4(VAR_2, VAR_3, &VAR_12[VAR_10]);
        if (VAR_9 < 0) {
            for (VAR_11 = 0; VAR_11 <= VAR_10; VAR_11++)
                FUNC_2(&VAR_12[VAR_11]);

            FUNC_0(VAR_2->avctx, VAR_1,
                   "Could not read code table %d.\n", VAR_10);
            return VAR_9;
        }
    }


    for (VAR_10 = 0; VAR_10 < VAR_5->height; VAR_10++) {
        FUNC_5(VAR_2, VAR_3, &VAR_8[0], &VAR_12[0], VAR_7[0], 0);
        FUNC_5(VAR_2, VAR_3, &VAR_8[1], &VAR_12[1], VAR_7[1], 1);
        FUNC_5(VAR_2, VAR_3, &VAR_8[2], &VAR_12[1], VAR_7[2], 1);

        for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
            VAR_7[VAR_11] += VAR_4->linesize[VAR_11];
    }

    for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
        FUNC_2(&VAR_12[VAR_10]);

    return 0;
}
