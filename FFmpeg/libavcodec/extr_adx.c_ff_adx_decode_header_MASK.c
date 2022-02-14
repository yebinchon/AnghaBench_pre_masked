
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int channels; int sample_rate; int bit_rate; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int,int,int ,int*) ;
 scalar_t__ FUNC_4 (int const*,char*,int) ;

int FUNC_5(AVCodecContext *VAR_6, const uint8_t *VAR_7,
                         int VAR_8, int *VAR_9, int *VAR_10)
{
    int VAR_11, VAR_12;

    if (VAR_8 < 24)
        return VAR_0;

    if (FUNC_0(VAR_7) != 0x8000)
        return VAR_0;
    VAR_11 = FUNC_0(VAR_7 + 2) + 4;


    if (VAR_8 >= VAR_11 && VAR_11 >= 6 && FUNC_4(VAR_7 + VAR_11 - 6, "(c)CRI", 6))
        return VAR_0;


    if (VAR_7[4] != 3 || VAR_7[5] != 18 || VAR_7[6] != 4) {
        FUNC_2(VAR_6, "Support for this ADX format");
        return VAR_1;
    }


    VAR_6->channels = VAR_7[7];
    if (VAR_6->channels <= 0 || VAR_6->channels > 2)
        return VAR_0;


    VAR_6->sample_rate = FUNC_1(VAR_7 + 8);
    if (VAR_6->sample_rate < 1 ||
        VAR_6->sample_rate > VAR_5 / (VAR_6->channels * VAR_3 * 8))
        return VAR_0;


    VAR_6->bit_rate = VAR_6->sample_rate * VAR_6->channels * VAR_3 * 8 / VAR_2;


    if (VAR_10) {
        VAR_12 = FUNC_0(VAR_7 + 16);
        FUNC_3(VAR_12, VAR_6->sample_rate, VAR_4, VAR_10);
    }

    *VAR_9 = VAR_11;
    return 0;
}
