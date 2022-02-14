
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int updating; int reserved_pebs; long long upd_bytes; scalar_t__ upd_received; scalar_t__ usable_leb_size; int upd_ebs; int upd_buf; int changing_leb; int vol_id; } ;
struct ubi_device {int leb_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubi_device*,struct ubi_volume*,int ) ;
 int FUNC_1 (char*,int ,long long) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ubi_device*,struct ubi_volume*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_6 (struct ubi_device*) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct ubi_device *VAR_1, struct ubi_volume *VAR_2,
       long long VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1("start update of volume %d, %llu bytes", VAR_2->vol_id, VAR_3);
 FUNC_4(!VAR_2->updating && !VAR_2->changing_leb);
 VAR_2->updating = 1;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_2->reserved_pebs; VAR_4++) {
  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_3 == 0) {
  VAR_5 = FUNC_6(VAR_1);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_1, VAR_2, 0);
  if (VAR_5)
   return VAR_5;
  VAR_2->updating = 0;
  return 0;
 }

 VAR_2->upd_buf = FUNC_7(VAR_1->leb_size);
 if (!VAR_2->upd_buf)
  return -VAR_0;

 VAR_2->upd_ebs = FUNC_2(VAR_3 + VAR_2->usable_leb_size - 1,
          VAR_2->usable_leb_size);
 VAR_2->upd_bytes = VAR_3;
 VAR_2->upd_received = 0;
 return 0;
}
