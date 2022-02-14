
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_volume_info {int cdev; int name; int name_len; int usable_leb_size; int alignment; int upd_marker; int corrupted; int vol_type; int used_bytes; int size; int ubi_num; int vol_id; } ;
struct TYPE_2__ {int dev; } ;
struct ubi_volume {TYPE_1__ cdev; int name; int name_len; int usable_leb_size; int alignment; int upd_marker; int corrupted; int vol_type; int used_bytes; int reserved_pebs; int vol_id; } ;
struct ubi_device {int ubi_num; } ;



void FUNC_0(struct ubi_device *VAR_0, struct ubi_volume *VAR_1,
       struct ubi_volume_info *VAR_2)
{
 VAR_2->vol_id = VAR_1->vol_id;
 VAR_2->ubi_num = VAR_0->ubi_num;
 VAR_2->size = VAR_1->reserved_pebs;
 VAR_2->used_bytes = VAR_1->used_bytes;
 VAR_2->vol_type = VAR_1->vol_type;
 VAR_2->corrupted = VAR_1->corrupted;
 VAR_2->upd_marker = VAR_1->upd_marker;
 VAR_2->alignment = VAR_1->alignment;
 VAR_2->usable_leb_size = VAR_1->usable_leb_size;
 VAR_2->name_len = VAR_1->name_len;
 VAR_2->name = VAR_1->name;
 VAR_2->cdev = VAR_1->cdev.dev;
}
