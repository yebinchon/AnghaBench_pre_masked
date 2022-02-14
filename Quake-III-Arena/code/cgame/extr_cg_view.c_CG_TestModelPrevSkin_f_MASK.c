
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ skinNum; } ;
struct TYPE_4__ {TYPE_1__ testModelEntity; } ;


 int FUNC_0 (char*,scalar_t__) ;
 TYPE_2__ VAR_0 ;

void FUNC_1 (void) {
 VAR_0.testModelEntity.skinNum--;
 if ( VAR_0.testModelEntity.skinNum < 0 ) {
  VAR_0.testModelEntity.skinNum = 0;
 }
 FUNC_0( "skin %i\n", VAR_0.testModelEntity.skinNum );
}
