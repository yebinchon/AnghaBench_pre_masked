
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ litLengthSum; } ;
struct TYPE_7__ {int dictLimit; } ;
struct TYPE_6__ {int * dictMatchState; TYPE_1__ opt; scalar_t__ loadedDictEnd; TYPE_3__ window; int nextToUpdate3; int nextToUpdate; } ;
typedef TYPE_2__ ZSTD_matchState_t ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(ZSTD_matchState_t* VAR_0)
{
    FUNC_0(&VAR_0->window);

    VAR_0->nextToUpdate = VAR_0->window.dictLimit;
    VAR_0->nextToUpdate3 = VAR_0->window.dictLimit;
    VAR_0->loadedDictEnd = 0;
    VAR_0->opt.litLengthSum = 0;
    VAR_0->dictMatchState = ((void*)0);
}
