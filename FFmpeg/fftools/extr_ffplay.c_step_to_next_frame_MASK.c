
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int step; scalar_t__ paused; } ;
typedef TYPE_1__ VideoState ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(VideoState *VAR_0)
{

    if (VAR_0->paused)
        FUNC_0(VAR_0);
    VAR_0->step = 1;
}
