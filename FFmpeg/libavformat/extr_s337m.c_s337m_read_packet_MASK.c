
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
typedef int int64_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_15__ {int nb_streams; int * pb; } ;
struct TYPE_14__ {int size; scalar_t__ data; int pos; } ;
struct TYPE_13__ {TYPE_1__* codecpar; } ;
struct TYPE_12__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (TYPE_4__*,int,int,int,int*,int*) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AVIOContext *VAR_5 = VAR_3->pb;
    uint64_t VAR_6 = 0;
    int VAR_7, VAR_8, VAR_9, VAR_10;
    enum AVCodecID VAR_11;
    int64_t VAR_12;

    while (!FUNC_2(VAR_6)) {
        VAR_6 = (VAR_6 << 8) | FUNC_7(VAR_5);
        if (FUNC_6(VAR_5))
            return VAR_0;
    }

    if (FUNC_1(VAR_6)) {
        VAR_8 = FUNC_9(VAR_5);
        VAR_9 = FUNC_9(VAR_5);
    } else {
        VAR_8 = FUNC_10(VAR_5);
        VAR_9 = FUNC_10(VAR_5);
    }

    VAR_12 = FUNC_11(VAR_5);

    if ((VAR_7 = FUNC_14(VAR_3, VAR_6, VAR_8, VAR_9, &VAR_10, &VAR_11)) < 0)
        return VAR_7;

    if ((VAR_7 = FUNC_3(VAR_4, VAR_10)) < 0)
        return VAR_7;

    VAR_4->pos = VAR_12;

    if (FUNC_8(VAR_5, VAR_4->data, VAR_4->size) < VAR_4->size) {
        FUNC_4(VAR_4);
        return VAR_0;
    }

    if (FUNC_1(VAR_6))
        FUNC_13((uint16_t *)VAR_4->data, (uint16_t *)VAR_4->data, VAR_4->size >> 1);
    else
        FUNC_12(VAR_4->data, VAR_4->size);

    if (!VAR_3->nb_streams) {
        AVStream *VAR_13 = FUNC_5(VAR_3, ((void*)0));
        if (!VAR_13) {
            FUNC_4(VAR_4);
            return FUNC_0(VAR_2);
        }
        VAR_13->codecpar->codec_type = VAR_1;
        VAR_13->codecpar->codec_id = VAR_11;
    }

    return 0;
}
