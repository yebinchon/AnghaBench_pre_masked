
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int heap; int ** order; } ;
typedef TYPE_1__ PriorityQ ;
typedef int PQkey ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

PQkey FUNC_3( PriorityQ *VAR_0 )
{
 PQkey VAR_1, VAR_2;

 if( VAR_0->size == 0 ) {
  return FUNC_2( VAR_0->heap );
 }
 VAR_1 = *(VAR_0->order[VAR_0->size-1]);
 if( ! FUNC_1( VAR_0->heap )) {
  VAR_2 = FUNC_2( VAR_0->heap );
  if( FUNC_0( VAR_2, VAR_1 )) {
   return VAR_2;
  }
 }
 return VAR_1;
}
