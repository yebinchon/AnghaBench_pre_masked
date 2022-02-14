
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {int mode; struct ubi_volume* vol; } ;
struct ubi_volume {int readers; int writers; int ref_count; int dev; int exclusive; int vol_id; struct ubi_device* ubi; } ;
struct ubi_device {int volumes_lock; int ubi_num; } ;


 int VAR_0 ;



 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct ubi_volume_desc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubi_device*) ;

void FUNC_7(struct ubi_volume_desc *VAR_1)
{
 struct ubi_volume *VAR_2 = VAR_1->vol;
 struct ubi_device *VAR_3 = VAR_2->ubi;

 FUNC_0("close device %d, volume %d, mode %d",
  VAR_3->ubi_num, VAR_2->vol_id, VAR_1->mode);

 FUNC_4(&VAR_3->volumes_lock);
 switch (VAR_1->mode) {
 case 129:
  VAR_2->readers -= 1;
  break;
 case 128:
  VAR_2->writers -= 1;
  break;
 case 130:
  VAR_2->exclusive = 0;
 }
 VAR_2->ref_count -= 1;
 FUNC_5(&VAR_3->volumes_lock);

 FUNC_1(VAR_1);
 FUNC_3(&VAR_2->dev);
 FUNC_6(VAR_3);
 FUNC_2(VAR_0);
}
