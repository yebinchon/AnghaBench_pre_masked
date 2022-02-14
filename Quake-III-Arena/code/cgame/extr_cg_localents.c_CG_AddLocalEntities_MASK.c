
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ endTime; int leType; struct TYPE_17__* prev; } ;
typedef TYPE_1__ localEntity_t ;
struct TYPE_18__ {scalar_t__ time; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 TYPE_3__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_14( void ) {
 localEntity_t *VAR_2, *VAR_3;



 VAR_2 = VAR_1.prev;
 for ( ; VAR_2 != &VAR_1 ; VAR_2 = VAR_3 ) {


  VAR_3 = VAR_2->prev;

  if ( VAR_0.time >= VAR_2->endTime ) {
   FUNC_13( VAR_2 );
   continue;
  }
  switch ( VAR_2->leType ) {
  default:
   FUNC_12( "Bad leType: %i", VAR_2->leType );
   break;

  case 133:
   break;

  case 128:
   FUNC_11( VAR_2 );
   break;

  case 140:
   FUNC_0( VAR_2 );
   break;

  case 137:
   FUNC_3( VAR_2 );
   break;

  case 132:
   FUNC_7( VAR_2 );
   break;

  case 139:
   FUNC_1( VAR_2 );
   break;

  case 138:
   FUNC_2( VAR_2 );
   break;

  case 131:
   FUNC_9( VAR_2 );
   break;

  case 130:
   FUNC_10( VAR_2 );
   break;
  }
 }
}
