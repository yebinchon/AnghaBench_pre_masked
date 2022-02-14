
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int saturation; int hue; void* hue_cos; void* hue_sin; } ;
typedef TYPE_1__ HueContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(HueContext *VAR_0)
{





    VAR_0->hue_sin = FUNC_1(FUNC_2(VAR_0->hue) * (1 << 16) * VAR_0->saturation);
    VAR_0->hue_cos = FUNC_1(FUNC_0(VAR_0->hue) * (1 << 16) * VAR_0->saturation);
}
