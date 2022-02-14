
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msmpeg4_version; int bit_rate; int avctx; scalar_t__ flipflop_rounding; int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(MpegEncContext * VAR_1, int VAR_2)
{
    int VAR_3= VAR_2*8 - FUNC_3(&VAR_1->gb);
    int VAR_4= VAR_1->msmpeg4_version>=3 ? 17 : 16;

    if(VAR_3>=VAR_4 && VAR_3<VAR_4+8)
    {
        FUNC_4(&VAR_1->gb, 5);
        VAR_1->bit_rate= FUNC_1(&VAR_1->gb, 11)*1024;
        if(VAR_1->msmpeg4_version>=3)
            VAR_1->flipflop_rounding= FUNC_2(&VAR_1->gb);
        else
            VAR_1->flipflop_rounding= 0;
    }
    else if(VAR_3<VAR_4+8)
    {
        VAR_1->flipflop_rounding= 0;
        if(VAR_1->msmpeg4_version != 2)
            FUNC_0(VAR_1->avctx, VAR_0, "ext header missing, %d left\n", VAR_3);
    }
    else
    {
        FUNC_0(VAR_1->avctx, VAR_0, "I-frame too long, ignoring ext header\n");
    }

    return 0;
}
