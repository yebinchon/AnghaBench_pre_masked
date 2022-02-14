
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int sw_format; } ;
struct TYPE_8__ {int RowPitch; scalar_t__ pData; } ;
struct TYPE_7__ {int Height; } ;
typedef TYPE_1__ D3D11_TEXTURE2D_DESC ;
typedef TYPE_2__ D3D11_MAPPED_SUBRESOURCE ;
typedef TYPE_3__ AVHWFramesContext ;


 int FUNC_0 (int **,int ,int ,int *,int*) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0[4], int VAR_1[4],
                              AVHWFramesContext *VAR_2,
                              D3D11_TEXTURE2D_DESC *VAR_3,
                              D3D11_MAPPED_SUBRESOURCE *VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
        VAR_1[VAR_5] = VAR_4->RowPitch;

    FUNC_0(VAR_0, VAR_2->sw_format, VAR_3->Height,
                           (uint8_t*)VAR_4->pData, VAR_1);
}
