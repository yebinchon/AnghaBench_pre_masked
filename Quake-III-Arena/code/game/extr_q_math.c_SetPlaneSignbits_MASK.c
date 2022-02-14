
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* normal; int signbits; } ;
typedef TYPE_1__ cplane_t ;



void FUNC_0 (cplane_t *VAR_0) {
 int VAR_1, VAR_2;


 VAR_1 = 0;
 for (VAR_2=0 ; VAR_2<3 ; VAR_2++) {
  if (VAR_0->normal[VAR_2] < 0) {
   VAR_1 |= 1<<VAR_2;
  }
 }
 VAR_0->signbits = VAR_1;
}
