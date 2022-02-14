
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int buffer; } ;
struct TYPE_10__ {int x; int y; } ;
struct TYPE_9__ {TYPE_5__ gbyte; TYPE_3__* mvectors; scalar_t__* size; int mvectors_size; } ;
struct TYPE_8__ {int height; int width; TYPE_2__* priv_data; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AGMContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__**,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (int *,int*,int*,int*,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_2, GetBitContext *VAR_3)
{
    AGMContext *VAR_4 = VAR_2->priv_data;
    int VAR_5 = ((VAR_2->height + 15) >> 4) * ((VAR_2->width + 15) >> 4);
    int VAR_6, VAR_7 = 0, VAR_8, VAR_9;

    FUNC_1(&VAR_4->mvectors, &VAR_4->mvectors_size,
                          VAR_5 * sizeof(*VAR_4->mvectors));
    if (!VAR_4->mvectors)
        return FUNC_0(VAR_1);

    if ((VAR_6 = FUNC_6(VAR_3, VAR_4->gbyte.buffer, FUNC_2(&VAR_4->gbyte) -
                                                   (VAR_4->size[0] + VAR_4->size[1] + VAR_4->size[2]))) < 0)
        return VAR_6;

    FUNC_7(VAR_4->mvectors, 0, sizeof(*VAR_4->mvectors) * VAR_5);

    for (int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
        VAR_6 = FUNC_8(VAR_3, &VAR_7, &VAR_8, &VAR_9, 1);
        if (VAR_6 < 0)
            return VAR_6;
        VAR_4->mvectors[VAR_10].x = VAR_8;
        VAR_10 += VAR_7;
    }

    for (int VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
        VAR_6 = FUNC_8(VAR_3, &VAR_7, &VAR_8, &VAR_9, 1);
        if (VAR_6 < 0)
            return VAR_6;
        VAR_4->mvectors[VAR_11].y = VAR_8;
        VAR_11 += VAR_7;
    }

    if (FUNC_5(VAR_3) <= 0)
        return VAR_0;
    VAR_7 = (FUNC_4(VAR_3) >> 3) + 1;
    FUNC_3(&VAR_4->gbyte, VAR_7);

    return 0;
}
