
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_ec_hdr {void* hdr_crc; void* image_seq; void* data_offset; void* vid_hdr_offset; int version; void* magic; } ;
struct ubi_device {int peb_count; int ec_hdr_alsize; int image_seq; int leb_start; int vid_hdr_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ubi_ec_hdr*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ubi_device*,int,struct ubi_ec_hdr*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubi_device*,struct ubi_ec_hdr*,int,int ,int ) ;

int FUNC_6(struct ubi_device *VAR_5, int VAR_6,
   struct ubi_ec_hdr *VAR_7)
{
 int VAR_8;
 uint32_t VAR_9;

 FUNC_2("write EC header to PEB %d", VAR_6);
 FUNC_4(VAR_6 >= 0 && VAR_6 < VAR_5->peb_count);

 VAR_7->magic = FUNC_0(VAR_2);
 VAR_7->version = VAR_4;
 VAR_7->vid_hdr_offset = FUNC_0(VAR_5->vid_hdr_offset);
 VAR_7->data_offset = FUNC_0(VAR_5->leb_start);
 VAR_7->image_seq = FUNC_0(VAR_5->image_seq);
 VAR_9 = FUNC_1(VAR_1, VAR_7, VAR_3);
 VAR_7->hdr_crc = FUNC_0(VAR_9);

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_6, 0, VAR_5->ec_hdr_alsize);
 return VAR_8;
}
