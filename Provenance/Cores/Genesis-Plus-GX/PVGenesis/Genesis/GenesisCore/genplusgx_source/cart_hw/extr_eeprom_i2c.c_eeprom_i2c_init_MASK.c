
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int T_EEPROM_I2C ;
typedef int T_CONFIG_I2C ;
struct TYPE_19__ {int chk; int config; int game_id; } ;
struct TYPE_18__ {TYPE_1__* memory_map; } ;
struct TYPE_17__ {int sda_out_adr; int sda_in_adr; int scl_adr; } ;
struct TYPE_16__ {int sda; int old_sda; int scl; int old_scl; TYPE_6__ config; int state; } ;
struct TYPE_15__ {int realchecksum; int product; } ;
struct TYPE_14__ {int custom; int on; int end; int start; scalar_t__ detected; } ;
struct TYPE_13__ {void* write; void* read; } ;
struct TYPE_12__ {int write16; void* write8; void* read16; void* read8; } ;
struct TYPE_11__ {int rom; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 TYPE_10__ VAR_2 ;
 TYPE_9__* VAR_3 ;
 TYPE_5__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 TYPE_7__ VAR_9 ;
 int FUNC_1 (TYPE_6__*,int *,int) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 TYPE_4__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 int * FUNC_3 (int ,int ) ;
 TYPE_2__* VAR_12 ;

void FUNC_4()
{
  int VAR_13 = 0;


  FUNC_2(&VAR_4, 0, sizeof(T_EEPROM_I2C));
  VAR_4.sda = VAR_4.old_sda = 1;
  VAR_4.scl = VAR_4.old_scl = 1;
  VAR_4.state = VAR_1;


  VAR_11.custom = 0;


  while (VAR_13<VAR_0)
  {
    if (FUNC_3(VAR_10.product,VAR_3[VAR_13].game_id) != ((void*)0))
    {

      if ((VAR_3[VAR_13].chk == 0x0000) || (VAR_3[VAR_13].chk == VAR_10.realchecksum))
      {
        VAR_11.custom = 1;
        VAR_11.on = 1;
        FUNC_1(&VAR_4.config, &VAR_3[VAR_13].config, sizeof(T_CONFIG_I2C));
        VAR_13 = VAR_0;
      }
    }
    VAR_13++;
  }


  if (!VAR_11.custom && VAR_11.detected)
  {
    if ((FUNC_0(VAR_2.rom,0x1b2) == 0xe8) || ((VAR_11.end - VAR_11.start) < 2))
    {

      VAR_11.custom = 1;
      FUNC_1(&VAR_4.config, &VAR_3[9].config, sizeof(T_CONFIG_I2C));
    }
  }


  if (VAR_11.custom)
  {
    VAR_9.memory_map[VAR_4.config.sda_out_adr >> 16].read8 = VAR_5;
    VAR_9.memory_map[VAR_4.config.sda_out_adr >> 16].read16 = VAR_6;
    VAR_9.memory_map[VAR_4.config.sda_in_adr >> 16].read8 = VAR_5;
    VAR_9.memory_map[VAR_4.config.sda_in_adr >> 16].read16 = VAR_6;
    VAR_9.memory_map[VAR_4.config.scl_adr >> 16].write8 = VAR_7;
    VAR_9.memory_map[VAR_4.config.scl_adr >> 16].write16 = VAR_8;
    VAR_12[VAR_4.config.sda_out_adr >> 16].read = VAR_5;
    VAR_12[VAR_4.config.sda_in_adr >> 16].read = VAR_5;
    VAR_12[VAR_4.config.scl_adr >> 16].write = VAR_7;
  }
}
