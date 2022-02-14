
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct rt2x00debug_intf* data; } ;
struct TYPE_3__ {struct rt2x00debug_intf* data; } ;
struct rt2x00debug_intf {TYPE_2__ driver_blob; TYPE_1__ chipset_blob; int driver_folder; int driver_entry; int chipset_entry; int cap_flags; int dev_flags; int register_folder; int csr_off_entry; int csr_val_entry; int eeprom_off_entry; int eeprom_val_entry; int bbp_off_entry; int bbp_val_entry; int rf_off_entry; int rf_val_entry; int rfcsr_off_entry; int rfcsr_val_entry; int queue_folder; int queue_frame_dump_entry; int queue_stats_entry; int crypto_stats_entry; int frame_dump_skbqueue; } ;
struct rt2x00_dev {struct rt2x00debug_intf* debugfs_intf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rt2x00debug_intf*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct rt2x00_dev *VAR_0)
{
 struct rt2x00debug_intf *VAR_1 = VAR_0->debugfs_intf;

 if (FUNC_3(!VAR_1))
  return;

 FUNC_2(&VAR_1->frame_dump_skbqueue);




 FUNC_0(VAR_1->queue_stats_entry);
 FUNC_0(VAR_1->queue_frame_dump_entry);
 FUNC_0(VAR_1->queue_folder);
 FUNC_0(VAR_1->rfcsr_val_entry);
 FUNC_0(VAR_1->rfcsr_off_entry);
 FUNC_0(VAR_1->rf_val_entry);
 FUNC_0(VAR_1->rf_off_entry);
 FUNC_0(VAR_1->bbp_val_entry);
 FUNC_0(VAR_1->bbp_off_entry);
 FUNC_0(VAR_1->eeprom_val_entry);
 FUNC_0(VAR_1->eeprom_off_entry);
 FUNC_0(VAR_1->csr_val_entry);
 FUNC_0(VAR_1->csr_off_entry);
 FUNC_0(VAR_1->register_folder);
 FUNC_0(VAR_1->dev_flags);
 FUNC_0(VAR_1->cap_flags);
 FUNC_0(VAR_1->chipset_entry);
 FUNC_0(VAR_1->driver_entry);
 FUNC_0(VAR_1->driver_folder);
 FUNC_1(VAR_1->chipset_blob.data);
 FUNC_1(VAR_1->driver_blob.data);
 FUNC_1(VAR_1);

 VAR_0->debugfs_intf = ((void*)0);
}
