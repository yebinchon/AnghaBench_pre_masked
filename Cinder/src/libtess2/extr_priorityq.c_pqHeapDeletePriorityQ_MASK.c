
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* nodes; struct TYPE_9__* handles; } ;
struct TYPE_8__ {int userData; int (* memfree ) (int ,TYPE_2__*) ;} ;
typedef TYPE_1__ TESSalloc ;
typedef TYPE_2__ PriorityQHeap ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;

void FUNC_3( TESSalloc* VAR_0, PriorityQHeap *VAR_1 )
{
 VAR_0->memfree( VAR_0->userData, VAR_1->handles );
 VAR_0->memfree( VAR_0->userData, VAR_1->nodes );
 VAR_0->memfree( VAR_0->userData, VAR_1 );
}
