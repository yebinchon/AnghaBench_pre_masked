
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int bits_per_coded_sample; int sample_rate; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int swap; } ;
typedef TYPE_1__ ShortenContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char,char,float,char) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long long FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_4, const uint8_t *VAR_5,
                              int VAR_6)
{
    ShortenContext *VAR_7 = VAR_4->priv_data;
    int VAR_8, VAR_9, VAR_10;
    GetByteContext VAR_11;
    uint64_t VAR_12;
    uint32_t VAR_13;

    FUNC_8(&VAR_11, VAR_5, VAR_6);

    if (FUNC_7(&VAR_11) != FUNC_1('F', 'O', 'R', 'M')) {
        FUNC_2(VAR_4, VAR_1, "missing FORM tag\n");
        return VAR_0;
    }

    FUNC_9(&VAR_11, 4);

    VAR_13 = FUNC_7(&VAR_11);
    if (VAR_13 != FUNC_1('A', 'I', 'F', 'F') &&
        VAR_13 != FUNC_1('A', 'I', 'F', 'C')) {
        FUNC_2(VAR_4, VAR_1, "missing AIFF tag\n");
        return VAR_0;
    }

    while (FUNC_7(&VAR_11) != FUNC_1('C', 'O', 'M', 'M')) {
        VAR_8 = FUNC_4(&VAR_11);
        if (VAR_8 < 0 || FUNC_6(&VAR_11) < 18LL + VAR_8 + (VAR_8&1)) {
            FUNC_2(VAR_4, VAR_1, "no COMM chunk found\n");
            return VAR_0;
        }
        FUNC_9(&VAR_11, VAR_8 + (VAR_8 & 1));
    }
    VAR_8 = FUNC_4(&VAR_11);

    if (VAR_8 < 18) {
        FUNC_2(VAR_4, VAR_1, "COMM chunk was too short\n");
        return VAR_0;
    }

    FUNC_9(&VAR_11, 6);
    VAR_9 = FUNC_3(&VAR_11);
    VAR_4->bits_per_coded_sample = VAR_9;

    VAR_7->swap = VAR_13 == FUNC_1('A', 'I', 'F', 'C');

    if (VAR_9 != 16 && VAR_9 != 8) {
        FUNC_2(VAR_4, VAR_1, "unsupported number of bits per sample: %d\n", VAR_9);
        return FUNC_0(VAR_3);
    }

    VAR_10 = FUNC_3(&VAR_11) - 16383 - 63;
    VAR_12 = FUNC_5(&VAR_11);
    if (VAR_10 < -63 || VAR_10 > 63) {
        FUNC_2(VAR_4, VAR_1, "exp %d is out of range\n", VAR_10);
        return VAR_0;
    }
    if (VAR_10 >= 0)
        VAR_4->sample_rate = VAR_12 << VAR_10;
    else
        VAR_4->sample_rate = (VAR_12 + (1ULL<<(-VAR_10-1))) >> -VAR_10;
    VAR_8 -= 18;
    if (VAR_8 > 0)
        FUNC_2(VAR_4, VAR_2, "%d header bytes unparsed\n", VAR_8);

    return 0;
}
