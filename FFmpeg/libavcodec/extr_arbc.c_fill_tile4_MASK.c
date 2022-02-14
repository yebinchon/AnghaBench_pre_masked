
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int gb; } ;
struct TYPE_7__ {int height; int width; TYPE_3__* priv_data; } ;
struct TYPE_6__ {int* linesize; int ** data; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ ARBCContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0, int VAR_1, AVFrame *VAR_2)
{
    ARBCContext *VAR_3 = VAR_0->priv_data;
    GetByteContext *VAR_4 = &VAR_3->gb;
    int VAR_5 = FUNC_2(VAR_4);
    int VAR_6 = VAR_0->height - 1;
    int VAR_7 = 0;

    if ((VAR_0->width / 4 + 1) * (VAR_0->height / 4 + 1) < VAR_5)
        return 0;

    for (int VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        int VAR_9 = FUNC_1(VAR_4);
        int VAR_10 = FUNC_1(VAR_4);
        uint16_t VAR_11 = FUNC_2(VAR_4);
        int VAR_12 = VAR_9 * 4, VAR_13 = VAR_10 * 4;
        int VAR_14 = VAR_12 + 4, VAR_15 = VAR_13 + 4;

        for (int VAR_16 = VAR_12; VAR_16 < VAR_14; VAR_16++) {
            for (int VAR_17 = VAR_13; VAR_17 < VAR_15; VAR_17++) {
                if (VAR_11 & 0x8000) {
                    if (VAR_16 >= VAR_0->height || VAR_17 >= VAR_0->width) {
                        VAR_11 = VAR_11 << 1;
                        continue;
                    }
                    FUNC_0(&VAR_2->data[0][VAR_2->linesize[0] * (VAR_6 - VAR_16) + 3 * VAR_17], VAR_1);
                    VAR_7 ++;
                }
                VAR_11 = VAR_11 << 1;
            }
        }
    }
    return VAR_7;
}
