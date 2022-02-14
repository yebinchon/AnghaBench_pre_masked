
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct pbuf {scalar_t__ len; scalar_t__ payload; struct pbuf* next; } ;
struct netif {int (* input ) (struct pbuf*,struct netif*) ;scalar_t__ state; } ;
struct bba_priv {int flag; } ;
struct bba_descr {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int err_t ;
struct TYPE_2__ {scalar_t__ packet_len; scalar_t__ status; int next_packet_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (scalar_t__,struct bba_priv*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,void*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 () ;
 TYPE_1__ VAR_14 ;
 int FUNC_11 (scalar_t__*) ;
 struct pbuf* FUNC_12 (int ,scalar_t__,int ) ;
 int FUNC_13 (struct pbuf*,struct netif*) ;

__attribute__((used)) static err_t FUNC_14(struct netif *VAR_15,u32 VAR_16)
{
 s32 VAR_17;
 u16 VAR_18,VAR_19,VAR_20,VAR_21;
 u32 VAR_22,VAR_23;
 struct pbuf *VAR_24,*VAR_25 = ((void*)0);
 struct bba_priv *VAR_26 = (struct bba_priv*)VAR_15->state;

 FUNC_0(VAR_11,("bba_start_rx()\n"));

 VAR_23 = 0;
 VAR_21 = FUNC_3(VAR_6);
 VAR_20 = FUNC_3(VAR_5);
 while(VAR_23<VAR_16 && VAR_20!=VAR_21) {
  FUNC_0(VAR_11,("bba_start_rx(%04x,%04x)\n",VAR_20,VAR_21));
  FUNC_5(VAR_20<<8,(void*)(&VAR_14),sizeof(struct bba_descr));
  FUNC_11((u32*)((void*)(&VAR_14)));

  VAR_17 = (VAR_14.packet_len-4);
  VAR_22 = VAR_14.status;
  if(VAR_17>(VAR_7+4)) {
   FUNC_0(VAR_11|2,("bba_start_rx(size>BBA_RX_MAX_PACKET_SIZE)\n"));
   continue;
  }

  if(VAR_22&(VAR_9|VAR_8)) {
   FUNC_0(VAR_11|2,("bba_start_rx(pkt_status = 02x)\n",VAR_22));
   FUNC_1(VAR_22,VAR_26);
   VAR_21 = FUNC_3(VAR_6);
   VAR_20 = FUNC_3(VAR_5);
   continue;
  }

  VAR_19 = ((VAR_20<<8)+4);
  VAR_18 = ((VAR_2+1)<<8);
  FUNC_0(VAR_11,("bba_start_rx(%04x,%d,%04x)\n",VAR_19,VAR_17,VAR_18));

  VAR_25 = FUNC_12(VAR_13,VAR_17,VAR_12);
  if(VAR_25) {
   for(VAR_24=VAR_25;VAR_24!=((void*)0);VAR_24=VAR_24->next) {
    VAR_17 = VAR_24->len;

    FUNC_10();
    FUNC_7(VAR_19);
    if((VAR_19+VAR_17)<VAR_18) {
     FUNC_6(VAR_24->payload,VAR_17);
    } else {
     s32 VAR_27 = (VAR_18-VAR_19);

     VAR_17 -= VAR_27;
     VAR_19 = (VAR_3<<8);
     FUNC_6(VAR_24->payload,VAR_27);
     FUNC_2();
     FUNC_10();
     FUNC_7(VAR_19);
     FUNC_6(VAR_24->payload+VAR_27,VAR_17);
    }
    FUNC_2();
    VAR_19 += VAR_17;
   }
   VAR_15->input(VAR_25,VAR_15);
  } else
   break;

  VAR_23++;
  FUNC_8(VAR_5,(VAR_20=VAR_14.next_packet_ptr));
  VAR_21 = FUNC_3(VAR_6);
 }
 if(VAR_26->flag&VAR_4) {
  VAR_26->flag &= ~VAR_4;
  FUNC_9(VAR_0,(FUNC_4(VAR_0)|VAR_1));
 }

 FUNC_0(VAR_11,("bba_start_rx(rx interrupt close)\n"));
 return VAR_10;
}
