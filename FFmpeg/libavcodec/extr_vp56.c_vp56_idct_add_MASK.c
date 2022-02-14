
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_4__ {int (* idct_dc_add ) (int *,int ,int *) ;int (* idct_add ) (int *,int ,int *) ;} ;
struct TYPE_5__ {TYPE_1__ vp3dsp; } ;
typedef TYPE_2__ VP56Context ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_3(VP56Context *VAR_0, uint8_t * VAR_1, ptrdiff_t VAR_2, int16_t *VAR_3, int VAR_4)
{
    if (VAR_4 > 10)
        VAR_0->vp3dsp.idct_add(VAR_1, VAR_2, VAR_3);
    else if (VAR_4 > 1)
        FUNC_0(VAR_1, VAR_2, VAR_3);
    else
        VAR_0->vp3dsp.idct_dc_add(VAR_1, VAR_2, VAR_3);
}
