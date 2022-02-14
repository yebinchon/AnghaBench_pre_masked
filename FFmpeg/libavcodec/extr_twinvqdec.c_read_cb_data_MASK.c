
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_3__ {int* n_div; int* bits_main_spec_change; int *** bits_main_spec; } ;
typedef TYPE_1__ TwinVQContext ;
typedef int GetBitContext ;


 void* FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(TwinVQContext *VAR_0, GetBitContext *VAR_1,
                         uint8_t *VAR_2, enum TwinVQFrameType VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0->n_div[VAR_3]; VAR_4++) {
        int VAR_5 = (VAR_4 >= VAR_0->bits_main_spec_change[VAR_3]);

        *VAR_2++ = FUNC_0(VAR_1, VAR_0->bits_main_spec[0][VAR_3][VAR_5]);
        *VAR_2++ = FUNC_0(VAR_1, VAR_0->bits_main_spec[1][VAR_3][VAR_5]);
    }
}
