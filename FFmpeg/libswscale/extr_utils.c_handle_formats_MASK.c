
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dstXYZ; scalar_t__ srcXYZ; int dstFormat; int srcFormat; int dst0Alpha; int src0Alpha; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(SwsContext *VAR_0)
{
    VAR_0->src0Alpha |= FUNC_1(&VAR_0->srcFormat);
    VAR_0->dst0Alpha |= FUNC_1(&VAR_0->dstFormat);
    VAR_0->srcXYZ |= FUNC_2(&VAR_0->srcFormat);
    VAR_0->dstXYZ |= FUNC_2(&VAR_0->dstFormat);
    if (VAR_0->srcXYZ || VAR_0->dstXYZ)
        FUNC_0(VAR_0);
}
