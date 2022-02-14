
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int info ;
struct TYPE_2__ {size_t numBots; int* botClientNums; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_4;
 int VAR_5;
 int VAR_6;
 char VAR_7[VAR_2];

 FUNC_2( VAR_1, VAR_7, sizeof(VAR_7) );
 VAR_4 = FUNC_1( FUNC_0( VAR_7, "sv_maxclients" ) );
 VAR_3.numBots = 0;

 for( VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ ) {
  FUNC_2( VAR_0 + VAR_6, VAR_7, VAR_2 );

  VAR_5 = FUNC_1( FUNC_0( VAR_7, "skill" ) );
  if( !VAR_5 ) {
   continue;
  }

  VAR_3.botClientNums[VAR_3.numBots] = VAR_6;
  VAR_3.numBots++;
 }
}
