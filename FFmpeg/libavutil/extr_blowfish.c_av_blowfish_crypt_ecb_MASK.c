
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * p; } ;
typedef TYPE_1__ AVBlowfish ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(AVBlowfish *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3,
                           int VAR_4)
{
    uint32_t VAR_5, VAR_6;
    int VAR_7;

    VAR_5 = *VAR_2;
    VAR_6 = *VAR_3;

    if (VAR_4) {
        VAR_5 ^= VAR_1->p[VAR_0 + 1];
        for (VAR_7 = VAR_0; VAR_7 > 0; VAR_7-=2) {
            FUNC_0(VAR_5, VAR_6, VAR_1->p[VAR_7 ]);
            FUNC_0(VAR_6, VAR_5, VAR_1->p[VAR_7-1]);
        }

        VAR_6 ^= VAR_1->p[0];
    } else {
        VAR_5 ^= VAR_1->p[0];
        for (VAR_7 = 1; VAR_7 < VAR_0+1; VAR_7+=2){
            FUNC_0(VAR_5, VAR_6, VAR_1->p[VAR_7 ]);
            FUNC_0(VAR_6, VAR_5, VAR_1->p[VAR_7+1]);
        }

        VAR_6 ^= VAR_1->p[VAR_0 + 1];
    }

    *VAR_2 = VAR_6;
    *VAR_3 = VAR_5;
}
