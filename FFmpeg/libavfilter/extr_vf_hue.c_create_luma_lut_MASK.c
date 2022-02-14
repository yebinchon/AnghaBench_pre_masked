
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float brightness; int * lut_l16; int * lut_l; } ;
typedef TYPE_1__ HueContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(HueContext *VAR_0)
{
    const float VAR_1 = VAR_0->brightness;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
        VAR_0->lut_l[VAR_2] = FUNC_0(VAR_2 + VAR_1 * 25.5);
    }
    for (VAR_2 = 0; VAR_2 < 65536; VAR_2++) {
        VAR_0->lut_l16[VAR_2] = FUNC_1(VAR_2 + VAR_1 * 102.4, 10);
    }
}
