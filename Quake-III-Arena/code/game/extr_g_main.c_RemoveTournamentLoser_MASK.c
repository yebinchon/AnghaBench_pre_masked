
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numPlayingClients; int* sortedClients; TYPE_2__* clients; } ;
struct TYPE_4__ {scalar_t__ connected; } ;
struct TYPE_5__ {TYPE_1__ pers; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int * VAR_1 ;
 TYPE_3__ VAR_2 ;

void FUNC_1( void ) {
 int VAR_3;

 if ( VAR_2.numPlayingClients != 2 ) {
  return;
 }

 VAR_3 = VAR_2.sortedClients[1];

 if ( VAR_2.clients[ VAR_3 ].pers.connected != VAR_0 ) {
  return;
 }


 FUNC_0( &VAR_1[ VAR_3 ], "s" );
}
