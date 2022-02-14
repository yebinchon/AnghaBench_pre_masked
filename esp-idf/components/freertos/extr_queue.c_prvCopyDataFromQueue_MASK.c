
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_4__ {scalar_t__ pcReadFrom; } ;
struct TYPE_5__ {scalar_t__ uxItemSize; scalar_t__ pcTail; scalar_t__ pcHead; TYPE_1__ u; } ;
typedef TYPE_2__ Queue_t ;


 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2( Queue_t * const VAR_0, void * const VAR_1 )
{
 if( VAR_0->uxItemSize != ( UBaseType_t ) 0 )
 {
  VAR_0->u.pcReadFrom += VAR_0->uxItemSize;
  if( VAR_0->u.pcReadFrom >= VAR_0->pcTail )
  {
   VAR_0->u.pcReadFrom = VAR_0->pcHead;
  }
  else
  {
   FUNC_1();
  }
  ( void ) FUNC_0( ( void * ) VAR_1, ( void * ) VAR_0->u.pcReadFrom, ( size_t ) VAR_0->uxItemSize );
 }
}
