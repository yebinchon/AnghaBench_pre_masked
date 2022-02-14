
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ timeouts; scalar_t__ dmaErrors; scalar_t__ berrs; scalar_t__ irqs; scalar_t__ ioctls; scalar_t__ writes; scalar_t__ reads; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
        VAR_0.reads = 0;
        VAR_0.writes = 0;
        VAR_0.ioctls = 0;
        VAR_0.irqs = 0;
        VAR_0.berrs = 0;
        VAR_0.dmaErrors = 0;
        VAR_0.timeouts = 0;
}
