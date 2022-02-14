
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8 ;
struct TYPE_12__ {int l; } ;
struct TYPE_15__ {TYPE_1__ byte; } ;
typedef TYPE_4__ uint32 ;
typedef TYPE_4__ uint16 ;
struct TYPE_17__ {TYPE_4__ stopped; TYPE_4__ int_level; TYPE_4__ cycles; TYPE_4__ poll; } ;
struct TYPE_14__ {scalar_t__ boot; } ;
struct TYPE_16__ {TYPE_3__ cartridge; TYPE_4__* word_ram_2M; TYPE_4__* word_ram; TYPE_4__* regs; TYPE_4__* prg_ram; TYPE_4__ dmna; TYPE_4__ pending; TYPE_4__ timer; TYPE_4__ cycles; } ;
struct TYPE_13__ {scalar_t__ base; } ;
struct TYPE_11__ {TYPE_2__* memory_map; TYPE_4__ poll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_10__ VAR_20 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_9__ VAR_21 ;
 TYPE_4__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int) ;
 TYPE_6__ VAR_22 ;

int FUNC_7(uint8 *VAR_23)
{
  uint16 VAR_24;
  uint32 VAR_25;
  int VAR_26 = 0;


  FUNC_6(VAR_22.regs, sizeof(VAR_22.regs));
  FUNC_6(&VAR_22.cycles, sizeof(VAR_22.cycles));
  FUNC_6(&VAR_22.timer, sizeof(VAR_22.timer));
  FUNC_6(&VAR_22.pending, sizeof(VAR_22.pending));
  FUNC_6(&VAR_22.dmna, sizeof(VAR_22.dmna));


  VAR_26 += FUNC_2(&VAR_23[VAR_26]);


  VAR_26 += FUNC_0(&VAR_23[VAR_26]);


  VAR_26 += FUNC_1(&VAR_23[VAR_26]);


  VAR_26 += FUNC_4(&VAR_23[VAR_26]);


  FUNC_6(VAR_22.prg_ram, sizeof(VAR_22.prg_ram));


  if (VAR_22.regs[0x03>>1].byte.l & 0x04)
  {

    FUNC_6(VAR_22.word_ram, sizeof(VAR_22.word_ram));
  }
  else
  {

    FUNC_6(VAR_22.word_ram_2M, sizeof(VAR_22.word_ram_2M));
  }


  FUNC_6(&VAR_20.poll, sizeof(VAR_20.poll));
  FUNC_6(&VAR_21.poll, sizeof(VAR_21.poll));


  VAR_24 = *(uint16 *)(VAR_20.memory_map[0].base + 0x72);
  FUNC_6(&VAR_24, 2);


  FUNC_6(&VAR_21.cycles, sizeof(VAR_21.cycles));
  FUNC_6(&VAR_21.int_level, sizeof(VAR_21.int_level));
  FUNC_6(&VAR_21.stopped, sizeof(VAR_21.stopped));


  VAR_25 = FUNC_5(VAR_8); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_9); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_10); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_11); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_12); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_13); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_14); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_15); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_0); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_1); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_2); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_3); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_4); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_5); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_6); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_7); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_17); FUNC_6(&VAR_25, 4);
  VAR_24 = FUNC_5(VAR_18); FUNC_6(&VAR_24, 2);
  VAR_25 = FUNC_5(VAR_19); FUNC_6(&VAR_25, 4);
  VAR_25 = FUNC_5(VAR_16); FUNC_6(&VAR_25, 4);


  if (VAR_22.cartridge.boot)
  {
    VAR_26 += FUNC_3(&VAR_23[VAR_26]);
  }

  return VAR_26;
}
