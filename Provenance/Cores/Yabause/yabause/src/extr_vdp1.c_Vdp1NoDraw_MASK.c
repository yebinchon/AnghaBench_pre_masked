
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ manualchange; } ;
struct TYPE_4__ {int EDSR; scalar_t__ COPR; } ;


 int FUNC_0 () ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_2(void) {



   VAR_2->EDSR >>= 1;

   VAR_2->COPR = 0;

   FUNC_1(VAR_1, VAR_2);


   VAR_2->EDSR |= 2;
   FUNC_0();
   VAR_0.manualchange = 0;
}
