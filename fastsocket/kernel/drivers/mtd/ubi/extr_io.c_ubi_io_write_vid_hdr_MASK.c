
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_vid_hdr {void* hdr_crc; int version; void* magic; } ;
struct ubi_device {int peb_count; char* vid_hdr_shift; int vid_hdr_alsize; int vid_hdr_aloffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ubi_vid_hdr*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ubi_device*,int) ;
 int FUNC_4 (struct ubi_device*,int,struct ubi_vid_hdr*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ubi_device*,void*,int,int ,int ) ;

int FUNC_7(struct ubi_device *VAR_5, int VAR_6,
    struct ubi_vid_hdr *VAR_7)
{
 int VAR_8;
 uint32_t VAR_9;
 void *VAR_10;

 FUNC_2("write VID header to PEB %d", VAR_6);
 FUNC_5(VAR_6 >= 0 && VAR_6 < VAR_5->peb_count);

 VAR_8 = FUNC_3(VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8 > 0 ? -VAR_0 : VAR_8;

 VAR_7->magic = FUNC_0(VAR_3);
 VAR_7->version = VAR_2;
 VAR_9 = FUNC_1(VAR_1, VAR_7, VAR_4);
 VAR_7->hdr_crc = FUNC_0(VAR_9);

 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return -VAR_0;

 VAR_10 = (char *)VAR_7 - VAR_5->vid_hdr_shift;
 VAR_8 = FUNC_6(VAR_5, VAR_10, VAR_6, VAR_5->vid_hdr_aloffset,
      VAR_5->vid_hdr_alsize);
 return VAR_8;
}
