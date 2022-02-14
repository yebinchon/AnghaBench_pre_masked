
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int codec_id; scalar_t__ extradata; scalar_t__ extradata_size; } ;
struct TYPE_7__ {int index; TYPE_5__* codecpar; } ;
struct TYPE_6__ {int timestamp; int pktbuf; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int const*,int) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,...) ;

__attribute__((used)) static int FUNC_9 (AVFormatContext *VAR_3, PayloadContext *VAR_4,
                              AVStream *VAR_5, AVPacket *VAR_6,
                              uint32_t *VAR_7,
                              const uint8_t *VAR_8, int VAR_9, uint16_t VAR_10,
                              int VAR_11)
{
    int VAR_12, VAR_13, VAR_14;

    if (VAR_9 < 2)
        return VAR_0;

    VAR_12 = VAR_8[0] & 0x40;
    VAR_13 = VAR_8[0] & 0x20;
    VAR_14 = VAR_8[0] & 0x10;
    VAR_8 += 2;
    VAR_9 -= 2;

    if (VAR_12) {

        FUNC_2(&VAR_5->codecpar->extradata);
        VAR_5->codecpar->extradata_size = 0;

        if (VAR_9 < 2 || FUNC_5(VAR_5->codecpar, VAR_9 + 8))
            return VAR_0;

        FUNC_8(VAR_5->codecpar->extradata, "SEQH", 4);
        FUNC_1(VAR_5->codecpar->extradata + 4, VAR_9);
        FUNC_8(VAR_5->codecpar->extradata + 8, VAR_8, VAR_9);






        VAR_5->codecpar->codec_id = VAR_1;

        return FUNC_0(VAR_2);
    }

    if (VAR_13) {
        int VAR_15;

        FUNC_7(&VAR_4->pktbuf);
        if ((VAR_15 = FUNC_3(&VAR_4->pktbuf)) < 0)
            return VAR_15;
        VAR_4->timestamp = *VAR_7;
    }

    if (!VAR_4->pktbuf)
        return VAR_0;

    FUNC_4(VAR_4->pktbuf, VAR_8, VAR_9);

    if (VAR_14) {
        int VAR_16 = FUNC_6(VAR_6, &VAR_4->pktbuf, VAR_5->index);
        if (VAR_16 < 0)
            return VAR_16;

        *VAR_7 = VAR_4->timestamp;
        return 0;
    }

    return FUNC_0(VAR_2);
}
