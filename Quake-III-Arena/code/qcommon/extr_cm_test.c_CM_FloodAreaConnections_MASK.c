
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ floodvalid; } ;
typedef TYPE_1__ cArea_t ;
struct TYPE_4__ {scalar_t__ floodvalid; int numAreas; TYPE_1__* areas; } ;


 int FUNC_0 (int,int) ;
 TYPE_2__ VAR_0 ;

void FUNC_1( void ) {
 int VAR_1;
 cArea_t *VAR_2;
 int VAR_3;


 VAR_0.floodvalid++;
 VAR_3 = 0;

 for (VAR_1 = 0 ; VAR_1 < VAR_0.numAreas ; VAR_1++) {
  VAR_2 = &VAR_0.areas[VAR_1];
  if (VAR_2->floodvalid == VAR_0.floodvalid) {
   continue;
  }
  VAR_3++;
  FUNC_0 (VAR_1, VAR_3);
 }

}
