
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_volume {int* eba_tbl; } ;
struct ubi_vid_hdr {scalar_t__ vol_type; int copy_flag; int sqnum; void* data_crc; void* data_size; void* data_pad; void* lnum; void* vol_id; } ;
struct ubi_device {int leb_size; int buf_mutex; int peb_buf2; int peb_buf1; int volumes_lock; struct ubi_volume** volumes; int min_io_size; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,int,...) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct ubi_device*,int,int) ;
 int FUNC_9 (struct ubi_device*,int,int) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ubi_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct ubi_device*,int ,int) ;
 int FUNC_18 (struct ubi_device*,int ,int,int ,int) ;
 int FUNC_19 (struct ubi_device*,int,struct ubi_vid_hdr*,int) ;
 int FUNC_20 (struct ubi_device*,int ,int,int ,int) ;
 int FUNC_21 (struct ubi_device*,int,struct ubi_vid_hdr*) ;
 int FUNC_22 (char*,int,...) ;
 int FUNC_23 (struct ubi_device*,int) ;

int FUNC_24(struct ubi_device *VAR_11, int VAR_12, int VAR_13,
       struct ubi_vid_hdr *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 struct ubi_volume *VAR_21;
 uint32_t VAR_22;

 VAR_16 = FUNC_1(VAR_14->vol_id);
 VAR_17 = FUNC_1(VAR_14->lnum);

 FUNC_6("copy LEB %d:%d, PEB %d to PEB %d", VAR_16, VAR_17, VAR_12, VAR_13);

 if (VAR_14->vol_type == VAR_10) {
  VAR_18 = FUNC_1(VAR_14->data_size);
  VAR_19 = FUNC_0(VAR_18, VAR_11->min_io_size);
 } else
  VAR_18 = VAR_19 =
       VAR_11->leb_size - FUNC_1(VAR_14->data_pad);

 VAR_20 = FUNC_23(VAR_11, VAR_16);
 FUNC_14(&VAR_11->volumes_lock);






 VAR_21 = VAR_11->volumes[VAR_20];
 FUNC_15(&VAR_11->volumes_lock);
 if (!VAR_21) {

  FUNC_6("volume %d is being removed, cancel", VAR_16);
  return VAR_3;
 }
 VAR_15 = FUNC_8(VAR_11, VAR_16, VAR_17);
 if (VAR_15) {
  FUNC_6("contention on LEB %d:%d, cancel", VAR_16, VAR_17);
  return VAR_3;
 }






 if (VAR_21->eba_tbl[VAR_17] != VAR_12) {
  FUNC_6("LEB %d:%d is no longer mapped to PEB %d, mapped to "
         "PEB %d, cancel", VAR_16, VAR_17, VAR_12,
         VAR_21->eba_tbl[VAR_17]);
  VAR_15 = VAR_3;
  goto out_unlock_leb;
 }







 FUNC_11(&VAR_11->buf_mutex);
 FUNC_6("read %d bytes of data", VAR_19);
 VAR_15 = FUNC_18(VAR_11, VAR_11->peb_buf1, VAR_12, 0, VAR_19);
 if (VAR_15 && VAR_15 != VAR_8) {
  FUNC_22("error %d while reading data from PEB %d",
    VAR_15, VAR_12);
  VAR_15 = VAR_4;
  goto out_unlock_buf;
 }
 if (VAR_14->vol_type == VAR_9)
  VAR_19 = VAR_18 =
   FUNC_17(VAR_11, VAR_11->peb_buf1, VAR_18);

 FUNC_2();
 VAR_22 = FUNC_5(VAR_7, VAR_11->peb_buf1, VAR_18);
 FUNC_2();







 if (VAR_18 > 0) {
  VAR_14->copy_flag = 1;
  VAR_14->data_size = FUNC_3(VAR_18);
  VAR_14->data_crc = FUNC_3(VAR_22);
 }
 VAR_14->sqnum = FUNC_4(FUNC_13(VAR_11));

 VAR_15 = FUNC_21(VAR_11, VAR_13, VAR_14);
 if (VAR_15) {
  if (VAR_15 == -VAR_1)
   VAR_15 = VAR_6;
  goto out_unlock_buf;
 }

 FUNC_2();


 VAR_15 = FUNC_19(VAR_11, VAR_13, VAR_14, 1);
 if (VAR_15) {
  if (VAR_15 != VAR_8) {
   FUNC_22("error %d while reading VID header back from "
      "PEB %d", VAR_15, VAR_13);
   if (FUNC_7(VAR_15))
    VAR_15 = VAR_5;
  } else
   VAR_15 = VAR_2;
  goto out_unlock_buf;
 }

 if (VAR_18 > 0) {
  VAR_15 = FUNC_20(VAR_11, VAR_11->peb_buf1, VAR_13, 0, VAR_19);
  if (VAR_15) {
   if (VAR_15 == -VAR_1)
    VAR_15 = VAR_6;
   goto out_unlock_buf;
  }

  FUNC_2();






  VAR_15 = FUNC_18(VAR_11, VAR_11->peb_buf2, VAR_13, 0, VAR_19);
  if (VAR_15) {
   if (VAR_15 != VAR_8) {
    FUNC_22("error %d while reading data back "
      "from PEB %d", VAR_15, VAR_13);
    if (FUNC_7(VAR_15))
     VAR_15 = VAR_5;
   } else
    VAR_15 = VAR_2;
   goto out_unlock_buf;
  }

  FUNC_2();

  if (FUNC_10(VAR_11->peb_buf1, VAR_11->peb_buf2, VAR_19)) {
   FUNC_22("read data back from PEB %d and it is "
     "different", VAR_13);
   VAR_15 = -VAR_0;
   goto out_unlock_buf;
  }
 }

 FUNC_16(VAR_21->eba_tbl[VAR_17] == VAR_12);
 VAR_21->eba_tbl[VAR_17] = VAR_13;

out_unlock_buf:
 FUNC_12(&VAR_11->buf_mutex);
out_unlock_leb:
 FUNC_9(VAR_11, VAR_16, VAR_17);
 return VAR_15;
}
