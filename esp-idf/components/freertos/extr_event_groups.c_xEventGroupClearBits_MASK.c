
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uxEventBits; int eventGroupMux; } ;
typedef TYPE_1__ EventGroup_t ;
typedef int EventGroupHandle_t ;
typedef int EventBits_t ;


 int FUNC_0 (int) ;
 int const VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int const) ;

EventBits_t FUNC_4( EventGroupHandle_t VAR_1, const EventBits_t VAR_2 )
{
EventGroup_t *VAR_3 = ( EventGroup_t * ) VAR_1;
EventBits_t VAR_4;



 FUNC_0( VAR_1 );
 FUNC_0( ( VAR_2 & VAR_0 ) == 0 );

 FUNC_1( &VAR_3->eventGroupMux );
 {
  FUNC_3( VAR_1, VAR_2 );



  VAR_4 = VAR_3->uxEventBits;


  VAR_3->uxEventBits &= ~VAR_2;
 }
 FUNC_2( &VAR_3->eventGroupMux );

 return VAR_4;
}
