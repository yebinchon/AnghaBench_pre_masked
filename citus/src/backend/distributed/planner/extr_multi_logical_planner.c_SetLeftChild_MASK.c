
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* leftChildNode; } ;
struct TYPE_5__ {struct TYPE_5__* parentNode; } ;
typedef TYPE_1__ MultiNode ;
typedef TYPE_2__ MultiBinaryNode ;



void
FUNC_0(MultiBinaryNode *VAR_0, MultiNode *VAR_1)
{
 VAR_0->leftChildNode = VAR_1;
 VAR_1->parentNode = (MultiNode *) VAR_0;
}
