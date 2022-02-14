
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_4__ {scalar_t__ ignoreKeysTime; int phase; scalar_t__ starttime; int menu; } ;
struct TYPE_3__ {scalar_t__ realtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static sfxHandle_t FUNC_2( int VAR_5 ) {
 if ( VAR_4.realtime < VAR_3.ignoreKeysTime ) {
  return 0;
 }

 if( VAR_3.phase == 1 ) {
  FUNC_1( VAR_0, "abort_podium\n" );
  VAR_3.phase = 2;
  VAR_3.starttime = VAR_4.realtime;
  VAR_3.ignoreKeysTime = VAR_4.realtime + 250;
  return 0;
 }

 if( VAR_3.phase == 2 ) {
  VAR_3.phase = 3;
  VAR_3.starttime = VAR_4.realtime;
  VAR_3.ignoreKeysTime = VAR_4.realtime + 250;
  return 0;
 }

 if( VAR_5 == VAR_1 || VAR_5 == VAR_2 ) {
  return 0;
 }

 return FUNC_0( &VAR_3.menu, VAR_5 );
}
