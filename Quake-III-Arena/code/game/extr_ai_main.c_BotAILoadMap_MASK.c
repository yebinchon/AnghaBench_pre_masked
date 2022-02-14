
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int string; } ;
typedef TYPE_1__ vmCvar_t ;
struct TYPE_6__ {int setupcount; scalar_t__ inuse; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,char*,int) ;

int FUNC_4( int VAR_5 ) {
 int VAR_6;
 vmCvar_t VAR_7;

 if (!VAR_5) {
  FUNC_3( &VAR_7, "mapname", "", VAR_1 | VAR_0 );
  FUNC_2( VAR_7.string );
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_3[VAR_6] && VAR_3[VAR_6]->inuse) {
   FUNC_0( VAR_3[VAR_6] );
   VAR_3[VAR_6]->setupcount = 4;
  }
 }

 FUNC_1();

 return VAR_4;
}
