
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* keys; struct TYPE_10__* order; int * heap; } ;
struct TYPE_9__ {int userData; int (* memfree ) (int ,TYPE_2__*) ;} ;
typedef TYPE_1__ TESSalloc ;
typedef TYPE_2__ PriorityQ ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;

void FUNC_5( TESSalloc* VAR_0, PriorityQ *VAR_1 )
{
 FUNC_0(VAR_1 != ((void*)0));
 if (VAR_1->heap != ((void*)0)) FUNC_1( VAR_0, VAR_1->heap );
 if (VAR_1->order != ((void*)0)) VAR_0->memfree( VAR_0->userData, VAR_1->order );
 if (VAR_1->keys != ((void*)0)) VAR_0->memfree( VAR_0->userData, VAR_1->keys );
 VAR_0->memfree( VAR_0->userData, VAR_1 );
}
