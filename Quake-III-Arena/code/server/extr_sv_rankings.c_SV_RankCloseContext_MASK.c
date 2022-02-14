
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ context; char* name; int final_status; int grank_status; int token; scalar_t__ player_id; scalar_t__ match; } ;
typedef TYPE_1__ ranked_player_t ;
typedef int GR_PLAYER_TOKEN ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_6( ranked_player_t* VAR_8 )
{
 if( VAR_8 == ((void*)0) )
 {

  if( VAR_6 == 0 )
  {
   return;
  }
  VAR_6 = 0;
  VAR_7 = 0;
 }
 else
 {

  if( VAR_3 == ((void*)0) )
  {
   return;
  }
  if( VAR_8->context == 0 )
  {
   return;
  }
  VAR_8->context = 0;
  VAR_8->match = 0;
  VAR_8->player_id = 0;
  FUNC_5( VAR_8->token, 0, sizeof(GR_PLAYER_TOKEN) );
  VAR_8->grank_status = VAR_8->final_status;
  VAR_8->final_status = VAR_1;
  VAR_8->name[0] = '\0';
 }

 FUNC_4( VAR_5 > 0 );
 VAR_5--;
 FUNC_0( "SV_RankCloseContext: s_rankings_contexts = %d\n",
  VAR_5 );

 if( VAR_5 == 0 )
 {
  FUNC_2( VAR_0 );

  if( VAR_3 != ((void*)0) )
  {
   FUNC_3( VAR_3 );
   VAR_3 = ((void*)0);
  }

  VAR_4 = VAR_2;
  FUNC_1( "sv_rankingsActive", "0" );
 }
}
