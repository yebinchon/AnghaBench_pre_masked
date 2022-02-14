
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vtbl_record {int reserved_pebs; } ;
struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {int vol_id; int reserved_pebs; scalar_t__ vol_type; int used_ebs; int ref_count; int* eba_tbl; long long last_eb_bytes; long long usable_leb_size; long long used_bytes; struct ubi_device* ubi; } ;
struct ubi_device {int avail_pebs; int rsvd_pebs; int beb_rsvd_level; int beb_rsvd_pebs; int volumes_lock; int * vtbl; int ubi_num; scalar_t__ ro_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,int ,int,int,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ubi_vtbl_record*,int *,int) ;
 scalar_t__ FUNC_6 (struct ubi_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ubi_device*,int,struct ubi_vtbl_record*) ;
 int FUNC_10 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (struct ubi_device*,struct ubi_volume*,int ) ;

int FUNC_13(struct ubi_volume_desc *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14, *VAR_15;
 struct ubi_volume *VAR_16 = VAR_10->vol;
 struct ubi_device *VAR_17 = VAR_16->ubi;
 struct ubi_vtbl_record VAR_18;
 int VAR_19 = VAR_16->vol_id;

 if (VAR_17->ro_mode)
  return -VAR_4;

 FUNC_2("re-size device %d, volume %d to from %d to %d PEBs",
  VAR_17->ubi_num, VAR_19, VAR_16->reserved_pebs, VAR_11);

 if (VAR_16->vol_type == VAR_8 &&
     VAR_11 < VAR_16->used_ebs) {
  FUNC_1("too small size %d, %d LEBs contain data",
   VAR_11, VAR_16->used_ebs);
  return -VAR_1;
 }


 if (VAR_11 == VAR_16->reserved_pebs)
  return 0;

 VAR_15 = FUNC_4(VAR_11 * sizeof(int), VAR_5);
 if (!VAR_15)
  return -VAR_2;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_15[VAR_12] = VAR_7;

 FUNC_7(&VAR_17->volumes_lock);
 if (VAR_16->ref_count > 1) {
  FUNC_8(&VAR_17->volumes_lock);
  VAR_13 = -VAR_0;
  goto out_free;
 }
 FUNC_8(&VAR_17->volumes_lock);


 VAR_14 = VAR_11 - VAR_16->reserved_pebs;
 if (VAR_14 > 0) {
  FUNC_7(&VAR_17->volumes_lock);
  if (VAR_14 > VAR_17->avail_pebs) {
   FUNC_1("not enough PEBs: requested %d, available %d",
    VAR_14, VAR_17->avail_pebs);
   FUNC_8(&VAR_17->volumes_lock);
   VAR_13 = -VAR_3;
   goto out_free;
  }
  VAR_17->avail_pebs -= VAR_14;
  VAR_17->rsvd_pebs += VAR_14;
  for (VAR_12 = 0; VAR_12 < VAR_16->reserved_pebs; VAR_12++)
   VAR_15[VAR_12] = VAR_16->eba_tbl[VAR_12];
  FUNC_3(VAR_16->eba_tbl);
  VAR_16->eba_tbl = VAR_15;
  FUNC_8(&VAR_17->volumes_lock);
 }


 FUNC_5(&VAR_18, &VAR_17->vtbl[VAR_19], sizeof(struct ubi_vtbl_record));
 VAR_18.reserved_pebs = FUNC_0(VAR_11);
 VAR_13 = FUNC_9(VAR_17, VAR_19, &VAR_18);
 if (VAR_13)
  goto out_acc;

 if (VAR_14 < 0) {
  for (VAR_12 = 0; VAR_12 < -VAR_14; VAR_12++) {
   VAR_13 = FUNC_10(VAR_17, VAR_16, VAR_11 + VAR_12);
   if (VAR_13)
    goto out_acc;
  }
  FUNC_7(&VAR_17->volumes_lock);
  VAR_17->rsvd_pebs += VAR_14;
  VAR_17->avail_pebs -= VAR_14;
  VAR_14 = VAR_17->beb_rsvd_level - VAR_17->beb_rsvd_pebs;
  if (VAR_14 > 0) {
   VAR_14 = VAR_17->avail_pebs >= VAR_14 ? VAR_14 : VAR_17->avail_pebs;
   VAR_17->avail_pebs -= VAR_14;
   VAR_17->rsvd_pebs += VAR_14;
   VAR_17->beb_rsvd_pebs += VAR_14;
   if (VAR_14 > 0)
    FUNC_11("reserve more %d PEBs", VAR_14);
  }
  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   VAR_15[VAR_12] = VAR_16->eba_tbl[VAR_12];
  FUNC_3(VAR_16->eba_tbl);
  VAR_16->eba_tbl = VAR_15;
  FUNC_8(&VAR_17->volumes_lock);
 }

 VAR_16->reserved_pebs = VAR_11;
 if (VAR_16->vol_type == VAR_6) {
  VAR_16->used_ebs = VAR_11;
  VAR_16->last_eb_bytes = VAR_16->usable_leb_size;
  VAR_16->used_bytes =
   (long long)VAR_16->used_ebs * VAR_16->usable_leb_size;
 }

 FUNC_12(VAR_17, VAR_16, VAR_9);
 if (FUNC_6(VAR_17))
  FUNC_1("check failed while re-sizing volume %d", VAR_19);
 return VAR_13;

out_acc:
 if (VAR_14 > 0) {
  FUNC_7(&VAR_17->volumes_lock);
  VAR_17->rsvd_pebs -= VAR_14;
  VAR_17->avail_pebs += VAR_14;
  FUNC_8(&VAR_17->volumes_lock);
 }
out_free:
 FUNC_3(VAR_15);
 return VAR_13;
}
