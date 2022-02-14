
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int** data; int* linesize; int height; int width; } ;
struct TYPE_5__ {int factor; int vsub; int hsub; } ;
typedef TYPE_1__ FadeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const,int ) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2,
                               int VAR_3)
{
    FadeContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    int VAR_6, VAR_7, VAR_8;
    const int VAR_9 = FUNC_0(VAR_5->width, VAR_4->hsub);
    const int VAR_10= FUNC_0(VAR_5->height, VAR_4->vsub);
    int VAR_11 = (VAR_10 * VAR_2 ) / VAR_3;
    int VAR_12 = FUNC_1(((VAR_10 * (VAR_2+1)) / VAR_3), VAR_5->height);

    for (VAR_8 = 1; VAR_8 < 3; VAR_8++) {
        for (VAR_6 = VAR_11; VAR_6 < VAR_12; VAR_6++) {
            uint8_t *VAR_13 = VAR_5->data[VAR_8] + VAR_6 * VAR_5->linesize[VAR_8];
            for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {



                *VAR_13 = ((*VAR_13 - 128) * VAR_4->factor + 8421367) >> 16;
                VAR_13++;
            }
        }
    }

    return 0;
}
