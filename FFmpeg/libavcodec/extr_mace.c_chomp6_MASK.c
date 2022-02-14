
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {int previous; int factor; int level; int prev2; } ;
typedef TYPE_1__ ChannelData ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(ChannelData *VAR_0, int16_t *VAR_1, uint8_t VAR_2, int VAR_3)
{
    int16_t VAR_4 = FUNC_3(VAR_0, VAR_2, VAR_3);

    if ((VAR_0->previous ^ VAR_4) >= 0) {
        VAR_0->factor = FUNC_0(VAR_0->factor + 506, 32767);
    } else {
        if (VAR_0->factor - 314 < -32768)
            VAR_0->factor = -32767;
        else
            VAR_0->factor -= 314;
    }

    VAR_4 = FUNC_2(VAR_4 + VAR_0->level);

    VAR_0->level = (VAR_4*VAR_0->factor) >> 15;
    VAR_4 >>= 1;

    VAR_1[0] = FUNC_1(VAR_0->previous + VAR_0->prev2 -
                            ((VAR_0->prev2-VAR_4) >> 2));
    VAR_1[1] = FUNC_1(VAR_0->previous + VAR_4 +
                            ((VAR_0->prev2-VAR_4) >> 2));
    VAR_0->prev2 = VAR_0->previous;
    VAR_0->previous = VAR_4;
}
