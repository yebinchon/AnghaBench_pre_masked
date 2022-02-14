
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {scalar_t__ ac_esc_length; scalar_t__* intra_ac_vlc_last_length; scalar_t__* intra_ac_vlc_length; } ;
typedef TYPE_1__ MpegEncContext ;


 size_t FUNC_0 (int,int) ;

__attribute__((used)) static inline int FUNC_1(MpegEncContext *VAR_0, int16_t VAR_1[64],
                                 int VAR_2, uint8_t VAR_3[64])
{
    int VAR_4 = 0;
    int VAR_5;
    int VAR_6 = 0;

    for (VAR_5 = 1; VAR_5 <= VAR_2; VAR_5++) {
        const int VAR_7 = VAR_3[VAR_5];
        int VAR_8 = VAR_1[VAR_7];
        if (VAR_8) {
            VAR_8 += 64;
            if ((VAR_8 & (~127)) == 0) {
                if (VAR_5 < VAR_2)
                    VAR_6 += VAR_0->intra_ac_vlc_length[FUNC_0(VAR_5 - VAR_4 - 1, VAR_8)];
                else
                    VAR_6 += VAR_0->intra_ac_vlc_last_length[FUNC_0(VAR_5 - VAR_4 - 1, VAR_8)];
            } else
                VAR_6 += VAR_0->ac_esc_length;

            VAR_4 = VAR_5;
        }
    }

    return VAR_6;
}
