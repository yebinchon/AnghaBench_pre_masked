
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vmInterpret_t ;
struct TYPE_6__ {char* stringData; int* stringOffsets; } ;
struct TYPE_10__ {int mapname; TYPE_1__ gameState; } ;
struct TYPE_9__ {int clientNum; int lastExecutedServerCommand; int serverMessageSequence; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {int (* EndRegistration ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,char*,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 char* FUNC_7 (char const*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_6 ;
 int FUNC_10 (int ,int ,int ,int ,int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_12 () ;

void FUNC_13( void ) {
 const char *VAR_13;
 const char *VAR_14;
 int VAR_15, VAR_16;
 vmInterpret_t VAR_17;

 VAR_15 = FUNC_9();


 FUNC_5();


 VAR_13 = VAR_8.gameState.stringData + VAR_8.gameState.stringOffsets[ VAR_4 ];
 VAR_14 = FUNC_7( VAR_13, "mapname" );
 FUNC_3( VAR_8.mapname, sizeof( VAR_8.mapname ), "maps/%s.bsp", VAR_14 );


 if ( VAR_9 != 0 ) {

  VAR_17 = VAR_6;
 }
 else {
  VAR_17 = FUNC_6( "vm_cgame" );
 }
 VAR_7 = FUNC_11( "cgame", VAR_3, VAR_17 );
 if ( !VAR_7 ) {
  FUNC_0( VAR_5, "VM_Create on cgame failed" );
 }
 VAR_11.state = VAR_0;




 FUNC_10( VAR_7, VAR_2, VAR_10.serverMessageSequence, VAR_10.lastExecutedServerCommand, VAR_10.clientNum );



 VAR_11.state = VAR_1;

 VAR_16 = FUNC_9();

 FUNC_1( "CL_InitCGame: %5.2f seconds\n", (VAR_16-VAR_15)/1000.0 );



 VAR_12.EndRegistration();


 if (!FUNC_8()) {
  FUNC_2();
 }


 FUNC_4 ();
}
