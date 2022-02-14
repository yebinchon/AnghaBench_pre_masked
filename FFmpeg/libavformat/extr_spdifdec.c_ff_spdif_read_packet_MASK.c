
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef enum IEC61937DataType { ____Placeholder_IEC61937DataType } IEC61937DataType ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_21__ {int bit_rate; TYPE_3__** streams; int nb_streams; int * pb; } ;
struct TYPE_20__ {int pos; int size; scalar_t__ data; } ;
struct TYPE_19__ {TYPE_1__* codecpar; } ;
struct TYPE_18__ {TYPE_2__* codecpar; } ;
struct TYPE_17__ {int codec_id; int sample_rate; } ;
struct TYPE_16__ {int codec_id; int codec_type; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_4__* FUNC_5 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_6__*,char*) ;
 int FUNC_13 (TYPE_6__*,char*) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (TYPE_6__*,int,scalar_t__,int*,int*) ;

int FUNC_16(AVFormatContext *VAR_7, AVPacket *VAR_8)
{
    AVIOContext *VAR_9 = VAR_7->pb;
    enum IEC61937DataType VAR_10;
    enum AVCodecID VAR_11;
    uint32_t VAR_12 = 0;
    int VAR_13, VAR_14, VAR_15;

    while (VAR_12 != (FUNC_1(VAR_5) << 16 | FUNC_1(VAR_6))) {
        VAR_12 = (VAR_12 << 8) | FUNC_7(VAR_9);
        if (FUNC_6(VAR_9))
            return VAR_0;
    }

    VAR_10 = FUNC_9(VAR_9);
    VAR_13 = FUNC_9(VAR_9);

    if (VAR_13 % 16)
        FUNC_13(VAR_7, "Packet not ending at a 16-bit boundary");

    VAR_15 = FUNC_3(VAR_8, FUNC_2(VAR_13, 16) >> 3);
    if (VAR_15)
        return VAR_15;

    VAR_8->pos = FUNC_11(VAR_9) - VAR_3;

    if (FUNC_8(VAR_9, VAR_8->data, VAR_8->size) < VAR_8->size) {
        FUNC_4(VAR_8);
        return VAR_0;
    }
    FUNC_14((uint16_t *)VAR_8->data, (uint16_t *)VAR_8->data, VAR_8->size >> 1);

    VAR_15 = FUNC_15(VAR_7, VAR_10, VAR_8->data,
                                     &VAR_14, &VAR_11);
    if (VAR_15) {
        FUNC_4(VAR_8);
        return VAR_15;
    }


    FUNC_10(VAR_9, VAR_14 - VAR_8->size - VAR_3);

    if (!VAR_7->nb_streams) {

        AVStream *VAR_16 = FUNC_5(VAR_7, ((void*)0));
        if (!VAR_16) {
            FUNC_4(VAR_8);
            return FUNC_0(VAR_4);
        }
        VAR_16->codecpar->codec_type = VAR_2;
        VAR_16->codecpar->codec_id = VAR_11;
    } else if (VAR_11 != VAR_7->streams[0]->codecpar->codec_id) {
        FUNC_12(VAR_7, "Codec change in IEC 61937");
        return VAR_1;
    }

    if (!VAR_7->bit_rate && VAR_7->streams[0]->codecpar->sample_rate)


        VAR_7->bit_rate = 2 * 16 * VAR_7->streams[0]->codecpar->sample_rate;

    return 0;
}
