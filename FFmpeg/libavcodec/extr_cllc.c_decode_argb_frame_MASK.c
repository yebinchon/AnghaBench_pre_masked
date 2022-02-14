
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VLC ;
struct TYPE_11__ {int height; } ;
struct TYPE_10__ {int * linesize; int ** data; } ;
struct TYPE_9__ {TYPE_3__* avctx; } ;
typedef int GetBitContext ;
typedef TYPE_1__ CLLCContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(CLLCContext *VAR_1, GetBitContext *VAR_2, AVFrame *VAR_3)
{
    AVCodecContext *VAR_4 = VAR_1->avctx;
    uint8_t *VAR_5;
    int VAR_6[4];
    int VAR_7;
    int VAR_8, VAR_9;
    VLC VAR_10[4];

    VAR_6[0] = 0;
    VAR_6[1] = 0x80;
    VAR_6[2] = 0x80;
    VAR_6[3] = 0x80;

    VAR_5 = VAR_3->data[0];

    FUNC_4(VAR_2, 16);


    for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
        VAR_7 = FUNC_3(VAR_1, VAR_2, &VAR_10[VAR_8]);
        if (VAR_7 < 0) {
            for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++)
                FUNC_1(&VAR_10[VAR_9]);

            FUNC_0(VAR_1->avctx, VAR_0,
                   "Could not read code table %d.\n", VAR_8);
            return VAR_7;
        }
    }


    for (VAR_8 = 0; VAR_8 < VAR_4->height; VAR_8++) {
        FUNC_2(VAR_1, VAR_2, VAR_6, VAR_10, VAR_5);

        VAR_5 += VAR_3->linesize[0];
    }

    for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
        FUNC_1(&VAR_10[VAR_8]);

    return 0;
}
