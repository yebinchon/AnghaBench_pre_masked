
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_1__ remoteAddress; } ;
struct TYPE_10__ {int lastPacketTime; TYPE_2__ netchan; } ;
typedef TYPE_3__ client_t ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int time; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int *,char*,char*) ;
 TYPE_5__* VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void FUNC_5( void ) {
 client_t *VAR_3;


 if ( !VAR_1->integer ) {
  FUNC_1( "Server is not running.\n" );
  return;
 }

 if ( FUNC_0() != 2 ) {
  FUNC_1 ("Usage: kicknum <client number>\n");
  return;
 }

 VAR_3 = FUNC_3();
 if ( !VAR_3 ) {
  return;
 }
 if( VAR_3->netchan.remoteAddress.type == VAR_0 ) {
  FUNC_4(((void*)0), "print \"%s\"", "Cannot kick host player\n");
  return;
 }

 FUNC_2( VAR_3, "was kicked" );
 VAR_3->lastPacketTime = VAR_2.time;
}
