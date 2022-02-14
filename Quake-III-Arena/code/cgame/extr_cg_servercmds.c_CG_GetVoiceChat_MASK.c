
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numVoiceChats; TYPE_1__* voiceChats; } ;
typedef TYPE_2__ voiceChatList_t ;
typedef int sfxHandle_t ;
struct TYPE_4__ {int numSounds; char** chats; int * sounds; int id; } ;


 int FUNC_0 (char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

int FUNC_2( voiceChatList_t *VAR_2, const char *VAR_3, sfxHandle_t *VAR_4, char **VAR_5) {
 int VAR_6, VAR_7;

 for ( VAR_6 = 0; VAR_6 < VAR_2->numVoiceChats; VAR_6++ ) {
  if ( !FUNC_0( VAR_3, VAR_2->voiceChats[VAR_6].id ) ) {
   VAR_7 = FUNC_1() * VAR_2->voiceChats[VAR_6].numSounds;
   *VAR_4 = VAR_2->voiceChats[VAR_6].sounds[VAR_7];
   *VAR_5 = VAR_2->voiceChats[VAR_6].chats[VAR_7];
   return VAR_1;
  }
 }
 return VAR_0;
}
