
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nodePool; } ;
struct TYPE_10__ {TYPE_2__* next; TYPE_1__* prev; } ;
struct TYPE_9__ {TYPE_1__* prev; } ;
struct TYPE_8__ {TYPE_2__* next; } ;
typedef TYPE_3__ DictNode ;
typedef TYPE_4__ Dict ;


 int FUNC_0 (int ,TYPE_3__*) ;

void FUNC_1( Dict *VAR_0, DictNode *VAR_1 )
{
 VAR_1->next->prev = VAR_1->prev;
 VAR_1->prev->next = VAR_1->next;
 FUNC_0( VAR_0->nodePool, VAR_1 );
}
