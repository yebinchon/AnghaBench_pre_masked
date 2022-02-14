
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int stream_index; int data; } ;
struct TYPE_8__ {int index; TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ codec_type; } ;
typedef int PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (int const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, PayloadContext *VAR_4,
                             AVStream *VAR_5, AVPacket *VAR_6, uint32_t *VAR_7,
                             const uint8_t *VAR_8, int VAR_9, uint16_t VAR_10,
                             int VAR_11)
{
    unsigned int VAR_12;
    if (VAR_9 <= 4)
        return VAR_0;
    VAR_12 = FUNC_1(VAR_8);
    VAR_8 += 4;
    VAR_9 -= 4;
    if (VAR_5->codecpar->codec_type == VAR_1 && VAR_12 & (1 << 26)) {

        if (VAR_9 <= 4)
            return VAR_0;
        VAR_8 += 4;
        VAR_9 -= 4;
    }
    if (FUNC_2(VAR_6, VAR_9) < 0)
        return FUNC_0(VAR_2);
    FUNC_3(VAR_6->data, VAR_8, VAR_9);
    VAR_6->stream_index = VAR_5->index;
    return 0;
}
