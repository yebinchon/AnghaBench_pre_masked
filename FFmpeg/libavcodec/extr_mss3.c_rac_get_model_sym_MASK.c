
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int num_syms; unsigned int* freqs; } ;
struct TYPE_7__ {unsigned int range; unsigned int low; } ;
typedef TYPE_1__ RangeCoder ;
typedef TYPE_2__ Model ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(RangeCoder *VAR_2, Model *VAR_3)
{
    int VAR_4;
    int VAR_5, VAR_6;
    unsigned VAR_7, VAR_8, VAR_9;

    VAR_7 = 0;
    VAR_8 = VAR_2->range;
    VAR_2->range >>= VAR_0;
    VAR_4 = 0;
    VAR_5 = VAR_3->num_syms >> 1;
    VAR_6 = VAR_3->num_syms;
    do {
        VAR_9 = VAR_3->freqs[VAR_5] * VAR_2->range;
        if (VAR_9 <= VAR_2->low) {
            VAR_4 = VAR_5;
            VAR_7 = VAR_9;
        } else {
            VAR_6 = VAR_5;
            VAR_8 = VAR_9;
        }
        VAR_5 = (VAR_6 + VAR_4) >> 1;
    } while (VAR_5 != VAR_4);
    VAR_2->low -= VAR_7;
    VAR_2->range = VAR_8 - VAR_7;
    if (VAR_2->range < VAR_1)
        FUNC_1(VAR_2);

    FUNC_0(VAR_3, VAR_4);

    return VAR_4;
}
