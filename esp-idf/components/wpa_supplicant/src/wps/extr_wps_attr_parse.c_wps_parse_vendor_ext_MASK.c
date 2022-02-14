
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wps_parse_attr {int num_vendor_ext; int* vendor_ext_len; int const** vendor_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int VAR_2 ;

 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wps_parse_attr*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct wps_parse_attr *VAR_3, const u8 *VAR_4,
    u16 VAR_5)
{
 u32 VAR_6;

 if (VAR_5 < 3) {
  FUNC_1(VAR_1, "WPS: Skip invalid Vendor Extension");
  return 0;
 }

 VAR_6 = FUNC_0(VAR_4);
 switch (VAR_6) {
 case 128:
  return FUNC_2(VAR_3, VAR_4 + 3, VAR_5 - 3);
 }



 FUNC_1(VAR_1, "WPS: Unknown Vendor Extension (Vendor ID %u)",
     VAR_6);

 if (VAR_5 > VAR_2) {
  FUNC_1(VAR_1, "WPS: Too long Vendor Extension (%u)",
      VAR_5);
  return -1;
 }

 if (VAR_3->num_vendor_ext >= VAR_0) {
  FUNC_1(VAR_1, "WPS: Skipped Vendor Extension "
      "attribute (max %d vendor extensions)",
      VAR_0);
  return -1;
 }
 VAR_3->vendor_ext[VAR_3->num_vendor_ext] = VAR_4;
 VAR_3->vendor_ext_len[VAR_3->num_vendor_ext] = VAR_5;
 VAR_3->num_vendor_ext++;

 return 0;
}
