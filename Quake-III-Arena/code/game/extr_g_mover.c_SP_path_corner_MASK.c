
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int origin; } ;
struct TYPE_6__ {TYPE_1__ s; int targetname; } ;
typedef TYPE_2__ gentity_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3( gentity_t *VAR_0 ) {
 if ( !VAR_0->targetname ) {
  FUNC_1 ("path_corner with no targetname at %s\n", FUNC_2(VAR_0->s.origin));
  FUNC_0( VAR_0 );
  return;
 }

}
