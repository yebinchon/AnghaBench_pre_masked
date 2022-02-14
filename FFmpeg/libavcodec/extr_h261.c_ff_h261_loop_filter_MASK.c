
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int mtype; } ;
struct TYPE_4__ {int linesize; int uvlinesize; int ** dest; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ H261Context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const) ;

void FUNC_2(MpegEncContext *VAR_0)
{
    H261Context *VAR_1 = (H261Context *)VAR_0;
    const int VAR_2 = VAR_0->linesize;
    const int VAR_3 = VAR_0->uvlinesize;
    uint8_t *VAR_4 = VAR_0->dest[0];
    uint8_t *VAR_5 = VAR_0->dest[1];
    uint8_t *VAR_6 = VAR_0->dest[2];

    if (!(FUNC_0(VAR_1->mtype)))
        return;

    FUNC_1(VAR_4, VAR_2);
    FUNC_1(VAR_4 + 8, VAR_2);
    FUNC_1(VAR_4 + 8 * VAR_2, VAR_2);
    FUNC_1(VAR_4 + 8 * VAR_2 + 8, VAR_2);
    FUNC_1(VAR_5, VAR_3);
    FUNC_1(VAR_6, VAR_3);
}
