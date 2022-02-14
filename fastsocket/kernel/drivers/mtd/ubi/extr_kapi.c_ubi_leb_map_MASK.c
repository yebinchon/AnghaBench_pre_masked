
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {scalar_t__ mode; struct ubi_volume* vol; } ;
struct ubi_volume {scalar_t__ vol_type; int reserved_pebs; scalar_t__* eba_tbl; scalar_t__ upd_marker; int vol_id; struct ubi_device* ubi; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct ubi_device*,struct ubi_volume*,int,int *,int ,int ,int) ;

int FUNC_2(struct ubi_volume_desc *VAR_9, int VAR_10, int VAR_11)
{
 struct ubi_volume *VAR_12 = VAR_9->vol;
 struct ubi_device *VAR_13 = VAR_12->ubi;

 FUNC_0("unmap LEB %d:%d", VAR_12->vol_id, VAR_10);

 if (VAR_9->mode == VAR_5 || VAR_12->vol_type == VAR_7)
  return -VAR_3;

 if (VAR_10 < 0 || VAR_10 >= VAR_12->reserved_pebs)
  return -VAR_2;

 if (VAR_11 != VAR_4 && VAR_11 != VAR_6 &&
     VAR_11 != VAR_8)
  return -VAR_2;

 if (VAR_12->upd_marker)
  return -VAR_0;

 if (VAR_12->eba_tbl[VAR_10] >= 0)
  return -VAR_1;

 return FUNC_1(VAR_13, VAR_12, VAR_10, ((void*)0), 0, 0, VAR_11);
}
