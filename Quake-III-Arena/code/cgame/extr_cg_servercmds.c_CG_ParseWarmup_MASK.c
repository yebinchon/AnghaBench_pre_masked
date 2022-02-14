
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int warmupCount; int warmup; } ;
struct TYPE_4__ {int countPrepareSound; int countPrepareTeamSound; } ;
struct TYPE_5__ {scalar_t__ gametype; TYPE_1__ media; } ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char const*) ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3( void ) {
 const char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0( VAR_1 );

 VAR_7 = FUNC_1( VAR_6 );
 VAR_4.warmupCount = -1;

 if ( VAR_7 == 0 && VAR_4.warmup ) {

 } else if ( VAR_7 > 0 && VAR_4.warmup <= 0 ) {





  {
   FUNC_2( VAR_5.media.countPrepareSound, VAR_0 );
  }
 }

 VAR_4.warmup = VAR_7;
}
