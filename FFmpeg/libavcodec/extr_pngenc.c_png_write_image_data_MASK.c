
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ codec_id; scalar_t__ frame_number; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int sequence_number; int const* bytestream; } ;
typedef TYPE_1__ PNGEncContext ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVCRC ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float,char,char,char) ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (int const*,int,int const*,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int const**,int) ;
 int FUNC_5 (int const*,int const*,int) ;
 int FUNC_6 (int const**,int ,int const*,int) ;

__attribute__((used)) static void FUNC_7(AVCodecContext *VAR_2,
                                 const uint8_t *VAR_3, int VAR_4)
{
    PNGEncContext *VAR_5 = VAR_2->priv_data;
    const AVCRC *VAR_6 = FUNC_3(VAR_1);
    uint32_t VAR_7 = ~0U;

    if (VAR_2->codec_id == VAR_0 || VAR_2->frame_number == 0) {
        FUNC_6(&VAR_5->bytestream, FUNC_1('I', 'D', 'A', 'T'), VAR_3, VAR_4);
        return;
    }

    FUNC_4(&VAR_5->bytestream, VAR_4 + 4);

    FUNC_4(&VAR_5->bytestream, FUNC_0('f', 'd', 'A', 'T'));
    FUNC_4(&VAR_5->bytestream, VAR_5->sequence_number);
    VAR_7 = FUNC_2(VAR_6, VAR_7, VAR_5->bytestream - 8, 8);

    VAR_7 = FUNC_2(VAR_6, VAR_7, VAR_3, VAR_4);
    FUNC_5(VAR_5->bytestream, VAR_3, VAR_4);
    VAR_5->bytestream += VAR_4;

    FUNC_4(&VAR_5->bytestream, ~VAR_7);

    ++VAR_5->sequence_number;
}
