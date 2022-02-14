
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int vol_id; int* eba_tbl; int data_pad; } ;
struct ubi_vid_hdr {void* sqnum; void* data_pad; int compat; void* lnum; void* vol_id; int vol_type; } ;
struct ubi_device {scalar_t__ bad_allowed; scalar_t__ ro_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int,int,int) ;
 int FUNC_3 (struct ubi_device*,int,int) ;
 int FUNC_4 (struct ubi_device*,int,int) ;
 int FUNC_5 (struct ubi_device*) ;
 int FUNC_6 (struct ubi_device*,int,int,int,void const*,int,int) ;
 int FUNC_7 (struct ubi_device*,struct ubi_vid_hdr*) ;
 int FUNC_8 (struct ubi_device*,int) ;
 int FUNC_9 (struct ubi_device*,void const*,int,int,int) ;
 int FUNC_10 (struct ubi_device*,int,struct ubi_vid_hdr*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct ubi_device*) ;
 int FUNC_13 (char*,int,...) ;
 int FUNC_14 (struct ubi_device*,int) ;
 int FUNC_15 (struct ubi_device*,int,int) ;
 struct ubi_vid_hdr* FUNC_16 (struct ubi_device*,int ) ;

int FUNC_17(struct ubi_device *VAR_6, struct ubi_volume *VAR_7, int VAR_8,
        const void *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = 0, VAR_16 = VAR_7->vol_id;
 struct ubi_vid_hdr *VAR_17;

 if (VAR_6->ro_mode)
  return -VAR_2;

 VAR_13 = FUNC_3(VAR_6, VAR_16, VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_14 = VAR_7->eba_tbl[VAR_8];
 if (VAR_14 >= 0) {
  FUNC_2("write %d bytes at offset %d of LEB %d:%d, PEB %d",
   VAR_11, VAR_10, VAR_16, VAR_8, VAR_14);

  VAR_13 = FUNC_9(VAR_6, VAR_9, VAR_14, VAR_10, VAR_11);
  if (VAR_13) {
   FUNC_13("failed to write data to PEB %d", VAR_14);
   if (VAR_13 == -VAR_0 && VAR_6->bad_allowed)
    VAR_13 = FUNC_6(VAR_6, VAR_14, VAR_16, VAR_8, VAR_9,
        VAR_10, VAR_11);
   if (VAR_13)
    FUNC_12(VAR_6);
  }
  FUNC_4(VAR_6, VAR_16, VAR_8);
  return VAR_13;
 }





 VAR_17 = FUNC_16(VAR_6, VAR_3);
 if (!VAR_17) {
  FUNC_4(VAR_6, VAR_16, VAR_8);
  return -VAR_1;
 }

 VAR_17->vol_type = VAR_5;
 VAR_17->sqnum = FUNC_1(FUNC_5(VAR_6));
 VAR_17->vol_id = FUNC_0(VAR_16);
 VAR_17->lnum = FUNC_0(VAR_8);
 VAR_17->compat = FUNC_8(VAR_6, VAR_16);
 VAR_17->data_pad = FUNC_0(VAR_7->data_pad);

retry:
 VAR_14 = FUNC_14(VAR_6, VAR_12);
 if (VAR_14 < 0) {
  FUNC_7(VAR_6, VAR_17);
  FUNC_4(VAR_6, VAR_16, VAR_8);
  return VAR_14;
 }

 FUNC_2("write VID hdr and %d bytes at offset %d of LEB %d:%d, PEB %d",
  VAR_11, VAR_10, VAR_16, VAR_8, VAR_14);

 VAR_13 = FUNC_10(VAR_6, VAR_14, VAR_17);
 if (VAR_13) {
  FUNC_13("failed to write VID header to LEB %d:%d, PEB %d",
    VAR_16, VAR_8, VAR_14);
  goto write_error;
 }

 if (VAR_11) {
  VAR_13 = FUNC_9(VAR_6, VAR_9, VAR_14, VAR_10, VAR_11);
  if (VAR_13) {
   FUNC_13("failed to write %d bytes at offset %d of "
     "LEB %d:%d, PEB %d", VAR_11, VAR_10, VAR_16,
     VAR_8, VAR_14);
   goto write_error;
  }
 }

 VAR_7->eba_tbl[VAR_8] = VAR_14;

 FUNC_4(VAR_6, VAR_16, VAR_8);
 FUNC_7(VAR_6, VAR_17);
 return 0;

write_error:
 if (VAR_13 != -VAR_0 || !VAR_6->bad_allowed) {
  FUNC_12(VAR_6);
  FUNC_4(VAR_6, VAR_16, VAR_8);
  FUNC_7(VAR_6, VAR_17);
  return VAR_13;
 }






 VAR_13 = FUNC_15(VAR_6, VAR_14, 1);
 if (VAR_13 || ++VAR_15 > VAR_4) {
  FUNC_12(VAR_6);
  FUNC_4(VAR_6, VAR_16, VAR_8);
  FUNC_7(VAR_6, VAR_17);
  return VAR_13;
 }

 VAR_17->sqnum = FUNC_1(FUNC_5(VAR_6));
 FUNC_11("try another PEB");
 goto retry;
}
