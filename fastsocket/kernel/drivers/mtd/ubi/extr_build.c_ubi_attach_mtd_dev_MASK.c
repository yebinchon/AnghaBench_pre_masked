
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; int notifier_call; } ;
struct ubi_device {int ubi_num; int vid_hdr_offset; int autoresize_vol_id; int flash_size; int good_peb_count; int bad_peb_count; int vtbl_slots; int vol_count; int avail_pebs; int rsvd_pebs; int beb_rsvd_pebs; int image_seq; int thread_enabled; void* dbg_peb_buf; void* peb_buf2; void* peb_buf1; void* vtbl; TYPE_1__ reboot_notifier; int wl_lock; int bgt_thread; int mean_ec; int max_ec; int bgt_name; int peb_size; int dbg_buf_mutex; int volumes_lock; int device_mutex; int ckvol_mutex; int buf_mutex; struct mtd_info* mtd; } ;
struct mtd_info {scalar_t__ index; scalar_t__ type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ubi_device*) ;
 int FUNC_3 (struct ubi_device*,int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (struct ubi_device*) ;
 int FUNC_6 (struct ubi_device*) ;
 int FUNC_7 (struct ubi_device*) ;
 int FUNC_8 (struct ubi_device*) ;
 int FUNC_9 (int ,struct ubi_device*,int ) ;
 struct ubi_device* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct ubi_device** VAR_12 ;
 int FUNC_16 (char*,scalar_t__,...) ;
 int FUNC_17 (char*,int,...) ;
 int FUNC_18 (struct ubi_device*,int ,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (struct ubi_device*) ;
 int FUNC_20 (struct ubi_device*) ;
 int FUNC_21 (struct ubi_device*) ;
 int FUNC_22 (void*) ;
 void* FUNC_23 (int ) ;
 int FUNC_24 (int ) ;

int FUNC_25(struct mtd_info *VAR_15, int VAR_16, int VAR_17)
{
 struct ubi_device *VAR_18;
 int VAR_19, VAR_20, VAR_21 = 1;







 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_18 = VAR_12[VAR_19];
  if (VAR_18 && VAR_15->index == VAR_18->mtd->index) {
   FUNC_4("mtd%d is already attached to ubi%d",
    VAR_15->index, VAR_19);
   return -VAR_2;
  }
 }
 if (VAR_15->type == VAR_7) {
  FUNC_16("refuse attaching mtd%d - it is already emulated on "
   "top of UBI", VAR_15->index);
  return -VAR_3;
 }

 if (VAR_16 == VAR_8) {

  for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
   if (!VAR_12[VAR_16])
    break;
  if (VAR_16 == VAR_10) {
   FUNC_4("only %d UBI devices may be created",
    VAR_10);
   return -VAR_4;
  }
 } else {
  if (VAR_16 >= VAR_10)
   return -VAR_3;


  if (VAR_12[VAR_16]) {
   FUNC_4("ubi%d already exists", VAR_16);
   return -VAR_2;
  }
 }

 VAR_18 = FUNC_10(sizeof(struct ubi_device), VAR_6);
 if (!VAR_18)
  return -VAR_5;

 VAR_18->mtd = VAR_15;
 VAR_18->ubi_num = VAR_16;
 VAR_18->vid_hdr_offset = VAR_17;
 VAR_18->autoresize_vol_id = -1;

 FUNC_11(&VAR_18->buf_mutex);
 FUNC_11(&VAR_18->ckvol_mutex);
 FUNC_11(&VAR_18->device_mutex);
 FUNC_14(&VAR_18->volumes_lock);

 FUNC_17("attaching mtd%d to ubi%d", VAR_15->index, VAR_16);

 VAR_20 = FUNC_7(VAR_18);
 if (VAR_20)
  goto out_free;

 VAR_20 = -VAR_5;
 VAR_18->peb_buf1 = FUNC_23(VAR_18->peb_size);
 if (!VAR_18->peb_buf1)
  goto out_free;

 VAR_18->peb_buf2 = FUNC_23(VAR_18->peb_size);
 if (!VAR_18->peb_buf2)
  goto out_free;
 VAR_20 = FUNC_2(VAR_18);
 if (VAR_20) {
  FUNC_4("failed to attach by scanning, error %d", VAR_20);
  goto out_free;
 }

 if (VAR_18->autoresize_vol_id != -1) {
  VAR_20 = FUNC_3(VAR_18, VAR_18->autoresize_vol_id);
  if (VAR_20)
   goto out_detach;
 }

 VAR_20 = FUNC_21(VAR_18);
 if (VAR_20)
  goto out_nofree;

 VAR_18->bgt_thread = FUNC_9(VAR_14, VAR_18, VAR_18->bgt_name);
 if (FUNC_0(VAR_18->bgt_thread)) {
  VAR_20 = FUNC_1(VAR_18->bgt_thread);
  FUNC_16("cannot spawn \"%s\", error %d", VAR_18->bgt_name,
   VAR_20);
  goto out_uif;
 }

 FUNC_17("attached mtd%d to ubi%d", VAR_15->index, VAR_16);
 FUNC_17("MTD device name:            \"%s\"", VAR_15->name);
 FUNC_17("MTD device size:            %llu MiB", VAR_18->flash_size >> 20);
 FUNC_17("number of good PEBs:        %d", VAR_18->good_peb_count);
 FUNC_17("number of bad PEBs:         %d", VAR_18->bad_peb_count);
 FUNC_17("max. allowed volumes:       %d", VAR_18->vtbl_slots);
 FUNC_17("wear-leveling threshold:    %d", VAR_0);
 FUNC_17("number of internal volumes: %d", VAR_9);
 FUNC_17("number of user volumes:     %d",
  VAR_18->vol_count - VAR_9);
 FUNC_17("available PEBs:             %d", VAR_18->avail_pebs);
 FUNC_17("total number of reserved PEBs: %d", VAR_18->rsvd_pebs);
 FUNC_17("number of PEBs reserved for bad PEB handling: %d",
  VAR_18->beb_rsvd_pebs);
 FUNC_17("max/mean erase counter: %d/%d", VAR_18->max_ec, VAR_18->mean_ec);
 FUNC_17("image sequence number: %d", VAR_18->image_seq);





 FUNC_13(&VAR_18->wl_lock);
 if (!VAR_1)
  VAR_18->thread_enabled = 1;
 FUNC_24(VAR_18->bgt_thread);
 FUNC_15(&VAR_18->wl_lock);


 VAR_18->reboot_notifier.priority = 1;
 VAR_18->reboot_notifier.notifier_call = VAR_13;
 FUNC_12(&VAR_18->reboot_notifier);

 VAR_12[VAR_16] = VAR_18;
 FUNC_18(VAR_18, VAR_11, ((void*)0));
 return VAR_16;

out_uif:
 FUNC_20(VAR_18);
out_nofree:
 VAR_21 = 0;
out_detach:
 FUNC_19(VAR_18);
 if (VAR_21)
  FUNC_6(VAR_18);
 FUNC_5(VAR_18);
 FUNC_22(VAR_18->vtbl);
out_free:
 FUNC_22(VAR_18->peb_buf1);
 FUNC_22(VAR_18->peb_buf2);



 FUNC_8(VAR_18);
 return VAR_20;
}
