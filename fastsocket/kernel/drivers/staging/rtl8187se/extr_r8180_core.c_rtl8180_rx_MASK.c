
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; unsigned char* data; struct net_device* dev; } ;
struct TYPE_12__ {int rxnolast; int rxcrcerrmid; int rxcrcerrmax; int rxcrcerrmin; int rxdmafail; int rxicverr; int rxnodata; } ;
struct TYPE_9__ {unsigned char qual; int noise; } ;
struct TYPE_10__ {TYPE_2__ qual; } ;
struct r8180_priv {int* rxringtail; int* rxring; int rxringcount; int rxbuffersize; int rx_prevlen; int rx_skb_complete; int SignalStrength; long RecvSignalPower; char RxPower; int RSSI; unsigned char SignalQuality; long LastSignalStrengthInPercent; long Stats_SignalQuality; long Stats_RecvSignalPower; int LastRxPktAntenna; TYPE_6__* rxbuffer; int pdev; struct sk_buff* rx_skb; TYPE_7__* ieee80211; scalar_t__ prism_hdr; TYPE_5__ stats; int Stats_SignalStrength; TYPE_3__ wstats; int card_8185; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int signal; int noise; int* mac_time; int signalstrength; unsigned char rssi; int rate; int nic_type; int freq; } ;
struct ieee80211_hdr_4addr {int addr3; int addr2; int addr1; int frame_ctl; } ;
struct TYPE_11__ {int bssid; } ;
struct TYPE_8__ {int rx_errors; } ;
struct TYPE_14__ {scalar_t__ iw_mode; TYPE_4__ current_network; TYPE_1__ stats; } ;
struct TYPE_13__ {int dma; unsigned char* buf; struct TYPE_13__* next; } ;
typedef int RxAGC_dBm ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_1 (long,int) ;
 int VAR_7 ;
 int FUNC_2 (struct r8180_priv*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (TYPE_7__*,struct sk_buff*,struct ieee80211_rx_stats*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned char*,int) ;
 int FUNC_13 (int ,int,int,int ) ;
 int FUNC_14 (int ,int,int,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int) ;

void FUNC_20(struct net_device *VAR_8)
{
 struct r8180_priv *VAR_9 = (struct r8180_priv *)FUNC_9(VAR_8);
 struct sk_buff *VAR_10;
 short VAR_11,VAR_12;
 u32 VAR_13;
 int VAR_14;
 unsigned char VAR_15, VAR_16;
 u8 VAR_17;
 u32 *VAR_18,*VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 char VAR_22 = 0;
 u32 VAR_23 = 0;
 long VAR_24 = 0;
 u8 VAR_25=0, VAR_26=0;
 u8 VAR_27[4]={02, 17, 29, 39};
 u8 VAR_28 = 0;
 struct ieee80211_hdr_4addr *VAR_29;
 u16 VAR_30,VAR_31;
 u8 VAR_32 = 0,VAR_33 = 0,VAR_34 = 0;
 bool VAR_35 = 0;
 u8 VAR_36 = 0;
 long VAR_37 = 0;
 struct ieee80211_rx_stats VAR_38 = {
  .signal = 0,
  .noise = -98,
  .rate = 0,
  .freq = VAR_0,
 };

 VAR_38.nic_type = VAR_6;
 VAR_20 = 8;

 if ((*(VAR_9->rxringtail)) & (1<<31)) {



  VAR_9->stats.rxnodata++;
  VAR_9->ieee80211->stats.rx_errors++;

  VAR_19 = ((void*)0);
  VAR_18 = VAR_9->rxringtail;
  do{
   if(VAR_18 == VAR_9->rxring)
    VAR_18 = VAR_9->rxring + (VAR_9->rxringcount - 1)*VAR_20;
   else
    VAR_18 -= VAR_20;

   if(! (*VAR_18 & (1<<31)))
    VAR_19 = VAR_18;
  }while(VAR_18 != VAR_9->rxring);

  if(VAR_19) VAR_9->rxringtail = VAR_19;
 }


 while(!(*(VAR_9->rxringtail) & (1<<31))){
  if(*(VAR_9->rxringtail) & (1<<26))
   FUNC_0("RX buffer overflow");
  if(*(VAR_9->rxringtail) & (1<<12))
   VAR_9->stats.rxicverr++;

  if(*(VAR_9->rxringtail) & (1<<27)){
   VAR_9->stats.rxdmafail++;

   goto drop;
  }

  FUNC_13(VAR_9->pdev,
        VAR_9->rxbuffer->dma,
        VAR_9->rxbuffersize * sizeof(u8),

        VAR_7);

  VAR_11 = *(VAR_9->rxringtail) & (1<<29) ? 1:0;
  if(VAR_11) VAR_9->rx_prevlen=0;

  VAR_12 = *(VAR_9->rxringtail) & (1<<28) ? 1:0;
  if(VAR_12){
   VAR_14=((*VAR_9->rxringtail) &0xfff);
   if(VAR_14 < VAR_9->rx_prevlen)
    VAR_13=0;
   else
    VAR_13=VAR_14-VAR_9->rx_prevlen;

   if(*(VAR_9->rxringtail) & (1<<13)) {
    if ((*(VAR_9->rxringtail) & 0xfff) <500)
     VAR_9->stats.rxcrcerrmin++;
    else if ((*(VAR_9->rxringtail) & 0x0fff) >1000)
     VAR_9->stats.rxcrcerrmax++;
    else
     VAR_9->stats.rxcrcerrmid++;

   }

  }else{
   VAR_13 = VAR_9->rxbuffersize;
  }

  if(VAR_11 && VAR_12) {
   VAR_21 = ((*(VAR_9->rxringtail+3))&(0x04000000))>>26;
  }else if(VAR_11) {
   VAR_21 = ((*(VAR_9->rxringtail+3))&(0x04000000))>>26;
   if(VAR_21) {
    VAR_13 -= 2;
   }
  }else {
   VAR_21 = 0;
  }
               VAR_21 = 0;
  VAR_9->rx_prevlen+=VAR_13;

  if(VAR_9->rx_prevlen > VAR_5 + 100){





   if(!VAR_9->rx_skb_complete)
    FUNC_7(VAR_9->rx_skb);
   VAR_9->rx_skb_complete = 1;
  }

  VAR_16=(unsigned char)(((*(VAR_9->rxringtail+3))& (0x00ff0000))>>16);
  VAR_16=(VAR_16&0xfe)>>1;

  VAR_15=(unsigned char)((*(VAR_9->rxringtail+3)) & (0xff));

  VAR_38.mac_time[0] = *(VAR_9->rxringtail+1);
  VAR_38.mac_time[1] = *(VAR_9->rxringtail+2);
  VAR_22 =((char)(((*(VAR_9->rxringtail+4))& (0x00ff0000))>>16))/2 - 42;
  VAR_36 = ((u8)(((*(VAR_9->rxringtail+3)) & (0x0000ff00))>> 8)) & (0x7f);

  VAR_17=((*(VAR_9->rxringtail)) &
   ((1<<23)|(1<<22)|(1<<21)|(1<<20)))>>20;

  VAR_38.rate = FUNC_17(VAR_17);
  VAR_28 = (((*(VAR_9->rxringtail +3))& (0x00008000)) == 0 )? 0:1 ;

  if(!FUNC_16(VAR_38.rate))
  {

   VAR_24 = VAR_22+1;
  }
  else
  {
   VAR_24 = VAR_16;

   VAR_25 = (u8) (VAR_24 & 0x60 ) >> 5 ;
   VAR_26 = (u8) (VAR_24 & 0x1F);

      VAR_24 = -( VAR_27[VAR_25] + (VAR_26 *2) );

   VAR_24 +=4;
  }

  if(VAR_24 & 0x80)
      VAR_23= ~(VAR_24)+1;
  VAR_35 = FUNC_16(VAR_38.rate);

  if(!FUNC_16(VAR_38.rate))
  {
   if(VAR_23>90)
    VAR_23=90;
   else if(VAR_23<25)
    VAR_23=25;
   VAR_23=(90-VAR_23)*100/65;
  }
  else
  {
   if(VAR_23>95)
    VAR_23=95;
   else if(VAR_23<30)
    VAR_23=30;
   VAR_23=(95-VAR_23)*100/65;
  }
  VAR_9->SignalStrength = (u8)VAR_23;
  VAR_9->RecvSignalPower = VAR_24 ;
  VAR_9->RxPower = VAR_22;
  VAR_9->RSSI = VAR_36;


  if(VAR_15 >= 127)
   VAR_15 = 1;
  else if(VAR_15 < 27)
   VAR_15 = 100;
  else
   VAR_15 = 127 - VAR_15;
  VAR_9->SignalQuality = VAR_15;
  if(!VAR_9->card_8185)
   FUNC_15("check your card type\n");

  VAR_38.signal = (u8)VAR_15;
  VAR_38.signalstrength = VAR_23;
  if(VAR_38.signalstrength > 100)
   VAR_38.signalstrength = 100;
  VAR_38.signalstrength = (VAR_38.signalstrength * 70)/100 + 30;

  VAR_38.rssi = VAR_9->wstats.qual.qual = VAR_9->SignalQuality;
  VAR_38.noise = VAR_9->wstats.qual.noise = 100 - VAR_9 ->wstats.qual.qual;

  VAR_32 = (((*(VAR_9->rxringtail))& (0x00000fff)) == 4080)| (((*(VAR_9->rxringtail))& (0x04000000)) != 0 )
   | (((*(VAR_9->rxringtail))& (0x08000000)) != 0 )| (((~(*(VAR_9->rxringtail)))& (0x10000000)) != 0 )| (((~(*(VAR_9->rxringtail)))& (0x20000000)) != 0 );
  VAR_33 = ((*(VAR_9->rxringtail)) & (0x00002000)) >> 13;
  VAR_34 = ((*(VAR_9->rxringtail)) & (0x00001000)) >> 12;
  VAR_29 = (struct ieee80211_hdr_4addr *)VAR_9->rxbuffer->buf;
      VAR_30 = FUNC_11(VAR_29->frame_ctl);
         VAR_31 = FUNC_5(VAR_30);

   if((VAR_3 != VAR_31) &&
    (FUNC_8(VAR_9->ieee80211->current_network.bssid, (VAR_30 & VAR_2)? VAR_29->addr1 : (VAR_30 & VAR_1 )? VAR_29->addr2 : VAR_29->addr3))
     && (!VAR_32) && (!VAR_33)&& (!VAR_34))
   {





    FUNC_2(VAR_9,VAR_35);



    VAR_37 = FUNC_1(
        VAR_9->LastSignalStrengthInPercent,
        VAR_9->SignalStrength);

    VAR_9->LastSignalStrengthInPercent = VAR_37;
    VAR_9->Stats_SignalStrength = FUNC_4((u8)VAR_37);




    VAR_9->Stats_SignalQuality =(long) (VAR_9->Stats_SignalQuality * 5 + (long)VAR_9->SignalQuality + 5) / 6;
    VAR_9->Stats_RecvSignalPower = (long)(VAR_9->Stats_RecvSignalPower * 5 + VAR_9->RecvSignalPower -1) / 6;


    VAR_9->LastRxPktAntenna = VAR_28 ? 1 : 0;

       FUNC_3(VAR_8, VAR_9->SignalStrength);
   }



  if(VAR_11){
   if(!VAR_9->rx_skb_complete){


    FUNC_7(VAR_9->rx_skb);
    VAR_9->stats.rxnolast++;
   }

   if(VAR_9->prism_hdr && VAR_9->ieee80211->iw_mode == VAR_4){

   }else{
    VAR_9->rx_skb = FUNC_6(VAR_13+2);
    if( !VAR_9->rx_skb) goto drop;
   }

   VAR_9->rx_skb_complete=0;
   VAR_9->rx_skb->dev=VAR_8;
  }else{






   if(!VAR_9->rx_skb_complete){

    VAR_10= FUNC_6(VAR_9->rx_skb->len +VAR_13+2);

    if(!VAR_10) goto drop;

    VAR_10->dev=VAR_8;

    FUNC_12(FUNC_18(VAR_10,VAR_9->rx_skb->len),
     VAR_9->rx_skb->data,
     VAR_9->rx_skb->len);

    FUNC_7(VAR_9->rx_skb);

    VAR_9->rx_skb=VAR_10;
   }
  }

  if(!VAR_9->rx_skb_complete) {
   if(VAR_21) {
    FUNC_12(FUNC_18(VAR_9->rx_skb,VAR_13),
     (((unsigned char *)VAR_9->rxbuffer->buf) + 2),VAR_13);
   } else {
    FUNC_12(FUNC_18(VAR_9->rx_skb,VAR_13),
     VAR_9->rxbuffer->buf,VAR_13);
   }
  }

  if(VAR_12 && !VAR_9->rx_skb_complete){
   if(VAR_9->rx_skb->len > 4)
    FUNC_19(VAR_9->rx_skb,VAR_9->rx_skb->len-4);

   if(!FUNC_10(VAR_9->ieee80211,
      VAR_9->rx_skb, &VAR_38)){


    FUNC_7(VAR_9->rx_skb);

   }

   VAR_9->rx_skb_complete=1;
  }


  FUNC_14(VAR_9->pdev,
        VAR_9->rxbuffer->dma,
        VAR_9->rxbuffersize * sizeof(u8),

        VAR_7);

drop:

  *(VAR_9->rxringtail+2)=VAR_9->rxbuffer->dma;
  *(VAR_9->rxringtail)=*(VAR_9->rxringtail) &~ 0xfff;
  *(VAR_9->rxringtail)=
   *(VAR_9->rxringtail) | VAR_9->rxbuffersize;

  *(VAR_9->rxringtail)=
   *(VAR_9->rxringtail) | (1<<31);

  VAR_9->rxringtail+=VAR_20;
  if(VAR_9->rxringtail >=
     (VAR_9->rxring)+(VAR_9->rxringcount )*VAR_20)
   VAR_9->rxringtail=VAR_9->rxring;

  VAR_9->rxbuffer=(VAR_9->rxbuffer->next);
 }
}
