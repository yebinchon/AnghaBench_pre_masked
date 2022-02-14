
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* vieworg; } ;
struct TYPE_4__ {scalar_t__* refdefViewAngles; TYPE_1__ refdef; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1 (void) {
 FUNC_0 ("(%i %i %i) : %i\n", (int)VAR_1.refdef.vieworg[0],
  (int)VAR_1.refdef.vieworg[1], (int)VAR_1.refdef.vieworg[2],
  (int)VAR_1.refdefViewAngles[VAR_0]);
}
