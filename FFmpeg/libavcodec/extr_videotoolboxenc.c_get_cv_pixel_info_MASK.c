
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int warned_color_range; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_10__ {size_t width; size_t height; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int format; int color_range; size_t* linesize; scalar_t__* data; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,char*,int,...) ;
 int FUNC_4 (TYPE_3__*,int,int,int*,int*) ;

__attribute__((used)) static int FUNC_5(
    AVCodecContext *VAR_5,
    const AVFrame *VAR_6,
    int *VAR_7,
    int *VAR_8,
    size_t *VAR_9,
    size_t *VAR_10,
    size_t *VAR_11,
    size_t *VAR_12)
{
    VTEncContext *VAR_13 = VAR_5->priv_data;
    int VAR_14 = VAR_6->format;
    int VAR_15 = VAR_6->color_range;
    int VAR_16;
    int VAR_17;
    int VAR_18;

    VAR_18 = FUNC_4(VAR_5, VAR_14, VAR_15, VAR_7, &VAR_17);
    if (VAR_18) {
        FUNC_3(VAR_5,
            VAR_2,
            "Could not get pixel format for color format '%s' range '%s'.\n",
            FUNC_2(VAR_14),
            VAR_15 > VAR_1 &&
            VAR_15 < VAR_0 ?
               FUNC_1(VAR_15) :
               "Unknown");

        return FUNC_0(VAR_4);
    }

    if (VAR_17) {
        if (!VAR_13->warned_color_range) {
            VAR_13->warned_color_range = 1;
            FUNC_3(VAR_5,
                   VAR_3,
                   "Color range not set for %s. Using MPEG range.\n",
                   FUNC_2(VAR_14));
        }
    }

    switch (VAR_14) {
    case 130:
        *VAR_8 = 2;

        VAR_9 [0] = VAR_5->width;
        VAR_10[0] = VAR_5->height;
        VAR_11[0] = VAR_6 ? VAR_6->linesize[0] : VAR_5->width;

        VAR_9 [1] = (VAR_5->width + 1) / 2;
        VAR_10[1] = (VAR_5->height + 1) / 2;
        VAR_11[1] = VAR_6 ? VAR_6->linesize[1] : (VAR_5->width + 1) & -2;
        break;

    case 128:
        *VAR_8 = 3;

        VAR_9 [0] = VAR_5->width;
        VAR_10[0] = VAR_5->height;
        VAR_11[0] = VAR_6 ? VAR_6->linesize[0] : VAR_5->width;

        VAR_9 [1] = (VAR_5->width + 1) / 2;
        VAR_10[1] = (VAR_5->height + 1) / 2;
        VAR_11[1] = VAR_6 ? VAR_6->linesize[1] : (VAR_5->width + 1) / 2;

        VAR_9 [2] = (VAR_5->width + 1) / 2;
        VAR_10[2] = (VAR_5->height + 1) / 2;
        VAR_11[2] = VAR_6 ? VAR_6->linesize[2] : (VAR_5->width + 1) / 2;
        break;

    case 129:
        *VAR_8 = 2;
        VAR_9[0] = VAR_5->width;
        VAR_10[0] = VAR_5->height;
        VAR_11[0] = VAR_6 ? VAR_6->linesize[0] : (VAR_5->width * 2 + 63) & -64;

        VAR_9[1] = (VAR_5->width + 1) / 2;
        VAR_10[1] = (VAR_5->height + 1) / 2;
        VAR_11[1] = VAR_6 ? VAR_6->linesize[1] : ((VAR_5->width + 1) / 2 + 63) & -64;
        break;

    default:
        FUNC_3(
               VAR_5,
               VAR_2,
               "Could not get frame format info for color %d range %d.\n",
               VAR_14,
               VAR_15);

        return FUNC_0(VAR_4);
    }

    *VAR_12 = 0;
    for (VAR_16 = 0; VAR_16 < *VAR_8; VAR_16++) {
        if (VAR_16 < *VAR_8 - 1 &&
            VAR_6->data[VAR_16] + VAR_11[VAR_16] * VAR_10[VAR_16] != VAR_6->data[VAR_16 + 1]) {
            *VAR_12 = 0;
            break;
        }

        *VAR_12 += VAR_11[VAR_16] * VAR_10[VAR_16];
    }

    return 0;
}
