
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int baseBotNum; int * botnames; int * sortedBotNums; } ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,int ,int) ;
 char* FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_1;
 const char *VAR_2;

 for ( VAR_1 = 0; VAR_1 < 7; VAR_1++ ) {
  VAR_2 = FUNC_2( VAR_0.sortedBotNums[VAR_0.baseBotNum + VAR_1] );
  FUNC_1( VAR_0.botnames[VAR_1], FUNC_0( VAR_2, "name" ), sizeof(VAR_0.botnames[VAR_1]) );
 }

}
