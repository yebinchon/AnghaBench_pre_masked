
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int state_phase; int keyon_field; int magic; int TAT; int TBT; int lfo_ampm; int lfo_cnt; int eg_timer; int eg_cnt; int addr_A1; int status; int address; int * block_fnum_sl3; int * block_fnum; int volume; } ;
typedef TYPE_6__ ym_save_addon_slot ;
typedef TYPE_6__ ym_save_addon2 ;
typedef TYPE_6__ ym_save_addon ;
typedef int sa2 ;
typedef int sa ;
struct TYPE_15__ {int status; int address; } ;
struct TYPE_14__ {int * block_fnum; } ;
struct TYPE_16__ {int lfo_cnt; int eg_timer; int eg_cnt; TYPE_4__ ST; TYPE_3__ SL3; } ;
struct TYPE_18__ {unsigned char* REGS; TYPE_5__ OPN; int addr_A1; TYPE_2__* CH; } ;
struct TYPE_13__ {int block_fnum; TYPE_1__* SLOT; } ;
struct TYPE_12__ {int state; int phase; scalar_t__ key; int volume; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,TYPE_6__*,int) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 TYPE_9__ VAR_1 ;

void FUNC_2(int VAR_2, int VAR_3)
{
 ym_save_addon_slot VAR_4;
 ym_save_addon2 VAR_5;
 ym_save_addon VAR_6;
 unsigned char *VAR_7;
 int VAR_8, VAR_9;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));


 VAR_7 = &VAR_1[0x0b8];
 for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
 {
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   VAR_4.state_phase = (VAR_1[VAR_8].SLOT[VAR_9].state << 29) | (VAR_1[VAR_8].SLOT[VAR_9].phase >> 3);
   VAR_4.volume = VAR_1[VAR_8].SLOT[VAR_9].volume;
   if (VAR_1[VAR_8].SLOT[VAR_9].key)
    VAR_6.keyon_field |= 1 << (VAR_8*4 + VAR_9);
   FUNC_0(VAR_7, &VAR_4, 6);
   VAR_7 += 6;
  }
  VAR_5[VAR_8] = VAR_1[VAR_8].block_fnum;
 }

 VAR_7 = &VAR_1[0x1b8];
 for (; VAR_8 < 6; VAR_8++)
 {
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   VAR_4.state_phase = (VAR_1[VAR_8].SLOT[VAR_9].state << 29) | (VAR_1[VAR_8].SLOT[VAR_9].phase >> 3);
   VAR_4.volume = VAR_1[VAR_8].SLOT[VAR_9].volume;
   if (VAR_1[VAR_8].SLOT[VAR_9].key)
    VAR_6.keyon_field |= 1 << (VAR_8*4 + VAR_9);
   FUNC_0(VAR_7, &VAR_4, 6);
   VAR_7 += 6;
  }
  VAR_5[VAR_8] = VAR_1[VAR_8].block_fnum;
 }
 for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
 {
  VAR_5[VAR_8] = VAR_1[VAR_8];
 }

 FUNC_0(&VAR_1[0], &VAR_5, sizeof(VAR_5));


 VAR_7 = &VAR_1[0x100];
 VAR_6.magic = 0x41534d59;
 VAR_6.address = VAR_1;
 VAR_6.status = VAR_1;
 VAR_6.addr_A1 = VAR_1;
 VAR_6.TAT = VAR_2;
 VAR_6.TBT = VAR_3;
 VAR_6.eg_cnt = VAR_1;
 VAR_6.eg_timer = VAR_1;
 VAR_6.lfo_cnt = VAR_1;
 VAR_6.lfo_ampm = VAR_0;
 FUNC_0(VAR_7, &VAR_6, sizeof(VAR_6));
}
