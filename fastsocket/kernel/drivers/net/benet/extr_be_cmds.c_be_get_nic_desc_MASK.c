
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct be_res_desc_hdr {scalar_t__ desc_type; int desc_len; } ;
struct be_nic_res_desc {int dummy; } ;


 scalar_t__ NIC_RESOURCE_DESC_TYPE_V0 ;
 scalar_t__ NIC_RESOURCE_DESC_TYPE_V1 ;
 int RESOURCE_DESC_SIZE_V0 ;

__attribute__((used)) static struct be_nic_res_desc *be_get_nic_desc(u8 *buf, u32 desc_count)
{
 struct be_res_desc_hdr *hdr = (struct be_res_desc_hdr *)buf;
 int i;

 for (i = 0; i < desc_count; i++) {
  if (hdr->desc_type == NIC_RESOURCE_DESC_TYPE_V0 ||
      hdr->desc_type == NIC_RESOURCE_DESC_TYPE_V1)
   return (struct be_nic_res_desc *)hdr;

  hdr->desc_len = hdr->desc_len ? : RESOURCE_DESC_SIZE_V0;
  hdr = (void *)hdr + hdr->desc_len;
 }
 return ((void*)0);
}
