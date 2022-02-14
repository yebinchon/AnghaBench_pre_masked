
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int message ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {int curvalue; TYPE_1__ generic; } ;
typedef TYPE_2__ menulist_s ;
struct TYPE_6__ {int selectedBot; scalar_t__ gametype; int * botNames; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5( void *VAR_9, int VAR_10 ) {
 int VAR_11;
 int VAR_12;
 char VAR_13[256];

 if (VAR_10 != VAR_5)
  return;

 VAR_11 = ((menulist_s *)VAR_9)->generic.id;
 VAR_12 = ((menulist_s *)VAR_9)->curvalue;

 if( VAR_11 == VAR_2 ) {
  VAR_8.selectedBot = VAR_12;
  if( VAR_8.gametype == VAR_1 ) {
   FUNC_2( VAR_3 );
  }
  else {
   FUNC_2( VAR_4 );
  }
  return;
 }

 if( VAR_11 == VAR_3 ) {
  FUNC_0( VAR_13, sizeof(VAR_13), VAR_6[VAR_12], VAR_8.botNames[VAR_8.selectedBot] );
 }
 else {
  FUNC_0( VAR_13, sizeof(VAR_13), VAR_7[VAR_12], VAR_8.botNames[VAR_8.selectedBot] );
 }

 FUNC_3( VAR_0, FUNC_4( "say_team \"%s\"\n", VAR_13 ) );
 FUNC_1();
}
