
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int bits_per_coded_sample; void* sample_rate; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (float,char,char,char) ;

 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_4, const uint8_t *VAR_5,
                              int VAR_6)
{
    int VAR_7, VAR_8;
    short VAR_9;
    GetByteContext VAR_10;

    FUNC_6(&VAR_10, VAR_5, VAR_6);

    if (FUNC_5(&VAR_10) != FUNC_1('R', 'I', 'F', 'F')) {
        FUNC_2(VAR_4, VAR_1, "missing RIFF tag\n");
        return VAR_0;
    }

    FUNC_7(&VAR_10, 4);

    if (FUNC_5(&VAR_10) != FUNC_1('W', 'A', 'V', 'E')) {
        FUNC_2(VAR_4, VAR_1, "missing WAVE tag\n");
        return VAR_0;
    }

    while (FUNC_5(&VAR_10) != FUNC_1('f', 'm', 't', ' ')) {
        VAR_7 = FUNC_5(&VAR_10);
        FUNC_7(&VAR_10, VAR_7);
        if (VAR_7 < 0 || FUNC_3(&VAR_10) < 16) {
            FUNC_2(VAR_4, VAR_1, "no fmt chunk found\n");
            return VAR_0;
        }
    }
    VAR_7 = FUNC_5(&VAR_10);

    if (VAR_7 < 16) {
        FUNC_2(VAR_4, VAR_1, "fmt chunk was too short\n");
        return VAR_0;
    }

    VAR_9 = FUNC_4(&VAR_10);

    switch (VAR_9) {
    case 128:
        break;
    default:
        FUNC_2(VAR_4, VAR_1, "unsupported wave format\n");
        return FUNC_0(VAR_3);
    }

    FUNC_7(&VAR_10, 2);
    VAR_4->sample_rate = FUNC_5(&VAR_10);
    FUNC_7(&VAR_10, 4);
    FUNC_7(&VAR_10, 2);
    VAR_8 = FUNC_4(&VAR_10);
    VAR_4->bits_per_coded_sample = VAR_8;

    if (VAR_8 != 16 && VAR_8 != 8) {
        FUNC_2(VAR_4, VAR_1, "unsupported number of bits per sample: %d\n", VAR_8);
        return FUNC_0(VAR_3);
    }

    VAR_7 -= 16;
    if (VAR_7 > 0)
        FUNC_2(VAR_4, VAR_2, "%d header bytes unparsed\n", VAR_7);

    return 0;
}
