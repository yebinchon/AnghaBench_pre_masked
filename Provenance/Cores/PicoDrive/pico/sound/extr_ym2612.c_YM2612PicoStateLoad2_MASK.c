
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int magic; int TAT; int TBT; int state_phase; int keyon_field; int* block_fnum; int* block_fnum_sl3; int volume; int lfo_ampm; int lfo_cnt; int eg_timer; int eg_cnt; int addr_A1; int status; int address; } ;
typedef TYPE_6__ ym_save_addon_slot ;
typedef TYPE_6__ ym_save_addon2 ;
typedef TYPE_6__ ym_save_addon ;
typedef int sa2 ;
typedef int sa ;
typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_11__ {int* block_fnum; int* kcode; int* fc; } ;
struct TYPE_12__ {int status; int address; } ;
struct TYPE_13__ {TYPE_1__ SL3; int lfo_cnt; int eg_timer; int eg_cnt; TYPE_2__ ST; } ;
struct TYPE_17__ {unsigned char* REGS; TYPE_3__ OPN; TYPE_5__* CH; int addr_A1; } ;
struct TYPE_15__ {int block_fnum; int kcode; int fc; TYPE_4__* SLOT; } ;
struct TYPE_14__ {int state; int phase; int key; int ksr; int Incr; int volume; } ;


 size_t VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,unsigned char*,int) ;
 int* VAR_3 ;
 TYPE_9__ VAR_4 ;

int FUNC_1(int *VAR_5, int *VAR_6)
{
 ym_save_addon_slot VAR_7;
 ym_save_addon2 VAR_8;
 ym_save_addon VAR_9;
 unsigned char *VAR_10;
 UINT32 VAR_11;
 UINT8 VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = &VAR_4[0x100];
 FUNC_0(&VAR_9, VAR_10, sizeof(VAR_9));
 if (VAR_9.magic != 0x41534d59) return -1;

 VAR_10 = &VAR_4[0];
 FUNC_0(&VAR_8, VAR_10, sizeof(VAR_8));

 VAR_4 = VAR_9.address;
 VAR_4 = VAR_9.status;
 VAR_4 = VAR_9.addr_A1;
 VAR_4 = VAR_9.eg_cnt;
 VAR_4 = VAR_9.eg_timer;
 VAR_4 = VAR_9.lfo_cnt;
 VAR_2 = VAR_9.lfo_ampm;
 if (VAR_5 != ((void*)0)) *VAR_5 = VAR_9.TAT;
 if (VAR_6 != ((void*)0)) *VAR_6 = VAR_9.TBT;


 VAR_10 = &VAR_4[0x0b8];
 for (VAR_13 = 0; VAR_13 < 3; VAR_13++)
 {
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
   FUNC_0(&VAR_7, VAR_10, 6);
   VAR_4[VAR_13].SLOT[VAR_14].state = VAR_7.state_phase >> 29;
   VAR_4[VAR_13].SLOT[VAR_14].phase = VAR_7.state_phase << 3;
   VAR_4[VAR_13].SLOT[VAR_14].volume = VAR_7.volume;
   VAR_4[VAR_13].SLOT[VAR_14].key = (VAR_9.keyon_field & (1 << (VAR_13*4 + VAR_14))) ? 1 : 0;
   VAR_4[VAR_13].SLOT[VAR_14].ksr = (UINT8)-1;
   VAR_10 += 6;
  }
  VAR_4[VAR_13].SLOT[VAR_0].Incr=-1;
  VAR_4[VAR_13].block_fnum = VAR_8[VAR_13];
  VAR_11 = VAR_4[VAR_13].block_fnum & 0x7ff;
  VAR_12 = VAR_4[VAR_13].block_fnum >> 11;
  VAR_4[VAR_13].kcode= (VAR_12<<2) | VAR_3[VAR_11 >> 7];
  VAR_4[VAR_13].fc = VAR_1[VAR_11*2]>>(7-VAR_12);
 }

 VAR_10 = &VAR_4[0x1b8];
 for (; VAR_13 < 6; VAR_13++)
 {
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
   FUNC_0(&VAR_7, VAR_10, 6);
   VAR_4[VAR_13].SLOT[VAR_14].state = VAR_7.state_phase >> 29;
   VAR_4[VAR_13].SLOT[VAR_14].phase = VAR_7.state_phase << 3;
   VAR_4[VAR_13].SLOT[VAR_14].volume = VAR_7.volume;
   VAR_4[VAR_13].SLOT[VAR_14].key = (VAR_9.keyon_field & (1 << (VAR_13*4 + VAR_14))) ? 1 : 0;
   VAR_4[VAR_13].SLOT[VAR_14].ksr = (UINT8)-1;
   VAR_10 += 6;
  }
  VAR_4[VAR_13].SLOT[VAR_0].Incr=-1;
  VAR_4[VAR_13].block_fnum = VAR_8[VAR_13];
  VAR_11 = VAR_4[VAR_13].block_fnum & 0x7ff;
  VAR_12 = VAR_4[VAR_13].block_fnum >> 11;
  VAR_4[VAR_13].kcode= (VAR_12<<2) | VAR_3[VAR_11 >> 7];
  VAR_4[VAR_13].fc = VAR_1[VAR_11*2]>>(7-VAR_12);
 }
 for (VAR_13 = 0; VAR_13 < 3; VAR_13++)
 {
  VAR_4[VAR_13] = VAR_8[VAR_13];
  VAR_11 = VAR_4[VAR_13] & 0x7ff;
  VAR_12 = VAR_4[VAR_13] >> 11;
  VAR_4[VAR_13]= (VAR_12<<2) | VAR_3[VAR_11 >> 7];
  VAR_4[VAR_13] = VAR_1[VAR_11*2]>>(7-VAR_12);
 }

 return 0;
}
