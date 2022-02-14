
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t* abystate; int ux; size_t uy; } ;
typedef TYPE_1__* PRC4Ext ;
typedef size_t* PBYTE ;
typedef size_t BYTE ;



UINT FUNC_0(PRC4Ext VAR_0)
{
    UINT VAR_1;
    UINT VAR_2;
    UINT VAR_3, VAR_4;
    PBYTE VAR_5;

    VAR_5 = VAR_0->abystate;
    VAR_1 = (VAR_0->ux + 1) & 0xff;
    VAR_3 = VAR_5[VAR_1];
    VAR_2 = (VAR_3 + VAR_0->uy) & 0xff;
    VAR_4 = VAR_5[VAR_2];
    VAR_0->ux = VAR_1;
    VAR_0->uy = VAR_2;
    VAR_5[VAR_2] = (BYTE)VAR_3;
    VAR_5[VAR_1] = (BYTE)VAR_4;

    return VAR_5[(VAR_3 + VAR_4) & 0xff];
}
