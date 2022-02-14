
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* parentNode; } ;
struct TYPE_5__ {TYPE_2__* childNode; } ;
typedef TYPE_1__ MultiUnaryNode ;
typedef TYPE_2__ MultiNode ;



void
FUNC_0(MultiUnaryNode *VAR_0, MultiNode *VAR_1)
{
 VAR_0->childNode = VAR_1;
 VAR_1->parentNode = (MultiNode *) VAR_0;
}
