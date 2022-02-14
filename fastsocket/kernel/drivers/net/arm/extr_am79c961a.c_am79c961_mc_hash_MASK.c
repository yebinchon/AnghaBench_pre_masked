
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dev_mc_list {scalar_t__ dmi_addrlen; int* dmi_addr; } ;


 scalar_t__ ETH_ALEN ;
 int ether_crc_le (scalar_t__,int*) ;

__attribute__((used)) static void am79c961_mc_hash(struct dev_mc_list *dmi, unsigned short *hash)
{
 if (dmi->dmi_addrlen == ETH_ALEN && dmi->dmi_addr[0] & 0x01) {
  int idx, bit;
  u32 crc;

  crc = ether_crc_le(ETH_ALEN, dmi->dmi_addr);

  idx = crc >> 30;
  bit = (crc >> 26) & 15;

  hash[idx] |= 1 << bit;
 }
}
