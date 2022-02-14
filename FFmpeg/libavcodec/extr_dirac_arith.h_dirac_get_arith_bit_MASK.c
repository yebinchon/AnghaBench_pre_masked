
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* contexts; unsigned int low; int range; } ;
typedef TYPE_1__ DiracArith ;


 scalar_t__** VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_2(DiracArith *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_1->contexts[VAR_2];
    int VAR_4, VAR_5;
    unsigned VAR_6 = VAR_1->low;
    int VAR_7 = VAR_1->range;

    VAR_4 = (VAR_1->range * VAR_3) >> 16;
    VAR_5 = (VAR_6 >> 16) >= VAR_4;
    if (VAR_5) {
        VAR_6 -= VAR_4 << 16;
        VAR_7 -= VAR_4;
    } else {
        VAR_7 = VAR_4;
    }


    VAR_1->contexts[VAR_2] += VAR_0[VAR_3>>8][VAR_5];
    VAR_1->low = VAR_6;
    VAR_1->range = VAR_7;

    FUNC_1(VAR_1);
    FUNC_0(VAR_1);
    return VAR_5;
}
