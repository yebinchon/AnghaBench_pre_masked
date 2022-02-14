
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_14__ {char* bitmap; } ;
typedef TYPE_1__ XFaceContext ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {char** data; int * linesize; } ;
struct TYPE_16__ {int size; scalar_t__* data; } ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_2__ BigInt ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,char*,int,int,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_7,
                              void *VAR_8, int *VAR_9,
                              AVPacket *VAR_10)
{
    XFaceContext *VAR_11 = VAR_7->priv_data;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    uint8_t VAR_16;
    BigInt VAR_17 = {0};
    char *VAR_18;
    int64_t VAR_19;
    AVFrame *VAR_20 = VAR_8;

    if ((VAR_12 = FUNC_4(VAR_7, VAR_20, 0)) < 0)
        return VAR_12;

    for (VAR_13 = 0, VAR_15 = 0; VAR_13 < VAR_10->size && VAR_10->data[VAR_13]; VAR_13++) {
        VAR_19 = VAR_10->data[VAR_13];


        if (VAR_19 < VAR_1 || VAR_19 > VAR_2)
            continue;

        if (++VAR_15 > VAR_3) {
            FUNC_0(VAR_7, VAR_0,
                   "Buffer is longer than expected, truncating at byte %d\n", VAR_13);
            break;
        }
        FUNC_3(&VAR_17, VAR_5);
        FUNC_2(&VAR_17, VAR_19 - VAR_1);
    }


    FUNC_6(VAR_11->bitmap, 0, VAR_4);
    VAR_18 = VAR_11->bitmap;
    FUNC_1(&VAR_17, VAR_18, 16, 16, 0);
    FUNC_1(&VAR_17, VAR_18 + 16, 16, 16, 0);
    FUNC_1(&VAR_17, VAR_18 + 32, 16, 16, 0);
    FUNC_1(&VAR_17, VAR_18 + VAR_6 * 16, 16, 16, 0);
    FUNC_1(&VAR_17, VAR_18 + VAR_6 * 16 + 16, 16, 16, 0);
    FUNC_1(&VAR_17, VAR_18 + VAR_6 * 16 + 32, 16, 16, 0);
    FUNC_1(&VAR_17, VAR_18 + VAR_6 * 32 , 16, 16, 0);
    FUNC_1(&VAR_17, VAR_18 + VAR_6 * 32 + 16, 16, 16, 0);
    FUNC_1(&VAR_17, VAR_18 + VAR_6 * 32 + 32, 16, 16, 0);

    FUNC_5(VAR_11->bitmap, VAR_11->bitmap);


    VAR_18 = VAR_20->data[0];
    for (VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0; VAR_13 < VAR_4; VAR_13++) {
        VAR_16 += VAR_11->bitmap[VAR_13];
        if (VAR_15 == 7) {
            VAR_18[VAR_14++] = VAR_16;
            VAR_16 = VAR_15 = 0;
        } else {
            VAR_15++;
            VAR_16 <<= 1;
        }
        if (VAR_14 == VAR_6/8) {
            VAR_14 = 0;
            VAR_18 += VAR_20->linesize[0];
        }
    }

    *VAR_9 = 1;

    return VAR_10->size;
}
