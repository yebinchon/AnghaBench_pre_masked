
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_2__ menucommon_s ;
struct TYPE_4__ {size_t curvalue; } ;
struct TYPE_6__ {TYPE_1__ list; int * fs_gameList; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3( void *VAR_3, int VAR_4 ) {
 if( VAR_4 != VAR_1 ) {
  return;
 }

 switch ( ((menucommon_s*)VAR_3)->id ) {
 case 128:
  FUNC_2( "fs_game", VAR_2.fs_gameList[VAR_2.list.curvalue] );
  FUNC_1( VAR_0, "vid_restart;" );
  FUNC_0();
  break;

 case 129:
  FUNC_0();
  break;
 }
}
