
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__ kill; TYPE_1__* sfx; } ;
struct TYPE_3__ {scalar_t__ soundLength; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1( qboolean VAR_5 ) {
 int VAR_6;
 for ( VAR_6 = 0 ; VAR_6 < VAR_0 ; VAR_6++) {
  if (VAR_5 || VAR_1[VAR_6].kill == VAR_4 || (VAR_1[VAR_6].sfx && VAR_1[VAR_6].sfx->soundLength == 0)) {
   VAR_1[VAR_6].kill = VAR_3;
   FUNC_0(VAR_6);
  }
 }
 VAR_2 = 0;
}
