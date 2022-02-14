
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nes_device {struct nes_adapter* nesadapter; } ;
struct nes_adapter {scalar_t__ arp_table_size; int allocated_arps; TYPE_1__* arp_table; int next_arp_index; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ ip_addr; int mac_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct nes_adapter*,int ,int,scalar_t__*,int *,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct nes_adapter*,int ,int) ;

int FUNC_6(struct nes_device *VAR_6, u32 VAR_7, u8 *VAR_8, u32 VAR_9)
{
 struct nes_adapter *VAR_10 = VAR_6->nesadapter;
 int VAR_11;
 int VAR_12 = 0;
 __be32 VAR_13;

 for (VAR_11 = 0; (u32) VAR_11 < VAR_10->arp_table_size; VAR_11++) {
  if (VAR_10->arp_table[VAR_11].ip_addr == VAR_7)
   break;
 }

 if (VAR_9 == VAR_1) {
  if (VAR_11 != VAR_10->arp_table_size) {
   return -1;
  }

  VAR_11 = 0;
  VAR_12 = FUNC_3(VAR_10, VAR_10->allocated_arps,
    VAR_10->arp_table_size, (u32 *)&VAR_11, &VAR_10->next_arp_index, VAR_5);
  if (VAR_12) {
   FUNC_4(VAR_4, "nes_alloc_resource returned error = %u\n", VAR_12);
   return VAR_12;
  }
  FUNC_4(VAR_4, "ADD, arp_index=%d\n", VAR_11);

  VAR_10->arp_table[VAR_11].ip_addr = VAR_7;
  FUNC_1(VAR_10->arp_table[VAR_11].mac_addr, VAR_8, VAR_0);
  return VAR_11;
 }


 if (VAR_11 == VAR_10->arp_table_size) {
  VAR_13 = FUNC_0(VAR_7);
  FUNC_4(VAR_4, "MAC for %pI4 not in ARP table - cannot %s\n",
     VAR_13, VAR_9 == VAR_3 ? "resolve" : "delete");
  return -1;
 }

 if (VAR_9 == VAR_3) {
  FUNC_4(VAR_4, "RESOLVE, arp_index=%d\n", VAR_11);
  return VAR_11;
 }

 if (VAR_9 == VAR_2) {
  FUNC_4(VAR_4, "DELETE, arp_index=%d\n", VAR_11);
  VAR_10->arp_table[VAR_11].ip_addr = 0;
  FUNC_2(VAR_10->arp_table[VAR_11].mac_addr, 0x00, VAR_0);
  FUNC_5(VAR_10, VAR_10->allocated_arps, VAR_11);
  return VAR_11;
 }

 return -1;
}
