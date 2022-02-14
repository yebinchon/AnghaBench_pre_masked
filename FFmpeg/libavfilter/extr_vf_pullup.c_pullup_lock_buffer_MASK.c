
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lock; } ;
typedef TYPE_1__ PullupBuffer ;



__attribute__((used)) static PullupBuffer *FUNC_0(PullupBuffer *VAR_0, int VAR_1)
{
    if (!VAR_0)
        return ((void*)0);

    if ((VAR_1 + 1) & 1)
        VAR_0->lock[0]++;
    if ((VAR_1 + 1) & 2)
        VAR_0->lock[1]++;

    return VAR_0;
}
