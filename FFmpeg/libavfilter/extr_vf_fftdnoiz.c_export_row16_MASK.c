
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {float re; } ;
typedef TYPE_1__ FFTComplex ;


 int FUNC_0 (float,int) ;

__attribute__((used)) static void FUNC_1(FFTComplex *VAR_0, uint8_t *VAR_1, int VAR_2, float VAR_3, int VAR_4)
{
    uint16_t *VAR_5 = (uint16_t *)VAR_1;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
        VAR_5[VAR_6] = FUNC_0(VAR_0[VAR_6].re * VAR_3 + 0.5f, VAR_4);
}
