
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct uip_pbuf {scalar_t__ payload; struct uip_pbuf* next; } ;
struct uip_netif {int dummy; } ;
struct bba_descr {int dummy; } ;
typedef int s8_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ packet_len; scalar_t__ status; int next_packet_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,void*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct uip_pbuf*,struct uip_netif*) ;
 int FUNC_10 () ;
 TYPE_1__ VAR_12 ;
 int FUNC_11 (scalar_t__*) ;
 struct uip_pbuf* FUNC_12 (int ,scalar_t__,int ) ;

__attribute__((used)) static s8_t FUNC_13(struct uip_netif *VAR_13,u32 VAR_14)
{
 s32 VAR_15;
 u16 VAR_16,VAR_17,VAR_18,VAR_19;
 u32 VAR_20,VAR_21;
 struct uip_pbuf *VAR_22,*VAR_23;

 FUNC_2("bba_start_rx()\n");

 VAR_21 = 0;
 VAR_18 = FUNC_4(VAR_3);
 VAR_19 = FUNC_4(VAR_2);
 while(VAR_21<VAR_14 && VAR_19!=VAR_18) {
  FUNC_5(VAR_19<<8,(void*)(&VAR_12),sizeof(struct bba_descr));
  FUNC_11((u32*)((void*)(&VAR_12)));

  VAR_15 = VAR_12.packet_len - 4;
  VAR_20 = VAR_12.status;
  if(VAR_15>(VAR_4+4)) {
   FUNC_2("bba_start_rx: packet dropped due to big buffer.\n");
   continue;
  }

  if(VAR_20&(VAR_6|VAR_5)) {
   FUNC_2("bba_start_rx: packet dropped due to receive errors.\n");
   VAR_18 = FUNC_4(VAR_3);
   VAR_19 = FUNC_4(VAR_2);
   continue;
  }

  VAR_17 = (VAR_19<<8)+4;
  VAR_16 = (VAR_0+1)<<8;

  VAR_22 = FUNC_12(VAR_11,VAR_15,VAR_10);
  if(VAR_22) {
   for(VAR_23=VAR_22;VAR_23!=((void*)0);VAR_23=VAR_23->next) {
    FUNC_10();
    FUNC_7(VAR_17);
    if((VAR_17+VAR_15)<VAR_16) {
     FUNC_6(VAR_23->payload,VAR_15);
    } else {
     s32 VAR_24 = VAR_16-VAR_17;

     VAR_15 -= VAR_24;
     VAR_17 = VAR_1<<8;
     FUNC_6(VAR_23->payload,VAR_24);
     FUNC_3();

     FUNC_10();
     FUNC_7(VAR_17);
     FUNC_6(VAR_23->payload+VAR_24,VAR_15);
    }
    FUNC_3();
    VAR_17 += VAR_15;
   }

   FUNC_1(VAR_7);
   FUNC_9(VAR_22,VAR_13);
   FUNC_0(VAR_7,VAR_8,((void*)0));
  } else
   break;

  VAR_21++;

  FUNC_8(VAR_2,(VAR_19=VAR_12.next_packet_ptr));
  VAR_18 = FUNC_4(VAR_3);
 }
 return VAR_9;
}
