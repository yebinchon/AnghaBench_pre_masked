
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {int vol_id; int used_ebs; int usable_leb_size; scalar_t__ vol_type; int last_eb_bytes; int corrupted; scalar_t__ upd_marker; struct ubi_device* ubi; } ;
struct ubi_device {int vtbl_slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (struct ubi_device*,struct ubi_volume*,int,char*,int,int,int) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(struct ubi_volume_desc *VAR_4, int VAR_5, char *VAR_6, int VAR_7,
   int VAR_8, int VAR_9)
{
 struct ubi_volume *VAR_10 = VAR_4->vol;
 struct ubi_device *VAR_11 = VAR_10->ubi;
 int VAR_12, VAR_13 = VAR_10->vol_id;

 FUNC_0("read %d bytes from LEB %d:%d:%d", VAR_8, VAR_13, VAR_5, VAR_7);

 if (VAR_13 < 0 || VAR_13 >= VAR_11->vtbl_slots || VAR_5 < 0 ||
     VAR_5 >= VAR_10->used_ebs || VAR_7 < 0 || VAR_8 < 0 ||
     VAR_7 + VAR_8 > VAR_10->usable_leb_size)
  return -VAR_2;

 if (VAR_10->vol_type == VAR_3) {
  if (VAR_10->used_ebs == 0)

   return 0;
  if (VAR_5 == VAR_10->used_ebs - 1 &&
      VAR_7 + VAR_8 > VAR_10->last_eb_bytes)
   return -VAR_2;
 }

 if (VAR_10->upd_marker)
  return -VAR_0;
 if (VAR_8 == 0)
  return 0;

 VAR_12 = FUNC_1(VAR_11, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_12 && VAR_12 == -VAR_1 && VAR_10->vol_type == VAR_3) {
  FUNC_2("mark volume %d as corrupted", VAR_13);
  VAR_10->corrupted = 1;
 }

 return VAR_12;
}
