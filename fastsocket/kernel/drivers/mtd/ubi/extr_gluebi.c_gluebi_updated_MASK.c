
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_volume_info {scalar_t__ vol_type; int used_bytes; int vol_id; int ubi_num; } ;
struct TYPE_2__ {int size; } ;
struct gluebi_device {TYPE_1__ mtd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 struct gluebi_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ubi_volume_info *VAR_3)
{
 struct gluebi_device *VAR_4;

 FUNC_2(&VAR_2);
 VAR_4 = FUNC_1(VAR_3->ubi_num, VAR_3->vol_id);
 if (!VAR_4) {
  FUNC_3(&VAR_2);
  FUNC_0("got update notification for unknown UBI device %d "
   "volume %d", VAR_3->ubi_num, VAR_3->vol_id);
  return -VAR_0;
 }

 if (VAR_3->vol_type == VAR_1)
  VAR_4->mtd.size = VAR_3->used_bytes;
 FUNC_3(&VAR_2);
 return 0;
}
