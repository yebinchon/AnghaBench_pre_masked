
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* func ) (int ,int ,int,int) ;int* rets; int arg; int ctx; } ;
typedef TYPE_1__ ThreadContext ;


 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    ThreadContext *VAR_5 = VAR_0;
    int VAR_6 = VAR_5->func(VAR_5->ctx, VAR_5->arg, VAR_1, VAR_3);
    if (VAR_5->rets)
        VAR_5->rets[VAR_1] = VAR_6;
}
