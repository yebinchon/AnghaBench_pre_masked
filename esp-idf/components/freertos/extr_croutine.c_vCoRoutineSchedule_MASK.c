
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uxIndex; int (* pxCoRoutineFunction ) (TYPE_1__*,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 size_t VAR_2 ;

void FUNC_5( void )
{

 FUNC_3();


 FUNC_2();


 while( FUNC_1( &( VAR_1[ VAR_2 ] ) ) )
 {
  if( VAR_2 == 0 )
  {

   return;
  }
  --VAR_2;
 }



 FUNC_0( VAR_0, &( VAR_1[ VAR_2 ] ) );


 ( VAR_0->pxCoRoutineFunction )( VAR_0, VAR_0->uxIndex );

 return;
}
