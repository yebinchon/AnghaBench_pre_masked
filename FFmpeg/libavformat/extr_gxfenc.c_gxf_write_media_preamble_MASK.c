
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {TYPE_5__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_16__ {size_t stream_index; int size; int data; int dts; } ;
struct TYPE_15__ {int index; TYPE_2__* codecpar; TYPE_3__* priv_data; } ;
struct TYPE_11__ {int num; int den; } ;
struct TYPE_14__ {unsigned int nb_fields; TYPE_1__ time_base; } ;
struct TYPE_13__ {int media_type; int pframes; int bframes; int iframes; } ;
struct TYPE_12__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
typedef TYPE_3__ GXFStreamContext ;
typedef TYPE_4__ GXFContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_7__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_7, AVPacket *VAR_8, int VAR_9)
{
    GXFContext *VAR_10 = VAR_7->priv_data;
    AVIOContext *VAR_11 = VAR_7->pb;
    AVStream *VAR_12 = VAR_7->streams[VAR_8->stream_index];
    GXFStreamContext *VAR_13 = VAR_12->priv_data;
    unsigned VAR_14;



    if (VAR_12->codecpar->codec_type == VAR_1) {
        VAR_14 = VAR_10->nb_fields;
    } else {
        VAR_14 = FUNC_0(VAR_8->dts, VAR_10->time_base.den,
                                  (int64_t)48000*VAR_10->time_base.num, VAR_6);
    }

    FUNC_1(VAR_11, VAR_13->media_type);
    FUNC_1(VAR_11, VAR_12->index);
    FUNC_4(VAR_11, VAR_14);
    if (VAR_12->codecpar->codec_type == VAR_0) {
        FUNC_2(VAR_11, 0);
        FUNC_2(VAR_11, VAR_9 / 2);
    } else if (VAR_12->codecpar->codec_id == VAR_3) {
        int VAR_15 = FUNC_5(VAR_13, VAR_8->data, VAR_8->size);
        if (VAR_15 == VAR_5) {
            FUNC_1(VAR_11, 0x0d);
            VAR_13->iframes++;
        } else if (VAR_15 == VAR_4) {
            FUNC_1(VAR_11, 0x0f);
            VAR_13->bframes++;
        } else {
            FUNC_1(VAR_11, 0x0e);
            VAR_13->pframes++;
        }
        FUNC_3(VAR_11, VAR_9);
    } else if (VAR_12->codecpar->codec_id == VAR_2) {
        FUNC_1(VAR_11, VAR_9 / 4096);
        FUNC_3(VAR_11, 0);
    } else
        FUNC_4(VAR_11, VAR_9);
    FUNC_4(VAR_11, VAR_14);
    FUNC_1(VAR_11, 1);
    FUNC_1(VAR_11, 0);
    return 16;
}
