
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_6__ {scalar_t__ h; scalar_t__ y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_7__ {int maxclients; TYPE_1__* clientinfo; } ;
struct TYPE_5__ {scalar_t__ team; int powerups; int name; scalar_t__ infoValid; } ;


 int FUNC_0 (int ,scalar_t__,float,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_1(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, int VAR_6 ) {
  int VAR_7;
  for ( VAR_7 = 0 ; VAR_7 < VAR_2.maxclients ; VAR_7++ ) {
   if ( VAR_2.clientinfo[VAR_7].infoValid && VAR_2.clientinfo[VAR_7].team == VAR_1 && VAR_2.clientinfo[VAR_7].powerups & ( 1<< VAR_0 )) {
      FUNC_0(VAR_3->x, VAR_3->y + VAR_3->h, VAR_4, VAR_5, VAR_2.clientinfo[VAR_7].name, 0, 0, VAR_6);
      return;
    }
  }
}
