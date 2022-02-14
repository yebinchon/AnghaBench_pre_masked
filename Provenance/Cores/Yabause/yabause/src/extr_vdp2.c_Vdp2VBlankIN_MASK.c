
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int (* Vdp2DrawEnd ) () ;} ;
struct TYPE_9__ {scalar_t__ manualchange; } ;
struct TYPE_8__ {int EDSR; scalar_t__ COPR; } ;
struct TYPE_7__ {int TVSTAT; } ;
struct TYPE_6__ {scalar_t__ IsSSH2Running; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_5__* VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 () ;
 TYPE_1__ VAR_5 ;

void FUNC_3(void) {
   VAR_1->Vdp2DrawEnd();

   VAR_3->COPR = 0;




   if (VAR_2.manualchange) VAR_3->EDSR >>= 1;

   VAR_4->TVSTAT |= 0x0008;
   FUNC_1();

   if (VAR_5.IsSSH2Running)
      FUNC_0(VAR_0, 0x43, 0x6);
}
