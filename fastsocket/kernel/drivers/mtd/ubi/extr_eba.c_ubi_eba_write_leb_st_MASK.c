
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_volume {int vol_id; int data_pad; int* eba_tbl; } ;
struct ubi_vid_hdr {void* sqnum; void* data_crc; void* used_ebs; void* data_size; int vol_type; void* data_pad; int compat; void* lnum; void* vol_id; } ;
struct ubi_device {int bad_allowed; int min_io_size; scalar_t__ ro_mode; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void const*,int) ;
 int FUNC_4 (char*,int,int,int,int,int) ;
 int FUNC_5 (struct ubi_device*,int,int) ;
 int FUNC_6 (struct ubi_device*,int,int) ;
 int FUNC_7 (struct ubi_device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ubi_device*,struct ubi_vid_hdr*) ;
 int FUNC_10 (struct ubi_device*,int) ;
 int FUNC_11 (struct ubi_device*,void const*,int,int ,int) ;
 int FUNC_12 (struct ubi_device*,int,struct ubi_vid_hdr*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct ubi_device*) ;
 int FUNC_15 (char*,int,int,...) ;
 int FUNC_16 (struct ubi_device*,int) ;
 int FUNC_17 (struct ubi_device*,int,int) ;
 struct ubi_vid_hdr* FUNC_18 (struct ubi_device*,int ) ;

int FUNC_19(struct ubi_device *VAR_7, struct ubi_volume *VAR_8,
    int VAR_9, const void *VAR_10, int VAR_11, int VAR_12,
    int VAR_13)
{
 int VAR_14, VAR_15, VAR_16 = 0, VAR_17 = VAR_11, VAR_18 = VAR_8->vol_id;
 struct ubi_vid_hdr *VAR_19;
 uint32_t VAR_20;

 if (VAR_7->ro_mode)
  return -VAR_2;

 if (VAR_9 == VAR_13 - 1)

  VAR_11 = FUNC_0(VAR_17, VAR_7->min_io_size);
 else
  FUNC_8(!(VAR_11 & (VAR_7->min_io_size - 1)));

 VAR_19 = FUNC_18(VAR_7, VAR_3);
 if (!VAR_19)
  return -VAR_1;

 VAR_14 = FUNC_5(VAR_7, VAR_18, VAR_9);
 if (VAR_14) {
  FUNC_9(VAR_7, VAR_19);
  return VAR_14;
 }

 VAR_19->sqnum = FUNC_2(FUNC_7(VAR_7));
 VAR_19->vol_id = FUNC_1(VAR_18);
 VAR_19->lnum = FUNC_1(VAR_9);
 VAR_19->compat = FUNC_10(VAR_7, VAR_18);
 VAR_19->data_pad = FUNC_1(VAR_8->data_pad);

 VAR_20 = FUNC_3(VAR_4, VAR_10, VAR_17);
 VAR_19->vol_type = VAR_6;
 VAR_19->data_size = FUNC_1(VAR_17);
 VAR_19->used_ebs = FUNC_1(VAR_13);
 VAR_19->data_crc = FUNC_1(VAR_20);

retry:
 VAR_15 = FUNC_16(VAR_7, VAR_12);
 if (VAR_15 < 0) {
  FUNC_9(VAR_7, VAR_19);
  FUNC_6(VAR_7, VAR_18, VAR_9);
  return VAR_15;
 }

 FUNC_4("write VID hdr and %d bytes at LEB %d:%d, PEB %d, used_ebs %d",
  VAR_11, VAR_18, VAR_9, VAR_15, VAR_13);

 VAR_14 = FUNC_12(VAR_7, VAR_15, VAR_19);
 if (VAR_14) {
  FUNC_15("failed to write VID header to LEB %d:%d, PEB %d",
    VAR_18, VAR_9, VAR_15);
  goto write_error;
 }

 VAR_14 = FUNC_11(VAR_7, VAR_10, VAR_15, 0, VAR_11);
 if (VAR_14) {
  FUNC_15("failed to write %d bytes of data to PEB %d",
    VAR_11, VAR_15);
  goto write_error;
 }

 FUNC_8(VAR_8->eba_tbl[VAR_9] < 0);
 VAR_8->eba_tbl[VAR_9] = VAR_15;

 FUNC_6(VAR_7, VAR_18, VAR_9);
 FUNC_9(VAR_7, VAR_19);
 return 0;

write_error:
 if (VAR_14 != -VAR_0 || !VAR_7->bad_allowed) {





  FUNC_14(VAR_7);
  FUNC_6(VAR_7, VAR_18, VAR_9);
  FUNC_9(VAR_7, VAR_19);
  return VAR_14;
 }

 VAR_14 = FUNC_17(VAR_7, VAR_15, 1);
 if (VAR_14 || ++VAR_16 > VAR_5) {
  FUNC_14(VAR_7);
  FUNC_6(VAR_7, VAR_18, VAR_9);
  FUNC_9(VAR_7, VAR_19);
  return VAR_14;
 }

 VAR_19->sqnum = FUNC_2(FUNC_7(VAR_7));
 FUNC_13("try another PEB");
 goto retry;
}
