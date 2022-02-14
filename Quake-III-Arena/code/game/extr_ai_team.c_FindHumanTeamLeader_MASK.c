
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int teamleader; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_8__ {int svFlags; } ;
struct TYPE_10__ {TYPE_1__ r; scalar_t__ inuse; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_4(bot_state_t *VAR_7) {
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if ( VAR_3[VAR_8].inuse ) {

   if ( !(VAR_3[VAR_8].r.svFlags & VAR_2) ) {

    if (!VAR_4[VAR_8]) {

     if ( FUNC_0(VAR_7, VAR_8) ) {
      FUNC_3(VAR_8, VAR_7->teamleader, sizeof(VAR_7->teamleader));

      if ( !FUNC_1(VAR_7) ) {

       FUNC_2(VAR_7, VAR_8, VAR_1);
      }
      return VAR_6;
     }
    }
   }
  }
 }
 return VAR_5;
}
