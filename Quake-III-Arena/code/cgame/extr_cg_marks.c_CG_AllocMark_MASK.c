
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int time; struct TYPE_7__* nextMark; struct TYPE_7__* prevMark; } ;
typedef TYPE_1__ markPoly_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

markPoly_t *FUNC_2( void ) {
 markPoly_t *VAR_2;
 int VAR_3;

 if ( !VAR_1 ) {


  VAR_3 = VAR_0.prevMark->time;
  while (VAR_0.prevMark && VAR_3 == VAR_0.prevMark->time) {
   FUNC_0( VAR_0.prevMark );
  }
 }

 VAR_2 = VAR_1;
 VAR_1 = VAR_1->nextMark;

 FUNC_1( VAR_2, 0, sizeof( *VAR_2 ) );


 VAR_2->nextMark = VAR_0.nextMark;
 VAR_2->prevMark = &VAR_0;
 VAR_0.nextMark->prevMark = VAR_2;
 VAR_0.nextMark = VAR_2;
 return VAR_2;
}
