
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bitstream_bpp; scalar_t__ decorrelate; } ;
typedef TYPE_1__ HYuvContext ;


 int FUNC_0 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_1(HYuvContext *VAR_0, int VAR_1)
{
    if (VAR_0->decorrelate) {
        if (VAR_0->bitstream_bpp == 24)
            FUNC_0(VAR_0, VAR_1, 1, 0);
        else
            FUNC_0(VAR_0, VAR_1, 1, 1);
    } else {
        if (VAR_0->bitstream_bpp == 24)
            FUNC_0(VAR_0, VAR_1, 0, 0);
        else
            FUNC_0(VAR_0, VAR_1, 0, 1);
    }
}
