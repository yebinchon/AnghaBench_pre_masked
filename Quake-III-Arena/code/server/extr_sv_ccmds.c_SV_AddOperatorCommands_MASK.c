
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {scalar_t__ integer; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 scalar_t__ VAR_15 ;

void FUNC_1( void ) {
 static qboolean VAR_16;

 if ( VAR_16 ) {
  return;
 }
 VAR_16 = VAR_15;

 FUNC_0 ("heartbeat", VAR_4);
 FUNC_0 ("kick", VAR_6);
 FUNC_0 ("banUser", VAR_1);
 FUNC_0 ("banClient", VAR_0);
 FUNC_0 ("clientkick", VAR_5);
 FUNC_0 ("status", VAR_12);
 FUNC_0 ("serverinfo", VAR_11);
 FUNC_0 ("systeminfo", VAR_13);
 FUNC_0 ("dumpuser", VAR_3);
 FUNC_0 ("map_restart", VAR_8);
 FUNC_0 ("sectorlist", VAR_10);
 FUNC_0 ("map", VAR_9);

 FUNC_0 ("devmap", VAR_9);
 FUNC_0 ("spmap", VAR_9);
 FUNC_0 ("spdevmap", VAR_9);

 FUNC_0 ("killserver", VAR_7);
 if( VAR_14->integer ) {
  FUNC_0 ("say", VAR_2);
 }
}
