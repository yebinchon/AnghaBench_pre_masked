
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* mdmreg; int carrierwait; } ;
struct TYPE_9__ {scalar_t__ dialing; TYPE_1__ emu; } ;
typedef TYPE_3__ modem_info ;
struct TYPE_8__ {TYPE_3__* info; } ;
struct TYPE_10__ {TYPE_2__ mdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;

void
FUNC_3(void)
{
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  modem_info *VAR_7 = &VAR_4->mdm.info[VAR_6];
  if (VAR_7->dialing) {
   if (VAR_7->emu.carrierwait++ > VAR_7->emu.mdmreg[VAR_2]) {
    VAR_7->dialing = 0;
    FUNC_2(VAR_3, VAR_7);
    FUNC_1(VAR_7, 1);
   }
   else
    VAR_5 = 1;
  }
 }
 FUNC_0(VAR_1, VAR_5);
}
