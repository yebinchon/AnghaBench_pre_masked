
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int js_subband_start; } ;
typedef TYPE_1__ COOKSubpacket ;
typedef int COOKContext ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(COOKContext *VAR_1,
                           COOKSubpacket *VAR_2,
                           int VAR_3,
                           float VAR_4, float VAR_5,
                           float *VAR_6,
                           float *VAR_7, float *VAR_8)
{
    int VAR_9, VAR_10;
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
        VAR_10 = ((VAR_2->js_subband_start + VAR_3) * VAR_0) + VAR_9;
        VAR_7[VAR_0 * VAR_3 + VAR_9] = VAR_4 * VAR_6[VAR_10];
        VAR_8[VAR_0 * VAR_3 + VAR_9] = VAR_5 * VAR_6[VAR_10];
    }
}
