
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {scalar_t__ capacity; } ;
struct TYPE_2__ {int nslots; } ;
struct cdrom_changer_info {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cdrom_device_info*,struct cdrom_changer_info*) ;
 int FUNC_2 (struct cdrom_changer_info*) ;
 struct cdrom_changer_info* FUNC_3 (int,int ) ;

int FUNC_4(struct cdrom_device_info *VAR_3)
{
 int VAR_4;
 int VAR_5 = 1;
 struct cdrom_changer_info *VAR_6;

 FUNC_0(VAR_0, "entering cdrom_number_of_slots()\n");

 VAR_3->capacity = 0;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 if ((VAR_4 = FUNC_1(VAR_3, VAR_6)) == 0)
  VAR_5 = VAR_6->hdr.nslots;

 FUNC_2(VAR_6);
 return VAR_5;
}
