
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ style; int cinematic; } ;
typedef TYPE_1__ windowDef_t ;
struct TYPE_5__ {int (* stopCinematic ) (int) ;} ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(windowDef_t *VAR_2) {
 if (VAR_2->style == VAR_1 && VAR_2->cinematic >= 0) {
  VAR_0->stopCinematic(VAR_2->cinematic);
  VAR_2->cinematic = -1;
 }
}
