
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int block_align; int bit_rate; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;

    switch (VAR_0->block_align) {
    case 20:
    case 19:
    case 29:
    case 37: VAR_3 = VAR_0->block_align; break;
    default:
        if (VAR_0->bit_rate > 12200) VAR_3 = 20;
        else if (VAR_0->bit_rate > 7500 ) VAR_3 = 19;
        else if (VAR_0->bit_rate > 5750 ) VAR_3 = 29;
        else VAR_3 = 37;
    }

    return FUNC_0(VAR_3, VAR_2);
}
