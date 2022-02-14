
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int time; } ;
struct TYPE_6__ {int talkSound; } ;
struct TYPE_7__ {int* teamVoteTime; int * teamVoteNo; int * teamVoteYes; int * teamVoteString; TYPE_2__ media; scalar_t__* teamVoteModified; TYPE_1__* clientinfo; } ;
struct TYPE_5__ {scalar_t__ team; } ;


 int FUNC_0 (int ,int,char*,float) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (char*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(void) {
 char *VAR_7;
 int VAR_8, VAR_9;

 if ( VAR_5.clientinfo->team == VAR_2 )
  VAR_9 = 0;
 else if ( VAR_5.clientinfo->team == VAR_1 )
  VAR_9 = 1;
 else
  return;

 if ( !VAR_5.teamVoteTime[VAR_9] ) {
  return;
 }


 if ( VAR_5.teamVoteModified[VAR_9] ) {
  VAR_5.teamVoteModified[VAR_9] = VAR_6;
  FUNC_1( VAR_5.media.talkSound, VAR_0 );
 }

 VAR_8 = ( VAR_3 - ( VAR_4.time - VAR_5.teamVoteTime[VAR_9] ) ) / 1000;
 if ( VAR_8 < 0 ) {
  VAR_8 = 0;
 }
 VAR_7 = FUNC_2("TEAMVOTE(%i):%s yes:%i no:%i", VAR_8, VAR_5.teamVoteString[VAR_9],
       VAR_5.teamVoteYes[VAR_9], VAR_5.teamVoteNo[VAR_9] );
 FUNC_0( 0, 90, VAR_7, 1.0F );
}
