
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; int gender; } ;
typedef TYPE_1__ voiceChatList_t ;
typedef int headModelName ;
typedef int filename ;
struct TYPE_8__ {char* headModelName; int gender; int headSkinName; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_10__ {TYPE_2__* clientinfo; } ;
struct TYPE_9__ {char* headmodel; size_t voiceChatNum; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_1__* VAR_7 ;

voiceChatList_t *FUNC_4( int VAR_8 ) {
 clientInfo_t *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 char VAR_15[VAR_3], VAR_16[VAR_3];

 if ( VAR_8 < 0 || VAR_8 >= VAR_1 ) {
  VAR_8 = 0;
 }
 VAR_9 = &VAR_5.clientinfo[ VAR_8 ];

 for ( VAR_13 = 0; VAR_13 < 2; VAR_13++ ) {
  if ( VAR_13 == 0 ) {
   if (VAR_9->headModelName[0] == '*') {
    FUNC_1( VAR_16, sizeof(VAR_16), "%s/%s", VAR_9->headModelName+1, VAR_9->headSkinName );
   }
   else {
    FUNC_1( VAR_16, sizeof(VAR_16), "%s/%s", VAR_9->headModelName, VAR_9->headSkinName );
   }
  }
  else {
   if (VAR_9->headModelName[0] == '*') {
    FUNC_1( VAR_16, sizeof(VAR_16), "%s", VAR_9->headModelName+1 );
   }
   else {
    FUNC_1( VAR_16, sizeof(VAR_16), "%s", VAR_9->headModelName );
   }
  }

  for ( VAR_11 = 0; VAR_11 < VAR_2; VAR_11++ ) {
   if (!FUNC_2(VAR_6[VAR_11].headmodel, VAR_16)) {
    break;
   }
  }
  if (VAR_11 < VAR_2) {
   return &VAR_7[VAR_6[VAR_11].voiceChatNum];
  }

  for ( VAR_11 = 0; VAR_11 < VAR_2; VAR_11++ ) {
   if (!FUNC_3(VAR_6[VAR_11].headmodel)) {
    FUNC_1(VAR_15, sizeof(VAR_15), "scripts/%s.vc", VAR_16);
    VAR_10 = FUNC_0(VAR_15);
    if (VAR_10 == -1)
     break;
    FUNC_1(VAR_6[VAR_11].headmodel, sizeof ( VAR_6[VAR_11].headmodel ),
       "%s", VAR_16);
    VAR_6[VAR_11].voiceChatNum = VAR_10;
    return &VAR_7[VAR_6[VAR_11].voiceChatNum];
   }
  }
 }
 VAR_14 = VAR_9->gender;
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {

  for ( VAR_11 = 0; VAR_11 < VAR_4; VAR_11++ ) {
   if (FUNC_3(VAR_7[VAR_11].name)) {
    if (VAR_7[VAR_11].gender == VAR_14) {

     for ( VAR_12 = 0; VAR_12 < VAR_2; VAR_12++ ) {
      if (!FUNC_3(VAR_6[VAR_12].headmodel)) {
       FUNC_1(VAR_6[VAR_12].headmodel, sizeof ( VAR_6[VAR_12].headmodel ),
         "%s", VAR_16);
       VAR_6[VAR_12].voiceChatNum = VAR_11;
       break;
      }
     }
     return &VAR_7[VAR_11];
    }
   }
  }

  if (VAR_14 == VAR_0)
   break;
  VAR_14 = VAR_0;
 }

 for ( VAR_12 = 0; VAR_12 < VAR_2; VAR_12++ ) {
  if (!FUNC_3(VAR_6[VAR_12].headmodel)) {
   FUNC_1(VAR_6[VAR_12].headmodel, sizeof ( VAR_6[VAR_12].headmodel ),
     "%s", VAR_16);
   VAR_6[VAR_12].voiceChatNum = 0;
   break;
  }
 }

 return &VAR_7[0];
}
