
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tasks; TYPE_1__* QuadroList; } ;
struct TYPE_4__ {int * QuadroAdapter; } ;
typedef TYPE_2__* PISDN_ADAPTER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1 (PISDN_ADAPTER VAR_1) {
 if (!VAR_1->tasks) {
  VAR_1->tasks = VAR_0;
 }

 FUNC_0 (VAR_1->QuadroList->QuadroAdapter[0]) ;
 if (VAR_1->tasks > 1) {
  FUNC_0 (VAR_1->QuadroList->QuadroAdapter[1]) ;
  FUNC_0 (VAR_1->QuadroList->QuadroAdapter[2]) ;
  FUNC_0 (VAR_1->QuadroList->QuadroAdapter[3]) ;
 }

}
