
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int* eba_tbl; } ;
struct ubi_vid_hdr {int sqnum; } ;
struct ubi_device {int buf_mutex; scalar_t__ peb_buf1; struct ubi_volume** volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,void const*,int) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubi_device*) ;
 int FUNC_6 (struct ubi_device*,struct ubi_vid_hdr*) ;
 int FUNC_7 (struct ubi_device*,scalar_t__,int,int ,int) ;
 int FUNC_8 (struct ubi_device*,int,struct ubi_vid_hdr*,int) ;
 int FUNC_9 (struct ubi_device*,scalar_t__,int,int ,int) ;
 int FUNC_10 (struct ubi_device*,int,struct ubi_vid_hdr*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (struct ubi_device*,int ) ;
 int FUNC_14 (struct ubi_device*,int,int) ;
 struct ubi_vid_hdr* FUNC_15 (struct ubi_device*,int ) ;
 int FUNC_16 (struct ubi_device*,int) ;

__attribute__((used)) static int FUNC_17(struct ubi_device *VAR_6, int VAR_7, int VAR_8, int VAR_9,
         const void *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14 = FUNC_16(VAR_6, VAR_8), VAR_15, VAR_16, VAR_17 = 0;
 struct ubi_volume *VAR_18 = VAR_6->volumes[VAR_14];
 struct ubi_vid_hdr *VAR_19;

 VAR_19 = FUNC_15(VAR_6, VAR_2);
 if (!VAR_19)
  return -VAR_1;

retry:
 VAR_15 = FUNC_13(VAR_6, VAR_5);
 if (VAR_15 < 0) {
  FUNC_6(VAR_6, VAR_19);
  return VAR_15;
 }

 FUNC_11("recover PEB %d, move data to PEB %d", VAR_7, VAR_15);

 VAR_13 = FUNC_8(VAR_6, VAR_7, VAR_19, 1);
 if (VAR_13 && VAR_13 != VAR_3) {
  if (VAR_13 > 0)
   VAR_13 = -VAR_0;
  goto out_put;
 }

 VAR_19->sqnum = FUNC_0(FUNC_5(VAR_6));
 VAR_13 = FUNC_10(VAR_6, VAR_15, VAR_19);
 if (VAR_13)
  goto write_error;

 VAR_16 = VAR_11 + VAR_12;
 FUNC_3(&VAR_6->buf_mutex);
 FUNC_2(VAR_6->peb_buf1 + VAR_11, 0xFF, VAR_12);


 if (VAR_11 > 0) {
  VAR_13 = FUNC_7(VAR_6, VAR_6->peb_buf1, VAR_7, 0, VAR_11);
  if (VAR_13 && VAR_13 != VAR_3)
   goto out_unlock;
 }

 FUNC_1(VAR_6->peb_buf1 + VAR_11, VAR_10, VAR_12);

 VAR_13 = FUNC_9(VAR_6, VAR_6->peb_buf1, VAR_15, 0, VAR_16);
 if (VAR_13) {
  FUNC_4(&VAR_6->buf_mutex);
  goto write_error;
 }

 FUNC_4(&VAR_6->buf_mutex);
 FUNC_6(VAR_6, VAR_19);

 VAR_18->eba_tbl[VAR_9] = VAR_15;
 FUNC_14(VAR_6, VAR_7, 1);

 FUNC_11("data was successfully recovered");
 return 0;

out_unlock:
 FUNC_4(&VAR_6->buf_mutex);
out_put:
 FUNC_14(VAR_6, VAR_15, 1);
 FUNC_6(VAR_6, VAR_19);
 return VAR_13;

write_error:




 FUNC_12("failed to write to PEB %d", VAR_15);
 FUNC_14(VAR_6, VAR_15, 1);
 if (++VAR_17 > VAR_4) {
  FUNC_6(VAR_6, VAR_19);
  return VAR_13;
 }
 FUNC_11("try again");
 goto retry;
}
