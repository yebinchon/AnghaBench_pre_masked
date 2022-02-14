
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int userinfo ;
struct TYPE_4__ {int client; } ;
typedef TYPE_1__ gentity_t ;
typedef int arg ;
struct TYPE_5__ {int clients; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*,int) ;

void FUNC_8( gentity_t *VAR_3 ) {
 char VAR_4[VAR_0];
 char VAR_5[VAR_1];
 int VAR_6;
 int VAR_7 = VAR_3->client - VAR_2.clients;

 if ( FUNC_3() != 2 ) {
  return;
 }
 FUNC_4( 1, VAR_5, sizeof( VAR_5 ) );
 VAR_6 = FUNC_2( VAR_5 );

 FUNC_5(VAR_7, VAR_4, sizeof(VAR_4));
 FUNC_1(VAR_4, "teamtask", FUNC_7("%d", VAR_6));
 FUNC_6(VAR_7, VAR_4);
 FUNC_0(VAR_7);
}
