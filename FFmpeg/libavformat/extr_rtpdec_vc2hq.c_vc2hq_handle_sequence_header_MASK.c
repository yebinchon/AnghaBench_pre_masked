
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int stream_index; scalar_t__ data; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {int seen_sequence_header; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int,scalar_t__) ;
 int FUNC_2 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_3(PayloadContext *VAR_1, AVStream *VAR_2, AVPacket *VAR_3,
                                        const uint8_t *VAR_4, int VAR_5)
{
    int VAR_6;
    uint32_t VAR_7 = VAR_0 + VAR_5;

    if ((VAR_6 = FUNC_0(VAR_3, VAR_0 + VAR_5)) < 0)
        return VAR_6;

    FUNC_1(VAR_1, VAR_3->data, 0x00, VAR_7);

    FUNC_2(VAR_3->data + VAR_0, VAR_4, VAR_5);
    VAR_3->stream_index = VAR_2->index;

    VAR_1->seen_sequence_header = 1;

    return 0;
}
