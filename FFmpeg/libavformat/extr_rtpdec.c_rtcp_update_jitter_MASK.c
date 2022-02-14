
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef void* int32_t ;
struct TYPE_3__ {int jitter; void* transit; } ;
typedef TYPE_1__ RTPStatistics ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(RTPStatistics *VAR_0, uint32_t VAR_1,
                               uint32_t VAR_2)
{

    uint32_t VAR_3 = VAR_2 - VAR_1;
    uint32_t VAR_4 = VAR_0->transit;
    int32_t VAR_5 = VAR_3 - VAR_4;




    VAR_5 = FUNC_0(VAR_5);
    VAR_0->transit = VAR_3;
    if (!VAR_4)
        return;
    VAR_0->jitter += VAR_5 - (int32_t) ((VAR_0->jitter + 8) >> 4);
}
