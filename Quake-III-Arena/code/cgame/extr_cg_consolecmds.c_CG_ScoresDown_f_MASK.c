
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scoresRequestTime; scalar_t__ time; void* showScores; scalar_t__ numScores; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2( void ) {




 if ( VAR_0.scoresRequestTime + 2000 < VAR_0.time ) {


  VAR_0.scoresRequestTime = VAR_0.time;
  FUNC_1( "score" );



  if ( !VAR_0.showScores ) {
   VAR_0.showScores = VAR_1;
   VAR_0.numScores = 0;
  }
 } else {


  VAR_0.showScores = VAR_1;
 }
}
