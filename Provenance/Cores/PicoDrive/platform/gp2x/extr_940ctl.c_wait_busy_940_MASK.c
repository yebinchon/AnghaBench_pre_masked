
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int loopc; int* vstarts; int last_lr; int lastjob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_6)
{
 int VAR_7;

 VAR_6--;
 for (VAR_7 = 0; (VAR_4[0x3b46>>1] & (1<<VAR_6)) && VAR_7 < 0x10000; VAR_7++)
  FUNC_2(8*1024);
 if (VAR_7 < 0x10000) return;


 FUNC_1("940 crashed (cnt: %i, ve: ", VAR_5->loopc);
 for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  FUNC_1("%i ", VAR_5->vstarts[VAR_7]);
 FUNC_1(")\n");
 FUNC_1("irq pending flags: DUALCPU %04x, SRCPND %08x (see 26), INTPND %08x\n",
  VAR_4[0x3b46>>1], VAR_3[0x4500>>2], VAR_3[0x4510>>2]);
 FUNC_1("last lr: %08x, lastjob: %i\n", VAR_5->last_lr, VAR_5->lastjob);
 FUNC_1("trying to interrupt..\n");
 VAR_4[0x3B3E>>1] = 0xffff;
 for (VAR_7 = 0; VAR_4[0x3b46>>1] && VAR_7 < 0x10000; VAR_7++)
  FUNC_2(8*1024);
 FUNC_1("i = 0x%x\n", VAR_7);
 FUNC_1("irq pending flags: DUALCPU %04x, SRCPND %08x (see 26), INTPND %08x\n",
  VAR_4[0x3b46>>1], VAR_3[0x4500>>2], VAR_3[0x4510>>2]);
 FUNC_1("last lr: %08x, lastjob: %i\n", VAR_5->last_lr, VAR_5->lastjob);

 FUNC_0("940 crashed, too much overclock?");
 VAR_2 = VAR_0;
 VAR_1 = 1;
}
