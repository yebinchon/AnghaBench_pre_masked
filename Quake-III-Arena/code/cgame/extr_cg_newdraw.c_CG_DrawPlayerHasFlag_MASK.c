
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ h; scalar_t__ w; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_5__ {scalar_t__* powerups; } ;
struct TYPE_7__ {TYPE_1__ predictedPlayerState; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static void FUNC_1(rectDef_t *VAR_7, qboolean VAR_8) {
 int VAR_9 = (VAR_8) ? 0 : 2;
 if( VAR_6.predictedPlayerState.powerups[VAR_2] ) {
   FUNC_0( VAR_7->x + VAR_9, VAR_7->y + VAR_9, VAR_7->w - VAR_9, VAR_7->h - VAR_9, VAR_5, VAR_8);
 } else if( VAR_6.predictedPlayerState.powerups[VAR_0] ) {
   FUNC_0( VAR_7->x + VAR_9, VAR_7->y + VAR_9, VAR_7->w - VAR_9, VAR_7->h - VAR_9, VAR_3, VAR_8);
 } else if( VAR_6.predictedPlayerState.powerups[VAR_1] ) {
   FUNC_0( VAR_7->x + VAR_9, VAR_7->y + VAR_9, VAR_7->w - VAR_9, VAR_7->h - VAR_9, VAR_4, VAR_8);
 }
}
