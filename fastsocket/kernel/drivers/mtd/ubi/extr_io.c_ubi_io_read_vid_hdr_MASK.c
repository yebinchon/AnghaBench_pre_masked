
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ubi_vid_hdr {int hdr_crc; int magic; } ;
struct ubi_device {int peb_count; char* vid_hdr_shift; int vid_hdr_alsize; int vid_hdr_aloffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ubi_vid_hdr*,int,int ) ;
 scalar_t__ FUNC_2 (int ,struct ubi_vid_hdr*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ubi_vid_hdr*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct ubi_device*,void*,int,int ,int ) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (struct ubi_device*,struct ubi_vid_hdr*) ;

int FUNC_11(struct ubi_device *VAR_10, int VAR_11,
   struct ubi_vid_hdr *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15 = 0;
 uint32_t VAR_16, VAR_17, VAR_18;
 void *VAR_19;

 FUNC_3("read VID header from PEB %d", VAR_11);
 FUNC_5(VAR_11 >= 0 && VAR_11 < VAR_10->peb_count);

 VAR_19 = (char *)VAR_12 - VAR_10->vid_hdr_shift;
 VAR_14 = FUNC_8(VAR_10, VAR_19, VAR_11, VAR_10->vid_hdr_aloffset,
     VAR_10->vid_hdr_alsize);
 if (VAR_14) {
  if (VAR_14 != VAR_4 && VAR_14 != -VAR_0)
   return VAR_14;
  VAR_15 = VAR_14;
 }

 VAR_17 = FUNC_0(VAR_12->magic);
 if (VAR_17 != VAR_7) {
  if (VAR_15 != -VAR_0 &&
      FUNC_1(VAR_12, 0xFF, VAR_8)) {

   if (VAR_13)
    FUNC_9("no VID header found at PEB %d, "
      "only 0xFF bytes", VAR_11);
   else if (VAR_5)
    FUNC_4("no VID header found at PEB %d, "
     "only 0xFF bytes", VAR_11);
   return VAR_6;
  }





  if (VAR_13) {
   FUNC_9("bad magic number at PEB %d: %08x instead of "
     "%08x", VAR_11, VAR_17, VAR_7);
   FUNC_6(VAR_12);
  } else if (VAR_5)
   FUNC_4("bad magic number at PEB %d: %08x instead of "
    "%08x", VAR_11, VAR_17, VAR_7);
  return VAR_3;
 }

 VAR_16 = FUNC_2(VAR_2, VAR_12, VAR_9);
 VAR_18 = FUNC_0(VAR_12->hdr_crc);

 if (VAR_18 != VAR_16) {
  if (VAR_13) {
   FUNC_9("bad CRC at PEB %d, calculated %#08x, "
     "read %#08x", VAR_11, VAR_16, VAR_18);
   FUNC_6(VAR_12);
  } else if (VAR_5)
   FUNC_4("bad CRC at PEB %d, calculated %#08x, "
    "read %#08x", VAR_11, VAR_16, VAR_18);
  return VAR_3;
 }


 VAR_14 = FUNC_10(VAR_10, VAR_12);
 if (VAR_14) {
  FUNC_7("validation failed for PEB %d", VAR_11);
  return -VAR_1;
 }

 return VAR_15 ? VAR_4 : 0;
}
