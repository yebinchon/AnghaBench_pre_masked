
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mcast_address {struct mcast_address* next; int address; } ;
struct ether_header {int* ether_dhost; } ;
struct TYPE_2__ {int multicast; } ;
struct adapter {int macopts; int rcv_unicasts; TYPE_1__ stats; int rcv_multicasts; struct mcast_address* mcastaddrs; int rcv_broadcasts; } ;


 int FUNC_0 (int ,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_1(struct adapter *VAR_5,
   struct ether_header *VAR_6)
{
 u32 VAR_7 = VAR_5->macopts;
 u32 *VAR_8 = (u32 *)&VAR_6->ether_dhost[0];
 u16 *VAR_9 = (u16 *)&VAR_6->ether_dhost[4];
 bool VAR_10;

 if (VAR_7 & VAR_4)
  return 1;

 if ((*VAR_8 == 0xFFFFFFFF) && (*VAR_9 == 0xFFFF)) {
  if (VAR_7 & VAR_1) {
   VAR_5->rcv_broadcasts++;
   return 1;
  } else {
   return 0;
  }
 }

 if (VAR_6->ether_dhost[0] & 0x01) {
  if (VAR_7 & VAR_0) {
   VAR_5->rcv_multicasts++;
   VAR_5->stats.multicast++;
   return 1;
  }
  if (VAR_7 & VAR_3) {
   struct mcast_address *VAR_11 = VAR_5->mcastaddrs;

   while (VAR_11) {
    FUNC_0(VAR_11->address,
           VAR_6->ether_dhost,
           VAR_10);
    if (VAR_10) {
     VAR_5->rcv_multicasts++;
     VAR_5->stats.multicast++;
     return 1;
    }
    VAR_11 = VAR_11->next;
   }
   return 0;
  } else {
   return 0;
  }
 }
 if (VAR_7 & VAR_2) {
  VAR_5->rcv_unicasts++;
  return 1;
 }
 return 0;

}
