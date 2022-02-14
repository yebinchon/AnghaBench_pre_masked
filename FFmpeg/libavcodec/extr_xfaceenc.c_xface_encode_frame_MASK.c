
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
typedef int intbuf ;
struct TYPE_20__ {int* bitmap; } ;
typedef TYPE_3__ XFaceContext ;
struct TYPE_25__ {int width; scalar_t__ height; TYPE_3__* priv_data; } ;
struct TYPE_24__ {int** data; int * linesize; } ;
struct TYPE_23__ {int* data; int flags; } ;
struct TYPE_22__ {scalar_t__ nb_words; int member_0; } ;
struct TYPE_19__ {int member_0; } ;
struct TYPE_18__ {TYPE_2__ member_0; } ;
struct TYPE_21__ {size_t prob_ranges_idx; int * prob_ranges; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_4__ ProbRangesQueue ;
typedef TYPE_5__ BigInt ;
typedef TYPE_6__ AVPacket ;
typedef TYPE_7__ AVFrame ;
typedef TYPE_8__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_8__*,int ,char*,int,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (int*,int,int,int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_8__*,TYPE_6__*,int,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int*) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (TYPE_5__*,int *) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_10, AVPacket *VAR_11,
                              const AVFrame *VAR_12, int *VAR_13)
{
    XFaceContext *VAR_14 = VAR_10->priv_data;
    ProbRangesQueue VAR_15 = {{{ 0 }}, 0};
    uint8_t VAR_16[VAR_7];
    BigInt VAR_17 = {0};
    int VAR_18, VAR_19, VAR_20, VAR_21 = 0;
    const uint8_t *VAR_22;
    uint8_t *VAR_23;
    char VAR_24[VAR_5];

    if (VAR_10->width || VAR_10->height) {
        if (VAR_10->width != VAR_9 || VAR_10->height != VAR_4) {
            FUNC_2(VAR_10, VAR_0,
                   "Size value %dx%d not supported, only accepts a size of %dx%d\n",
                   VAR_10->width, VAR_10->height, VAR_9, VAR_4);
            return FUNC_0(VAR_2);
        }
    }
    VAR_10->width = VAR_9;
    VAR_10->height = VAR_4;


    VAR_22 = VAR_12->data[0];
    VAR_18 = VAR_19 = 0;
    do {
        for (VAR_20 = 0; VAR_20 < 8; VAR_20++)
            VAR_14->bitmap[VAR_18++] = (VAR_22[VAR_19]>>(7-VAR_20))&1;
        if (++VAR_19 == VAR_9/8) {
            VAR_22 += VAR_12->linesize[0];
            VAR_19 = 0;
        }
    } while (VAR_18 < VAR_7);


    FUNC_7(VAR_16, VAR_14->bitmap, VAR_7);
    FUNC_6(VAR_14->bitmap, VAR_16);

    FUNC_3(VAR_14->bitmap, 16, 16, 0, &VAR_15);
    FUNC_3(VAR_14->bitmap + 16, 16, 16, 0, &VAR_15);
    FUNC_3(VAR_14->bitmap + 32, 16, 16, 0, &VAR_15);
    FUNC_3(VAR_14->bitmap + VAR_9 * 16, 16, 16, 0, &VAR_15);
    FUNC_3(VAR_14->bitmap + VAR_9 * 16 + 16, 16, 16, 0, &VAR_15);
    FUNC_3(VAR_14->bitmap + VAR_9 * 16 + 32, 16, 16, 0, &VAR_15);
    FUNC_3(VAR_14->bitmap + VAR_9 * 32, 16, 16, 0, &VAR_15);
    FUNC_3(VAR_14->bitmap + VAR_9 * 32 + 16, 16, 16, 0, &VAR_15);
    FUNC_3(VAR_14->bitmap + VAR_9 * 32 + 32, 16, 16, 0, &VAR_15);

    while (VAR_15.prob_ranges_idx > 0)
        FUNC_8(&VAR_17, &VAR_15.prob_ranges[--VAR_15.prob_ranges_idx]);


    VAR_18 = 0;
    FUNC_1(VAR_17.nb_words < VAR_6);
    while (VAR_17.nb_words) {
        uint8_t VAR_25;
        FUNC_5(&VAR_17, VAR_8, &VAR_25);
        FUNC_1(VAR_18 < sizeof(VAR_24));
        VAR_24[VAR_18++] = VAR_25 + VAR_3;
    }

    if ((VAR_21 = FUNC_4(VAR_10, VAR_11, VAR_18+2, 0)) < 0)
        return VAR_21;


    VAR_23 = VAR_11->data;
    while (--VAR_18 >= 0)
        *(VAR_23++) = VAR_24[VAR_18];
    *(VAR_23++) = '\n';
    *(VAR_23++) = 0;

    VAR_11->flags |= VAR_1;
    *VAR_13 = 1;

    return 0;
}
