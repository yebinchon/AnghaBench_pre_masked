
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {scalar_t__ used_bytes; int vol_id; scalar_t__ updating; } ;
struct file {scalar_t__ f_pos; struct ubi_volume_desc* private_data; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct ubi_volume_desc *VAR_5 = VAR_2->private_data;
 struct ubi_volume *VAR_6 = VAR_5->vol;
 loff_t VAR_7;

 if (VAR_6->updating) {

  FUNC_0("updating");
  return -VAR_0;
 }

 switch (VAR_4) {
 case 0:
  VAR_7 = VAR_3;
  break;
 case 1:
  VAR_7 = VAR_2->f_pos + VAR_3;
  break;
 case 2:
  VAR_7 = VAR_6->used_bytes + VAR_3;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_7 < 0 || VAR_7 > VAR_6->used_bytes) {
  FUNC_0("bad seek %lld", VAR_7);
  return -VAR_1;
 }

 FUNC_1("seek volume %d, offset %lld, origin %d, new offset %lld",
  VAR_6->vol_id, VAR_3, VAR_4, VAR_7);

 VAR_2->f_pos = VAR_7;
 return VAR_7;
}
