
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int numScores; TYPE_2__* scores; void** teamScores; } ;
struct TYPE_7__ {TYPE_1__* clientinfo; } ;
struct TYPE_6__ {int client; int team; void* score; void* captures; void* perfect; void* assistCount; void* defendCount; void* guantletCount; void* excellentCount; void* impressiveCount; void* accuracy; void* scoreFlags; void* time; void* ping; } ;
struct TYPE_5__ {int powerups; int team; void* score; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_3, VAR_4;

 VAR_1.numScores = FUNC_2( FUNC_0( 1 ) );
 if ( VAR_1.numScores > VAR_0 ) {
  VAR_1.numScores = VAR_0;
 }

 VAR_1.teamScores[0] = FUNC_2( FUNC_0( 2 ) );
 VAR_1.teamScores[1] = FUNC_2( FUNC_0( 3 ) );

 FUNC_3( VAR_1.scores, 0, sizeof( VAR_1.scores ) );
 for ( VAR_3 = 0 ; VAR_3 < VAR_1.numScores ; VAR_3++ ) {

  VAR_1.scores[VAR_3].client = FUNC_2( FUNC_0( VAR_3 * 14 + 4 ) );
  VAR_1.scores[VAR_3].score = FUNC_2( FUNC_0( VAR_3 * 14 + 5 ) );
  VAR_1.scores[VAR_3].ping = FUNC_2( FUNC_0( VAR_3 * 14 + 6 ) );
  VAR_1.scores[VAR_3].time = FUNC_2( FUNC_0( VAR_3 * 14 + 7 ) );
  VAR_1.scores[VAR_3].scoreFlags = FUNC_2( FUNC_0( VAR_3 * 14 + 8 ) );
  VAR_4 = FUNC_2( FUNC_0( VAR_3 * 14 + 9 ) );
  VAR_1.scores[VAR_3].accuracy = FUNC_2(FUNC_0(VAR_3 * 14 + 10));
  VAR_1.scores[VAR_3].impressiveCount = FUNC_2(FUNC_0(VAR_3 * 14 + 11));
  VAR_1.scores[VAR_3].excellentCount = FUNC_2(FUNC_0(VAR_3 * 14 + 12));
  VAR_1.scores[VAR_3].guantletCount = FUNC_2(FUNC_0(VAR_3 * 14 + 13));
  VAR_1.scores[VAR_3].defendCount = FUNC_2(FUNC_0(VAR_3 * 14 + 14));
  VAR_1.scores[VAR_3].assistCount = FUNC_2(FUNC_0(VAR_3 * 14 + 15));
  VAR_1.scores[VAR_3].perfect = FUNC_2(FUNC_0(VAR_3 * 14 + 16));
  VAR_1.scores[VAR_3].captures = FUNC_2(FUNC_0(VAR_3 * 14 + 17));

  if ( VAR_1.scores[VAR_3].client < 0 || VAR_1.scores[VAR_3].client >= VAR_0 ) {
   VAR_1.scores[VAR_3].client = 0;
  }
  VAR_2.clientinfo[ VAR_1.scores[VAR_3].client ].score = VAR_1.scores[VAR_3].score;
  VAR_2.clientinfo[ VAR_1.scores[VAR_3].client ].powerups = VAR_4;

  VAR_1.scores[VAR_3].team = VAR_2.clientinfo[VAR_1.scores[VAR_3].client].team;
 }




}
