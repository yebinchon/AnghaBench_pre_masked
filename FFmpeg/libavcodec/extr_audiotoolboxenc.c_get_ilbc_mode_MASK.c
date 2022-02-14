
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block_align; int bit_rate; } ;
typedef TYPE_1__ AVCodecContext ;



__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_0)
{
    if (VAR_0->block_align == 38)
        return 20;
    else if (VAR_0->block_align == 50)
        return 30;
    else if (VAR_0->bit_rate > 0)
        return VAR_0->bit_rate <= 14000 ? 30 : 20;
    else
        return 30;
}
