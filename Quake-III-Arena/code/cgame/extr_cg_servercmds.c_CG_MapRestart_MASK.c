
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ warmup; scalar_t__* time; int mapRestart; int intermissionStarted; scalar_t__ timelimitWarnings; scalar_t__ fraglimitWarnings; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__* string; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_8__ {int countFightSound; } ;
struct TYPE_9__ {TYPE_1__ media; scalar_t__ voteTime; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_11( void ) {
 if ( VAR_5.integer ) {
  FUNC_4( "CG_MapRestart\n" );
 }

 FUNC_2();
 FUNC_3();
 FUNC_1 ();


 VAR_2.fraglimitWarnings = 0;

 VAR_2.timelimitWarnings = 0;

 VAR_2.intermissionStarted = VAR_8;

 VAR_7.voteTime = 0;

 VAR_2.mapRestart = VAR_9;

 FUNC_5();

 FUNC_7(VAR_9);




 if ( VAR_2.warmup == 0 ) {
  FUNC_8( VAR_7.media.countFightSound, VAR_0 );
  FUNC_0( "FIGHT!", 120, VAR_1*2 );
 }
 FUNC_6("cg_thirdPerson", "0");
}
