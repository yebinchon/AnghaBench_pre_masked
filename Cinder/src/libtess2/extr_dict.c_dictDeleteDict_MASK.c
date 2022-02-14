
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nodePool; } ;
struct TYPE_6__ {int userData; int (* memfree ) (int ,TYPE_2__*) ;} ;
typedef TYPE_1__ TESSalloc ;
typedef TYPE_2__ Dict ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

void FUNC_2( TESSalloc* VAR_0, Dict *VAR_1 )
{
 FUNC_0( VAR_1->nodePool );
 VAR_0->memfree( VAR_0->userData, VAR_1 );
}
