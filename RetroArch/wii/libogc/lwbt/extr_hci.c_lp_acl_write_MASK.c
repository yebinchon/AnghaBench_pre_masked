
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u16_t ;
struct pbuf {int len; scalar_t__ payload; } ;
struct hci_link {int len; int pb; int connhdl; struct pbuf* p; } ;
struct hci_acl_hdr {void* len; void* connhdl_pb_bc; } ;
struct bd_addr {int dummy; } ;
typedef int err_t ;
struct TYPE_2__ {scalar_t__ acl_max_pkt; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 struct pbuf* FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct pbuf*,struct pbuf*) ;
 struct pbuf* FUNC_4 (struct pbuf*) ;
 int FUNC_5 (struct pbuf*) ;
 int FUNC_6 (struct pbuf*) ;
 struct pbuf* FUNC_7 (struct pbuf*) ;
 TYPE_1__* VAR_7 ;
 struct hci_link* FUNC_8 (struct bd_addr*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct pbuf*,int) ;

err_t FUNC_11(struct bd_addr *VAR_8,struct pbuf *VAR_9,u16_t VAR_10,u8_t VAR_11)
{
 u16_t VAR_12;
 struct hci_link *VAR_13;
 struct hci_acl_hdr *VAR_14;
 struct pbuf *VAR_15;

 VAR_13 = FUNC_8(VAR_8);
 if(VAR_13==((void*)0)) {
  FUNC_0("lp_acl_write: ACL connection does not exist\n");
  return VAR_0;
 }

 if(VAR_7->acl_max_pkt==0) {
  if(VAR_9 != ((void*)0)) {

   if(VAR_13->p != ((void*)0)) {
    FUNC_1("lp_acl_write: Host buffer full. Dropped packet\n");
    return VAR_2;
   } else {

    VAR_9 = FUNC_7(VAR_9);

    VAR_13->p = VAR_9;
    VAR_13->len = VAR_10;
    VAR_13->pb = VAR_11;

    FUNC_6(VAR_9);
    FUNC_1("lp_acl_write: Host queued packet %p\n", (void *)VAR_9);
   }
  }
 }

 if((VAR_15=FUNC_2(VAR_6,VAR_4+1,VAR_5))==((void*)0)) {
  FUNC_0("lp_acl_write: Could not allocate memory for pbuf\n");
  return VAR_1;
 }

 FUNC_3(VAR_15,VAR_9);
 ((u8_t*)VAR_15->payload)[0] = VAR_3;

 VAR_14 = (void*)((u8_t*)VAR_15->payload+1);

 VAR_12 = VAR_13->connhdl;
 VAR_12 |= (VAR_11<<12);
 VAR_12 &= 0x3FFF;
 VAR_14->connhdl_pb_bc = FUNC_9(VAR_12);
 VAR_14->len = FUNC_9(VAR_10);

 FUNC_10(VAR_15,(VAR_15->len+VAR_10));
 --VAR_7->acl_max_pkt;

 VAR_9 = FUNC_4(VAR_15);
 FUNC_5(VAR_15);
 return VAR_2;
}
