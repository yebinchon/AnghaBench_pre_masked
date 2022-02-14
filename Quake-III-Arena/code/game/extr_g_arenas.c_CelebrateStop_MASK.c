
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ weapon; int torsoAnim; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0( gentity_t *VAR_4 ) {
 int VAR_5;

 if( VAR_4->s.weapon == VAR_3) {
  VAR_5 = VAR_2;
 }
 else {
  VAR_5 = VAR_1;
 }
 VAR_4->s.torsoAnim = ( ( VAR_4->s.torsoAnim & VAR_0 ) ^ VAR_0 ) | VAR_5;
}
