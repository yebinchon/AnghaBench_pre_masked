
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* warmup; } ;
struct TYPE_3__ {scalar_t__ gametype; char redflag; char blueflag; char flagStatus; void* levelStartTime; void* scores2; void* scores1; } ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (char*) ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;

void FUNC_2( void ) {
 const char *VAR_9;

 VAR_8.scores1 = FUNC_1( FUNC_0( VAR_2 ) );
 VAR_8.scores2 = FUNC_1( FUNC_0( VAR_3 ) );
 VAR_8.levelStartTime = FUNC_1( FUNC_0( VAR_1 ) );
 if( VAR_8.gametype == VAR_6 ) {
  VAR_9 = FUNC_0( VAR_0 );
  VAR_8.redflag = VAR_9[0] - '0';
  VAR_8.blueflag = VAR_9[1] - '0';
 }






 VAR_7.warmup = FUNC_1( FUNC_0( VAR_4 ) );
}
