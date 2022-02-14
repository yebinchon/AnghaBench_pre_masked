
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int* cvector; int* vector; int filtval; } ;
typedef TYPE_1__ TSContext ;


 int FUNC_0 (int*,int*,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(TSContext *VAR_1)
{
    int16_t VAR_2[8];
    int VAR_3, VAR_4;

    for(VAR_3 = 0; VAR_3 < 8; VAR_3++){
        if(VAR_3 > 0){
            FUNC_0(VAR_2, VAR_1->cvector, VAR_3 * sizeof(*VAR_2));
            for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
                VAR_1->cvector[VAR_4] += (VAR_2[VAR_3 - VAR_4 - 1] * VAR_1->vector[VAR_3] + 0x4000) >> 15;
        }
        VAR_1->cvector[VAR_3] = (8 - VAR_1->vector[VAR_3]) >> 3;
    }
    for(VAR_3 = 0; VAR_3 < 8; VAR_3++)
        VAR_1->cvector[VAR_3] = (VAR_1->cvector[VAR_3] * VAR_0[VAR_3]) >> 15;

    VAR_1->filtval = VAR_1->vector[0];
}
