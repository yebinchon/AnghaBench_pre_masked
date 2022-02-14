
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {scalar_t__ mode; struct ubi_volume* vol; } ;
struct ubi_volume {int vol_id; scalar_t__ vol_type; int reserved_pebs; int usable_leb_size; scalar_t__ upd_marker; struct ubi_device* ubi; } ;
struct ubi_device {int vtbl_slots; int min_io_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct ubi_device*,struct ubi_volume*,int,void const*,int,int) ;

int FUNC_2(struct ubi_volume_desc *VAR_8, int VAR_9, const void *VAR_10,
     int VAR_11, int VAR_12)
{
 struct ubi_volume *VAR_13 = VAR_8->vol;
 struct ubi_device *VAR_14 = VAR_13->ubi;
 int VAR_15 = VAR_13->vol_id;

 FUNC_0("atomically write %d bytes to LEB %d:%d", VAR_11, VAR_15, VAR_9);

 if (VAR_15 < 0 || VAR_15 >= VAR_14->vtbl_slots)
  return -VAR_1;

 if (VAR_8->mode == VAR_4 || VAR_13->vol_type == VAR_6)
  return -VAR_2;

 if (VAR_9 < 0 || VAR_9 >= VAR_13->reserved_pebs || VAR_11 < 0 ||
     VAR_11 > VAR_13->usable_leb_size || VAR_11 & (VAR_14->min_io_size - 1))
  return -VAR_1;

 if (VAR_12 != VAR_3 && VAR_12 != VAR_5 &&
     VAR_12 != VAR_7)
  return -VAR_1;

 if (VAR_13->upd_marker)
  return -VAR_0;

 if (VAR_11 == 0)
  return 0;

 return FUNC_1(VAR_14, VAR_13, VAR_9, VAR_10, VAR_11, VAR_12);
}
