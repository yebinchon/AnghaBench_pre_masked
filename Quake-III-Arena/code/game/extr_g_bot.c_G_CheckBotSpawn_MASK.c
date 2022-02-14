
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int userinfo ;
struct TYPE_6__ {scalar_t__ spawnTime; int clientNum; } ;
struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {scalar_t__ time; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5( void ) {
 int VAR_6;
 char VAR_7[VAR_2];

 FUNC_1();

 for( VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ ) {
  if( !VAR_3[VAR_6].spawnTime ) {
   continue;
  }
  if ( VAR_3[VAR_6].spawnTime > VAR_5.time ) {
   continue;
  }
  FUNC_0( VAR_3[VAR_6].clientNum );
  VAR_3[VAR_6].spawnTime = 0;

  if( VAR_4.integer == VAR_1 ) {
   FUNC_4( VAR_3[VAR_6].clientNum, VAR_7, sizeof(VAR_7) );
   FUNC_3( FUNC_2 (VAR_7, "model") );
  }
 }
}
