
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_volume {int vol_id; int data_pad; int* eba_tbl; } ;
struct ubi_vid_hdr {int copy_flag; void* sqnum; void* data_crc; void* data_size; int vol_type; void* data_pad; int compat; void* lnum; void* vol_id; } ;
struct ubi_device {int bad_allowed; int alc_mutex; scalar_t__ ro_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void const*,int) ;
 int FUNC_3 (char*,int,int,int,int) ;
 int FUNC_4 (struct ubi_device*,int,int) ;
 int FUNC_5 (struct ubi_device*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubi_device*) ;
 int FUNC_9 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_10 (struct ubi_device*,struct ubi_volume*,int,int *,int ,int ,int) ;
 int FUNC_11 (struct ubi_device*,struct ubi_vid_hdr*) ;
 int FUNC_12 (struct ubi_device*,int) ;
 int FUNC_13 (struct ubi_device*,void const*,int,int ,int) ;
 int FUNC_14 (struct ubi_device*,int,struct ubi_vid_hdr*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct ubi_device*) ;
 int FUNC_17 (char*,int,int,...) ;
 int FUNC_18 (struct ubi_device*,int) ;
 int FUNC_19 (struct ubi_device*,int,int) ;
 struct ubi_vid_hdr* FUNC_20 (struct ubi_device*,int ) ;

int FUNC_21(struct ubi_device *VAR_7, struct ubi_volume *VAR_8,
         int VAR_9, const void *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = 0, VAR_16 = VAR_8->vol_id;
 struct ubi_vid_hdr *VAR_17;
 uint32_t VAR_18;

 if (VAR_7->ro_mode)
  return -VAR_2;

 if (VAR_11 == 0) {




  VAR_13 = FUNC_9(VAR_7, VAR_8, VAR_9);
  if (VAR_13)
   return VAR_13;
  return FUNC_10(VAR_7, VAR_8, VAR_9, ((void*)0), 0, 0, VAR_12);
 }

 VAR_17 = FUNC_20(VAR_7, VAR_3);
 if (!VAR_17)
  return -VAR_1;

 FUNC_6(&VAR_7->alc_mutex);
 VAR_13 = FUNC_4(VAR_7, VAR_16, VAR_9);
 if (VAR_13)
  goto out_mutex;

 VAR_17->sqnum = FUNC_1(FUNC_8(VAR_7));
 VAR_17->vol_id = FUNC_0(VAR_16);
 VAR_17->lnum = FUNC_0(VAR_9);
 VAR_17->compat = FUNC_12(VAR_7, VAR_16);
 VAR_17->data_pad = FUNC_0(VAR_8->data_pad);

 VAR_18 = FUNC_2(VAR_4, VAR_10, VAR_11);
 VAR_17->vol_type = VAR_6;
 VAR_17->data_size = FUNC_0(VAR_11);
 VAR_17->copy_flag = 1;
 VAR_17->data_crc = FUNC_0(VAR_18);

retry:
 VAR_14 = FUNC_18(VAR_7, VAR_12);
 if (VAR_14 < 0) {
  VAR_13 = VAR_14;
  goto out_leb_unlock;
 }

 FUNC_3("change LEB %d:%d, PEB %d, write VID hdr to PEB %d",
  VAR_16, VAR_9, VAR_8->eba_tbl[VAR_9], VAR_14);

 VAR_13 = FUNC_14(VAR_7, VAR_14, VAR_17);
 if (VAR_13) {
  FUNC_17("failed to write VID header to LEB %d:%d, PEB %d",
    VAR_16, VAR_9, VAR_14);
  goto write_error;
 }

 VAR_13 = FUNC_13(VAR_7, VAR_10, VAR_14, 0, VAR_11);
 if (VAR_13) {
  FUNC_17("failed to write %d bytes of data to PEB %d",
    VAR_11, VAR_14);
  goto write_error;
 }

 if (VAR_8->eba_tbl[VAR_9] >= 0) {
  VAR_13 = FUNC_19(VAR_7, VAR_8->eba_tbl[VAR_9], 0);
  if (VAR_13)
   goto out_leb_unlock;
 }

 VAR_8->eba_tbl[VAR_9] = VAR_14;

out_leb_unlock:
 FUNC_5(VAR_7, VAR_16, VAR_9);
out_mutex:
 FUNC_7(&VAR_7->alc_mutex);
 FUNC_11(VAR_7, VAR_17);
 return VAR_13;

write_error:
 if (VAR_13 != -VAR_0 || !VAR_7->bad_allowed) {





  FUNC_16(VAR_7);
  goto out_leb_unlock;
 }

 VAR_13 = FUNC_19(VAR_7, VAR_14, 1);
 if (VAR_13 || ++VAR_15 > VAR_5) {
  FUNC_16(VAR_7);
  goto out_leb_unlock;
 }

 VAR_17->sqnum = FUNC_1(FUNC_8(VAR_7));
 FUNC_15("try another PEB");
 goto retry;
}
