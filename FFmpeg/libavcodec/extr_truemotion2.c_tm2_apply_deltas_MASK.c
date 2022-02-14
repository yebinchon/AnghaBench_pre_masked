
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* D; } ;
typedef TYPE_1__ TM2Context ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(TM2Context *VAR_0, int* VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
    unsigned VAR_5, VAR_6;
    int VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < 4; VAR_8++){
        VAR_5 = VAR_0->D[VAR_8];
        for (VAR_7 = 0; VAR_7 < 4; VAR_7++){
            VAR_6 = VAR_3[VAR_7 + VAR_8 * 4];
            VAR_5 += VAR_6;
            VAR_4[VAR_7] += VAR_5;
            VAR_1[VAR_7] = FUNC_0(VAR_4[VAR_7]);
        }
        VAR_1 += VAR_2;
        VAR_0->D[VAR_8] = VAR_5;
    }
}
