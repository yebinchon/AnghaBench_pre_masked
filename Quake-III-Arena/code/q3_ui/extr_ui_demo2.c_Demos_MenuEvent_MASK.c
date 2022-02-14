
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_6__ {size_t curvalue; int * itemnames; } ;
struct TYPE_5__ {TYPE_3__ list; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5( void *VAR_5, int VAR_6 ) {
 if( VAR_6 != VAR_3 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_5)->id ) {
 case 130:
  FUNC_1 ();
  FUNC_3( VAR_0, FUNC_4( "demo %s\n",
        VAR_4.list.itemnames[VAR_4.list.curvalue]) );
  break;

 case 131:
  FUNC_2();
  break;

 case 129:
  FUNC_0( &VAR_4.list, VAR_1 );
  break;

 case 128:
  FUNC_0( &VAR_4.list, VAR_2 );
  break;
 }
}
