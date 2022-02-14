
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int trace_t ;
typedef int trace ;
struct TYPE_12__ {int numtouch; size_t* touchents; } ;
typedef TYPE_2__ pmove_t ;
struct TYPE_11__ {int svFlags; } ;
struct TYPE_13__ {int (* touch ) (TYPE_3__*,TYPE_3__*,int *) ;TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int *) ;

void FUNC_3( gentity_t *VAR_2, pmove_t *VAR_3 ) {
 int VAR_4, VAR_5;
 trace_t VAR_6;
 gentity_t *VAR_7;

 FUNC_0( &VAR_6, 0, sizeof( VAR_6 ) );
 for (VAR_4=0 ; VAR_4<VAR_3->numtouch ; VAR_4++) {
  for (VAR_5=0 ; VAR_5<VAR_4 ; VAR_5++) {
   if (VAR_3->touchents[VAR_5] == VAR_3->touchents[VAR_4] ) {
    break;
   }
  }
  if (VAR_5 != VAR_4) {
   continue;
  }
  VAR_7 = &VAR_1[ VAR_3->touchents[VAR_4] ];

  if ( ( VAR_2->r.svFlags & VAR_0 ) && ( VAR_2->touch ) ) {
   VAR_2->touch( VAR_2, VAR_7, &VAR_6 );
  }

  if ( !VAR_7->touch ) {
   continue;
  }

  VAR_7->touch( VAR_7, VAR_2, &VAR_6 );
 }

}
