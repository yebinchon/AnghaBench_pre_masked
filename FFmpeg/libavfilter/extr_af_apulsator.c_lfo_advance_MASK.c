
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int phase; unsigned int freq; unsigned int srate; } ;
typedef TYPE_1__ SimpleLFO ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(SimpleLFO *VAR_0, unsigned VAR_1)
{
    VAR_0->phase = FUNC_0(VAR_0->phase + VAR_1 * VAR_0->freq / VAR_0->srate);
    if (VAR_0->phase >= 1)
        VAR_0->phase = FUNC_1(VAR_0->phase, 1);
}
