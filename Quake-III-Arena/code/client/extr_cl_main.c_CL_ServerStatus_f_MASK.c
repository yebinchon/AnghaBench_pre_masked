
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* pending; void* print; int address; } ;
typedef TYPE_1__ serverStatus_t ;
typedef int netadr_t ;
struct TYPE_7__ {scalar_t__ demoplaying; } ;
struct TYPE_6__ {scalar_t__ state; char* servername; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (char*,int *) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 void* VAR_4 ;

void FUNC_7(void) {
 netadr_t VAR_5;
 char *VAR_6;
 serverStatus_t *VAR_7;

 FUNC_3( &VAR_5, 0, sizeof(netadr_t) );

 if ( FUNC_1() != 2 ) {
  if ( VAR_3.state != VAR_0 || VAR_2.demoplaying ) {
   FUNC_4 ("Not connected to a server.\n");
   FUNC_4( "Usage: serverstatus [server]\n");
   return;
  }
  VAR_6 = VAR_3.servername;
 }
 else {
  VAR_6 = FUNC_2(1);
 }

 if ( !FUNC_6( VAR_6, &VAR_5 ) ) {
  return;
 }

 FUNC_5( VAR_1, VAR_5, "getstatus" );

 VAR_7 = FUNC_0( VAR_5 );
 VAR_7->address = VAR_5;
 VAR_7->print = VAR_4;
 VAR_7->pending = VAR_4;
}
