
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int height; int width; int* linesize; int ** data; } ;
struct TYPE_6__ {int* co; } ;
typedef TYPE_1__ ColorkeyContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AVFrame *VAR_4 = VAR_1;

    const int VAR_5 = (VAR_4->height * VAR_2) / VAR_3;
    const int VAR_6 = (VAR_4->height * (VAR_2 + 1)) / VAR_3;

    ColorkeyContext *VAR_7 = VAR_0->priv;

    int VAR_8, VAR_9, VAR_10;

    for (VAR_10 = VAR_5; VAR_10 < VAR_6; ++VAR_10) {
        for (VAR_9 = 0; VAR_9 < VAR_4->width; ++VAR_9) {
            VAR_8 = VAR_4->linesize[0] * VAR_10 + VAR_9 * 4;

            VAR_4->data[0][VAR_8 + VAR_7->co[3]] =
                FUNC_0(VAR_7,
                                  VAR_4->data[0][VAR_8 + VAR_7->co[0]],
                                  VAR_4->data[0][VAR_8 + VAR_7->co[1]],
                                  VAR_4->data[0][VAR_8 + VAR_7->co[2]]);
        }
    }

    return 0;
}
