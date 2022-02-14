
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int v ;
typedef int uint8_t ;
typedef int u ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int height; int width; int* linesize; int ** data; } ;
struct TYPE_7__ {int vsub_log2; int hsub_log2; int * chromakey_uv; } ;
typedef TYPE_1__ ChromakeyContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int,int,int *,int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AVFrame *VAR_4 = VAR_1;

    const int VAR_5 = (VAR_4->height * VAR_2) / VAR_3;
    const int VAR_6 = (VAR_4->height * (VAR_2 + 1)) / VAR_3;

    ChromakeyContext *VAR_7 = VAR_0->priv;

    int VAR_8, VAR_9, VAR_10, VAR_11;
    uint8_t VAR_12[9], VAR_13[9];

    FUNC_2(VAR_12, VAR_7->chromakey_uv[0], sizeof(VAR_12));
    FUNC_2(VAR_13, VAR_7->chromakey_uv[1], sizeof(VAR_13));

    for (VAR_9 = VAR_5; VAR_9 < VAR_6; ++VAR_9) {
        for (VAR_8 = 0; VAR_8 < VAR_4->width; ++VAR_8) {
            for (VAR_11 = 0; VAR_11 < 3; ++VAR_11) {
                for (VAR_10 = 0; VAR_10 < 3; ++VAR_10) {
                    FUNC_1(VAR_4, VAR_7->hsub_log2, VAR_7->vsub_log2, VAR_8 + VAR_10 - 1, VAR_9 + VAR_11 - 1, &VAR_12[VAR_11 * 3 + VAR_10], &VAR_13[VAR_11 * 3 + VAR_10]);
                }
            }

            VAR_4->data[3][VAR_4->linesize[3] * VAR_9 + VAR_8] = FUNC_0(VAR_7, VAR_12, VAR_13);
        }
    }

    return 0;
}
