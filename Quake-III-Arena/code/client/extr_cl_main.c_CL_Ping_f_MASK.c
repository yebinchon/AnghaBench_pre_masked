
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int adr; scalar_t__ time; int start; } ;
typedef TYPE_1__ ping_t ;
typedef int netadr_t ;
struct TYPE_5__ {int realtime; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (char*,int *) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_8 (int *,int *,int) ;

void FUNC_9( void ) {
 netadr_t VAR_2;
 ping_t* VAR_3;
 char* VAR_4;

 if ( FUNC_2() != 2 ) {
  FUNC_5( "usage: ping [server]\n");
  return;
 }

 FUNC_4( &VAR_2, 0, sizeof(netadr_t) );

 VAR_4 = FUNC_3(1);

 if ( !FUNC_7( VAR_4, &VAR_2 ) ) {
  return;
 }

 VAR_3 = FUNC_0();

 FUNC_8( &VAR_3->adr, &VAR_2, sizeof (netadr_t) );
 VAR_3->start = VAR_1.realtime;
 VAR_3->time = 0;

 FUNC_1(VAR_3->adr, ((void*)0), 0);

 FUNC_6( VAR_0, VAR_2, "getinfo xxx" );
}
