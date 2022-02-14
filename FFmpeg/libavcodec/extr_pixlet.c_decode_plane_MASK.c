
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef unsigned long long int32_t ;
typedef void* int16_t ;
struct TYPE_18__ {TYPE_2__* priv_data; } ;
struct TYPE_17__ {int* linesize; scalar_t__* data; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {int levels; unsigned long long*** scaling; unsigned int w; unsigned int h; TYPE_1__** band; int prediction; int gb; int bc; } ;
struct TYPE_14__ {int width; int height; } ;
typedef TYPE_2__ PixletContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (void**,int ,int,int,int) ;
 int FUNC_8 (TYPE_5__*,scalar_t__,int,TYPE_4__*) ;
 int FUNC_9 (TYPE_5__*,void**,int,int,int) ;
 int FUNC_10 (TYPE_5__*,void**,unsigned int,unsigned int,int,unsigned long long*,unsigned long long*) ;
 void* FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_4, int VAR_5,
                        AVPacket *VAR_6, AVFrame *VAR_7)
{
    PixletContext *VAR_8 = VAR_4->priv_data;
    ptrdiff_t VAR_9 = VAR_7->linesize[VAR_5] / 2;
    unsigned VAR_10 = VAR_5 > 0;
    int16_t *VAR_11;
    int VAR_12, VAR_13;

    for (VAR_12 = VAR_8->levels - 1; VAR_12 >= 0; VAR_12--) {
        int32_t VAR_14 = FUNC_11(FUNC_2(&VAR_8->gb), 32);
        int32_t VAR_15 = FUNC_11(FUNC_2(&VAR_8->gb), 32);

        if (!VAR_14 || !VAR_15)
            return VAR_0;

        VAR_8->scaling[VAR_5][VAR_2][VAR_12] = (1000000ULL << 32) / VAR_14;
        VAR_8->scaling[VAR_5][VAR_3][VAR_12] = (1000000ULL << 32) / VAR_15;
    }

    FUNC_4(&VAR_8->gb, 4);

    VAR_11 = (int16_t *)VAR_7->data[VAR_5];
    VAR_11[0] = FUNC_11(FUNC_1(&VAR_8->gb), 16);

    VAR_13 = FUNC_6(&VAR_8->bc, VAR_6->data + FUNC_5(&VAR_8->gb),
                         FUNC_3(&VAR_8->gb));
    if (VAR_13 < 0)
        return VAR_13;

    VAR_13 = FUNC_9(VAR_4, VAR_11 + 1, VAR_8->band[VAR_5][0].width - 1,
                          VAR_8->band[VAR_5][0].width - 1, 0);
    if (VAR_13 < 0) {
        FUNC_0(VAR_4, VAR_1,
               "error in lowpass coefficients for plane %d, top row\n", VAR_5);
        return VAR_13;
    }

    VAR_13 = FUNC_9(VAR_4, VAR_11 + VAR_9,
                          VAR_8->band[VAR_5][0].height - 1, 1, VAR_9);
    if (VAR_13 < 0) {
        FUNC_0(VAR_4, VAR_1,
               "error in lowpass coefficients for plane %d, left column\n",
               VAR_5);
        return VAR_13;
    }

    VAR_13 = FUNC_9(VAR_4, VAR_11 + VAR_9 + 1,
                          (VAR_8->band[VAR_5][0].width - 1) * (VAR_8->band[VAR_5][0].height - 1),
                          VAR_8->band[VAR_5][0].width - 1, VAR_9);
    if (VAR_13 < 0) {
        FUNC_0(VAR_4, VAR_1,
               "error in lowpass coefficients for plane %d, rest\n", VAR_5);
        return VAR_13;
    }

    FUNC_4(&VAR_8->gb, VAR_13);
    if (FUNC_3(&VAR_8->gb) <= 0) {
        FUNC_0(VAR_4, VAR_1, "no bytes left\n");
        return VAR_0;
    }

    VAR_13 = FUNC_8(VAR_4, VAR_6->data, VAR_5, VAR_7);
    if (VAR_13 < 0)
        return VAR_13;

    FUNC_7(VAR_11, VAR_8->prediction, VAR_8->band[VAR_5][0].width,
                       VAR_8->band[VAR_5][0].height, VAR_9);

    FUNC_10(VAR_4, (int16_t *)VAR_7->data[VAR_5], VAR_8->w >> VAR_10,
                   VAR_8->h >> VAR_10, VAR_9, VAR_8->scaling[VAR_5][VAR_2],
                   VAR_8->scaling[VAR_5][VAR_3]);

    return 0;
}
