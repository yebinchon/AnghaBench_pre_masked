
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ide_disk_obj {TYPE_1__* drive; } ;
struct hd_geometry {scalar_t__ cylinders; int sectors; int heads; } ;
struct block_device {int bd_disk; } ;
struct TYPE_2__ {scalar_t__ bios_cyl; int bios_sect; int bios_head; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 struct ide_disk_obj* FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_1, struct hd_geometry *VAR_2)
{
 struct ide_disk_obj *VAR_3 = FUNC_0(VAR_1->bd_disk, VAR_0);
 ide_drive_t *VAR_4 = VAR_3->drive;

 VAR_2->heads = VAR_4->bios_head;
 VAR_2->sectors = VAR_4->bios_sect;
 VAR_2->cylinders = (u16)VAR_4->bios_cyl;
 return 0;
}
