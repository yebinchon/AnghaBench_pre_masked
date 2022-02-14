
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int waterlevel; } ;
struct TYPE_3__ {int previous_waterlevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_1( void ) {



 if (!VAR_5.previous_waterlevel && VAR_4->waterlevel) {
  FUNC_0( VAR_2 );
 }




 if (VAR_5.previous_waterlevel && !VAR_4->waterlevel) {
  FUNC_0( VAR_1 );
 }




 if (VAR_5.previous_waterlevel != 3 && VAR_4->waterlevel == 3) {
  FUNC_0( VAR_3 );
 }




 if (VAR_5.previous_waterlevel == 3 && VAR_4->waterlevel != 3) {
  FUNC_0( VAR_0 );
 }
}
