
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {double tempo; int window; int nfrag; } ;
struct TYPE_8__ {scalar_t__ nsamples; scalar_t__* position; } ;
typedef TYPE_1__ AudioFragment ;
typedef TYPE_2__ ATempoContext ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(ATempoContext *VAR_0)
{
    const double VAR_1 = VAR_0->tempo * (double)(VAR_0->window / 2);

    const AudioFragment *VAR_2;
    AudioFragment *VAR_3;

    VAR_0->nfrag++;
    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = FUNC_0(VAR_0);

    VAR_3->position[0] = VAR_2->position[0] + (int64_t)VAR_1;
    VAR_3->position[1] = VAR_2->position[1] + VAR_0->window / 2;
    VAR_3->nsamples = 0;
}
