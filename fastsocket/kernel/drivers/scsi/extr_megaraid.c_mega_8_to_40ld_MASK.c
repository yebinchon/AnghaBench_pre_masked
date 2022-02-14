
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int * pdrv_state; } ;
struct TYPE_11__ {int * ldrv_state; int * ldrv_prop; int * ldrv_size; int num_ldrv; } ;
struct TYPE_10__ {int dram_size; int cache_flush_interval; int * bios_version; int * fw_version; int nchannels; int rebuild_rate; int max_commands; } ;
struct TYPE_13__ {TYPE_3__ pdrv_info; TYPE_2__ logdrv_info; TYPE_1__ adapter_info; } ;
typedef TYPE_4__ mraid_inquiry ;
struct TYPE_14__ {int dram_size; int * bios_version; int * fw_version; int nchannels; int max_commands; } ;
typedef TYPE_5__ mega_product_info ;
struct TYPE_15__ {int * pdrv_state; int * ldrv_state; int * ldrv_prop; int * ldrv_size; int num_ldrv; int cache_flush_interval; int rebuild_rate; } ;
typedef TYPE_6__ mega_inquiry3 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(mraid_inquiry *VAR_2, mega_inquiry3 *VAR_3,
  mega_product_info *VAR_4)
{
 int VAR_5;

 VAR_4->max_commands = VAR_2->adapter_info.max_commands;
 VAR_3->rebuild_rate = VAR_2->adapter_info.rebuild_rate;
 VAR_4->nchannels = VAR_2->adapter_info.nchannels;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_4->fw_version[VAR_5] =
   VAR_2->adapter_info.fw_version[VAR_5];

  VAR_4->bios_version[VAR_5] =
   VAR_2->adapter_info.bios_version[VAR_5];
 }
 VAR_3->cache_flush_interval =
  VAR_2->adapter_info.cache_flush_interval;

 VAR_4->dram_size = VAR_2->adapter_info.dram_size;

 VAR_3->num_ldrv = VAR_2->logdrv_info.num_ldrv;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3->ldrv_size[VAR_5] = VAR_2->logdrv_info.ldrv_size[VAR_5];
  VAR_3->ldrv_prop[VAR_5] = VAR_2->logdrv_info.ldrv_prop[VAR_5];
  VAR_3->ldrv_state[VAR_5] = VAR_2->logdrv_info.ldrv_state[VAR_5];
 }

 for (VAR_5 = 0; VAR_5 < (VAR_1); VAR_5++)
  VAR_3->pdrv_state[VAR_5] = VAR_2->pdrv_info.pdrv_state[VAR_5];
}
