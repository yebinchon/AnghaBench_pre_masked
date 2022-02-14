
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_9__ {size_t curWeapon; } ;
typedef TYPE_3__ clientInfo_t ;
struct TYPE_11__ {scalar_t__ weaponIcon; } ;
struct TYPE_7__ {scalar_t__ deferShader; } ;
struct TYPE_10__ {TYPE_1__ media; TYPE_3__* clientinfo; } ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__) ;
 size_t FUNC_1 () ;
 TYPE_5__* VAR_0 ;
 TYPE_4__ VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2( rectDef_t *VAR_3 ) {
 clientInfo_t *VAR_4;

  VAR_4 = VAR_1.clientinfo + VAR_2[FUNC_1()];
  if (VAR_4) {
   if ( VAR_0[VAR_4->curWeapon].weaponIcon ) {
     FUNC_0( VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h, VAR_0[VAR_4->curWeapon].weaponIcon );
  } else {
     FUNC_0( VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h, VAR_1.media.deferShader);
    }
  }
}
