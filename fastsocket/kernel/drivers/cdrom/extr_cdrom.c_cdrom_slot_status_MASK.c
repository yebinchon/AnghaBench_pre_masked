
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {scalar_t__ sanyo_slot; } ;
struct cdrom_changer_info {TYPE_1__* slots; } ;
struct TYPE_2__ {scalar_t__ disc_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cdrom_device_info*,struct cdrom_changer_info*) ;
 int FUNC_2 (struct cdrom_changer_info*) ;
 struct cdrom_changer_info* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_6, int VAR_7)
{
 struct cdrom_changer_info *VAR_8;
 int VAR_9;

 FUNC_0(VAR_3, "entering cdrom_slot_status()\n");
 if (VAR_6->sanyo_slot)
  return VAR_2;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_5);
 if (!VAR_8)
  return -VAR_4;

 if ((VAR_9 = FUNC_1(VAR_6, VAR_8)))
  goto out_free;

 if (VAR_8->slots[VAR_7].disc_present)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;

out_free:
 FUNC_2(VAR_8);
 return VAR_9;
}
