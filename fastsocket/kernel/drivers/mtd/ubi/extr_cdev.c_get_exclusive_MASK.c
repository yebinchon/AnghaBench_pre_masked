
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_volume_desc {int mode; struct ubi_volume* vol; } ;
struct ubi_volume {int readers; int writers; int exclusive; TYPE_1__* ubi; int vol_id; } ;
struct TYPE_2__ {int volumes_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ubi_volume_desc *VAR_2)
{
 int VAR_3, VAR_4;
 struct ubi_volume *VAR_5 = VAR_2->vol;

 FUNC_1(&VAR_5->ubi->volumes_lock);
 VAR_3 = VAR_5->readers + VAR_5->writers + VAR_5->exclusive;
 FUNC_3(VAR_3 > 0);
 if (VAR_3 > 1) {
  FUNC_0("%d users for volume %d", VAR_3, VAR_5->vol_id);
  VAR_4 = -VAR_0;
 } else {
  VAR_5->readers = VAR_5->writers = 0;
  VAR_5->exclusive = 1;
  VAR_4 = VAR_2->mode;
  VAR_2->mode = VAR_1;
 }
 FUNC_2(&VAR_5->ubi->volumes_lock);

 return VAR_4;
}
