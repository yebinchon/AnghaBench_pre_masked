
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; } ;
typedef TYPE_1__ client_t ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {TYPE_1__* clients; } ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static client_t *FUNC_4( void ) {
 client_t *VAR_3;
 int VAR_4;
 int VAR_5;
 char *VAR_6;


 if ( !VAR_0->integer ) {
  return ((void*)0);
 }

 if ( FUNC_0() < 2 ) {
  FUNC_2( "No player specified.\n" );
  return ((void*)0);
 }

 VAR_6 = FUNC_1(1);

 for (VAR_4 = 0; VAR_6[VAR_4]; VAR_4++) {
  if (VAR_6[VAR_4] < '0' || VAR_6[VAR_4] > '9') {
   FUNC_2( "Bad slot number: %s\n", VAR_6);
   return ((void*)0);
  }
 }
 VAR_5 = FUNC_3( VAR_6 );
 if ( VAR_5 < 0 || VAR_5 >= VAR_1->integer ) {
  FUNC_2( "Bad client slot: %i\n", VAR_5 );
  return ((void*)0);
 }

 VAR_3 = &VAR_2.clients[VAR_5];
 if ( !VAR_3->state ) {
  FUNC_2( "Client %i is not active\n", VAR_5 );
  return ((void*)0);
 }
 return VAR_3;

 return ((void*)0);
}
