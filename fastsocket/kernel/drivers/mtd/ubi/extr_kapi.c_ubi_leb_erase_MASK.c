
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {scalar_t__ mode; struct ubi_volume* vol; } ;
struct ubi_volume {scalar_t__ vol_type; int reserved_pebs; scalar_t__ upd_marker; int vol_id; struct ubi_device* ubi; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_2 (struct ubi_device*) ;

int FUNC_3(struct ubi_volume_desc *VAR_5, int VAR_6)
{
 struct ubi_volume *VAR_7 = VAR_5->vol;
 struct ubi_device *VAR_8 = VAR_7->ubi;
 int VAR_9;

 FUNC_0("erase LEB %d:%d", VAR_7->vol_id, VAR_6);

 if (VAR_5->mode == VAR_3 || VAR_7->vol_type == VAR_4)
  return -VAR_2;

 if (VAR_6 < 0 || VAR_6 >= VAR_7->reserved_pebs)
  return -VAR_1;

 if (VAR_7->upd_marker)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_8, VAR_7, VAR_6);
 if (VAR_9)
  return VAR_9;

 return FUNC_2(VAR_8);
}
