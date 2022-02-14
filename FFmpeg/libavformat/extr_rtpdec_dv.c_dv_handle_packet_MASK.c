
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {scalar_t__ timestamp; scalar_t__ buf; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__,int const*,int) ;
 int FUNC_4 (int *,scalar_t__*,int ) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_4, PayloadContext *VAR_5,
                            AVStream *VAR_6, AVPacket *VAR_7, uint32_t *VAR_8,
                            const uint8_t *VAR_9, int VAR_10, uint16_t VAR_11,
                            int VAR_12)
{
    int VAR_13 = 0;


    if (VAR_5->buf && VAR_5->timestamp != *VAR_8) {
        FUNC_5(&VAR_5->buf);
    }


    if (VAR_10 < 1) {
        FUNC_1(VAR_4, VAR_1, "Too short RTP/DV packet, got %d bytes\n", VAR_10);
        return VAR_0;
    }


    if (!VAR_5->buf) {
        VAR_13 = FUNC_2(&VAR_5->buf);
        if (VAR_13 < 0)
            return VAR_13;

        VAR_5->timestamp = *VAR_8;
    }


    FUNC_3(VAR_5->buf, VAR_9, VAR_10);



    if (!(VAR_12 & VAR_3))
        return FUNC_0(VAR_2);


    VAR_13 = FUNC_4(VAR_7, &VAR_5->buf, VAR_6->index);
    if (VAR_13 < 0)
        return VAR_13;

    return 0;
}
