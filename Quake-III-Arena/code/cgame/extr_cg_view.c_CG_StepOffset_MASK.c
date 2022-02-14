
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* vieworg; } ;
struct TYPE_4__ {int time; int stepTime; int stepChange; TYPE_1__ refdef; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_0( void ) {
 int VAR_2;


 VAR_2 = VAR_1.time - VAR_1.stepTime;
 if ( VAR_2 < VAR_0 ) {
  VAR_1.refdef.vieworg[2] -= VAR_1.stepChange
   * (VAR_0 - VAR_2) / VAR_0;
 }
}
