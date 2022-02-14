
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int userData; int (* memfree ) (int ,TYPE_1__*) ;} ;
struct TYPE_6__ {int faceBucket; int vertexBucket; int edgeBucket; } ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESSalloc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;

void FUNC_2( TESSalloc* VAR_0, TESSmesh *VAR_1 )
{
 FUNC_0(VAR_1->edgeBucket);
 FUNC_0(VAR_1->vertexBucket);
 FUNC_0(VAR_1->faceBucket);

 VAR_0->memfree( VAR_0->userData, VAR_1 );
}
