
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct ubi_vid_hdr {int data_crc; int data_size; int copy_flag; int sqnum; } ;
struct ubi_scan_leb {unsigned long long sqnum; int pnum; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 void* FUNC_2 (int ,void*,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct ubi_device*,struct ubi_vid_hdr*) ;
 int FUNC_7 (struct ubi_device*,void*,int,int ,int) ;
 int FUNC_8 (struct ubi_device*,int,struct ubi_vid_hdr*,int ) ;
 struct ubi_vid_hdr* FUNC_9 (struct ubi_device*,int ) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct ubi_device *VAR_7, const struct ubi_scan_leb *VAR_8,
   int VAR_9, const struct ubi_vid_hdr *VAR_10)
{
 void *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 0;
 uint32_t VAR_17, VAR_18;
 struct ubi_vid_hdr *VAR_19 = ((void*)0);
 unsigned long long VAR_20 = FUNC_1(VAR_10->sqnum);

 if (VAR_20 == VAR_8->sqnum) {
  FUNC_5("unsupported on-flash UBI format\n");
  return -VAR_1;
 }


 VAR_14 = !!(VAR_20 > VAR_8->sqnum);
 if (VAR_14) {
  if (!VAR_10->copy_flag) {

   FUNC_3("second PEB %d is newer, copy_flag is unset",
    VAR_9);
   return 1;
  }
 } else {
  VAR_9 = VAR_8->pnum;

  VAR_19 = FUNC_9(VAR_7, VAR_4);
  if (!VAR_19)
   return -VAR_3;

  VAR_13 = FUNC_8(VAR_7, VAR_9, VAR_19, 0);
  if (VAR_13) {
   if (VAR_13 == VAR_6)
    VAR_15 = 1;
   else {
    FUNC_4("VID of PEB %d header is bad, but it "
     "was OK earlier", VAR_9);
    if (VAR_13 > 0)
     VAR_13 = -VAR_2;

    goto out_free_vidh;
   }
  }

  if (!VAR_19->copy_flag) {

   FUNC_3("first PEB %d is newer, copy_flag is unset",
    VAR_9);
   VAR_13 = VAR_15 << 1;
   goto out_free_vidh;
  }

  VAR_10 = VAR_19;
 }



 VAR_12 = FUNC_0(VAR_10->data_size);
 VAR_11 = FUNC_11(VAR_12);
 if (!VAR_11) {
  VAR_13 = -VAR_3;
  goto out_free_vidh;
 }

 VAR_13 = FUNC_7(VAR_7, VAR_11, VAR_9, 0, VAR_12);
 if (VAR_13 && VAR_13 != VAR_6 && VAR_13 != -VAR_0)
  goto out_free_buf;

 VAR_17 = FUNC_0(VAR_10->data_crc);
 VAR_18 = FUNC_2(VAR_5, VAR_11, VAR_12);
 if (VAR_18 != VAR_17) {
  FUNC_3("PEB %d CRC error: calculated %#08x, must be %#08x",
   VAR_9, VAR_18, VAR_17);
  VAR_16 = 1;
  VAR_15 = 0;
  VAR_14 = !VAR_14;
 } else {
  FUNC_3("PEB %d CRC is OK", VAR_9);
  VAR_15 = !!VAR_13;
 }

 FUNC_10(VAR_11);
 FUNC_6(VAR_7, VAR_19);

 if (VAR_14)
  FUNC_3("second PEB %d is newer, copy_flag is set", VAR_9);
 else
  FUNC_3("first PEB %d is newer, copy_flag is set", VAR_9);

 return VAR_14 | (VAR_15 << 1) | (VAR_16 << 2);

out_free_buf:
 FUNC_10(VAR_11);
out_free_vidh:
 FUNC_6(VAR_7, VAR_19);
 return VAR_13;
}
