
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ connected; } ;
struct TYPE_8__ {TYPE_1__ pers; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {int maxclients; TYPE_4__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3( void ) {
 int VAR_3;

 FUNC_1( "session", FUNC_2("%i", VAR_1.integer) );

 for ( VAR_3 = 0 ; VAR_3 < VAR_2.maxclients ; VAR_3++ ) {
  if ( VAR_2.clients[VAR_3].pers.connected == VAR_0 ) {
   FUNC_0( &VAR_2.clients[VAR_3] );
  }
 }
}
