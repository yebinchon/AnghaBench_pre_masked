
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int txrdu; } ;
struct r8180_priv {int* txmapringtail; int* txmapring; int txringcount; int* txbkpringtail; int* txbkpring; int* txbepringtail; int* txbepring; int* txvipringtail; int* txvipring; int* txvopringtail; int* txvopring; int* txhpringtail; int* txhpring; int* txbeaconringtail; int* txbeaconring; int txbeaconcount; int rts; int txbuffsize; scalar_t__ card_8185; int plcp_preamble_mode; struct buffer* txhpbufstail; struct buffer* txvopbufstail; struct buffer* txvipbufstail; struct buffer* txbepbufstail; struct buffer* txbkpbufstail; struct buffer* txmapbufstail; int hw_plcp_len; TYPE_3__* ieee80211; TYPE_1__ stats; int NumTxUnicast; struct buffer* txbeaconbufstail; } ;
struct net_device {int dummy; } ;
struct ieee80211_hdr_3addr {int frame_ctl; int duration_id; int addr1; } ;
struct buffer {int* buf; struct buffer* next; } ;
struct TYPE_5__ {int capability; } ;
struct TYPE_6__ {int basic_rate; TYPE_2__ current_network; } ;





 int FUNC_0 (int,int,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 struct r8180_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 () ;
 int FUNC_8 (int**,int ,int) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (int,int,short*) ;
 int FUNC_11 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 () ;

short FUNC_13(struct net_device *VAR_6, u8* VAR_7, int VAR_8, int VAR_9,
   short VAR_10, short VAR_11, int VAR_12)
{
 struct r8180_priv *VAR_13 = FUNC_3(VAR_6);
 u32 *VAR_14,*VAR_15;
 u32 *VAR_16;
 u32 *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 u16 VAR_22;
 short VAR_23;
 struct buffer* VAR_24;
 struct ieee80211_hdr_3addr *VAR_25 = (struct ieee80211_hdr_3addr *)VAR_7;
 u8 VAR_26[VAR_0];
 u8 VAR_27 = 0;
 u8 VAR_28 = 0;
 u8 VAR_29 = 0;
 u16 VAR_30 = 0;
 u16 VAR_31 = 0;
 u16 VAR_32 = 0;
 u16 VAR_33 = 0;
 u8 VAR_34 = 0;

 switch(VAR_9) {
 case 130:
  VAR_14=VAR_13->txmapringtail;
  VAR_16=VAR_13->txmapring;
  VAR_24 = VAR_13->txmapbufstail;
  VAR_21 = VAR_13->txringcount;
  break;
 case 132:
  VAR_14=VAR_13->txbkpringtail;
  VAR_16=VAR_13->txbkpring;
  VAR_24 = VAR_13->txbkpbufstail;
  VAR_21 = VAR_13->txringcount;
  break;
 case 133:
  VAR_14=VAR_13->txbepringtail;
  VAR_16=VAR_13->txbepring;
  VAR_24 = VAR_13->txbepbufstail;
  VAR_21 = VAR_13->txringcount;
  break;
 case 129:
  VAR_14=VAR_13->txvipringtail;
  VAR_16=VAR_13->txvipring;
  VAR_24 = VAR_13->txvipbufstail;
  VAR_21 = VAR_13->txringcount;
  break;
 case 128:
  VAR_14=VAR_13->txvopringtail;
  VAR_16=VAR_13->txvopring;
  VAR_24 = VAR_13->txvopbufstail;
  VAR_21 = VAR_13->txringcount;
  break;
 case 131:
  VAR_14=VAR_13->txhpringtail;
  VAR_16=VAR_13->txhpring;
  VAR_24 = VAR_13->txhpbufstail;
  VAR_21 = VAR_13->txringcount;
  break;
 case 134:
  VAR_14=VAR_13->txbeaconringtail;
  VAR_16=VAR_13->txbeaconring;
  VAR_24 = VAR_13->txbeaconbufstail;
  VAR_21 = VAR_13->txbeaconcount;
  break;
 default:
  return -1;
  break;
  }

  FUNC_8(&VAR_26, VAR_25->addr1, VAR_0);
  if (FUNC_6(VAR_26) ||
    FUNC_5(VAR_26))
  {
   VAR_30 = 0;
   VAR_31 = 0;
   VAR_29 = 0;
   VAR_28 = 0;

   VAR_32 = FUNC_0(VAR_8 + VAR_5, FUNC_11(VAR_12), 0, VAR_27);
   VAR_33 = VAR_32;
  } else {
   u16 VAR_35;


   VAR_13->NumTxUnicast++;


   VAR_35 = FUNC_0(14, 10,0, 0);

   if ( ((VAR_8 + VAR_5) > VAR_13->rts) && VAR_13->rts )
   {
    u16 VAR_36, VAR_37;

    VAR_29 = 1;
    VAR_28 = 0;


    VAR_36 = FUNC_0( VAR_4/8,VAR_13->ieee80211->basic_rate, 0, 0);

    VAR_37 = FUNC_0(14, 10,0, 0);


    VAR_32 = FUNC_0(VAR_8 + VAR_5,
      FUNC_11(VAR_12),
      0,
      VAR_27);


    VAR_31 = VAR_37 + VAR_32 + VAR_35 + 3*VAR_3;

    VAR_33 = VAR_36 + VAR_31;
   }
   else {
    VAR_28 = 0;
    VAR_29 = 0;
    VAR_31 = 0;

    VAR_32 = FUNC_0(VAR_8 + VAR_5, FUNC_11(VAR_12), 0, VAR_27);
    VAR_33 = VAR_32 + VAR_3 + VAR_35;
   }

   if(!(VAR_25->frame_ctl & VAR_1)) {

    VAR_30 = VAR_3 + VAR_35;
   } else {
    u16 VAR_38;
    VAR_38 = FUNC_0( VAR_8 + VAR_5,
      FUNC_11(VAR_12),
      0,
      VAR_27 );


    VAR_30 = VAR_38 + 3*VAR_3 + 2*VAR_35;
   }

  }

  VAR_25->duration_id = VAR_30;

 VAR_20=VAR_13->txbuffsize;
 VAR_19=VAR_8;
 VAR_15 = VAR_14;

 while(VAR_19!=0){
  FUNC_7();
  if(!VAR_24){
   FUNC_1("TX buffer error, cannot TX frames. pri %d.", VAR_9);
   return -1;
  }
  VAR_17=VAR_24->buf;

  if ((*VAR_14 & (1 << 31)) && (VAR_9 != 134)) {
   FUNC_2("No more TX desc, returning %x of %x",
          VAR_19, VAR_8);
   VAR_13->stats.txrdu++;
   return VAR_19;
  }

  *VAR_14= 0;
  *(VAR_14+1) = 0;
  *(VAR_14+3) = 0;
  *(VAR_14+5) = 0;
  *(VAR_14+6) = 0;
  *(VAR_14+7) = 0;

  if(VAR_13->card_8185){

   *VAR_14 |= (1<<15);
  }

  if(VAR_19==VAR_8 && !VAR_11) {
   VAR_34 = 0;
   *VAR_14 = *VAR_14| (1<<29) ;
   *VAR_14 = *VAR_14 |(VAR_8);
  } else {
   VAR_34 = 1;
  }

  for(VAR_18=0;VAR_18<VAR_20&& VAR_19 >0;VAR_18++,VAR_19--){
   ((u8*)VAR_17)[VAR_18]=VAR_7[VAR_18];
   if(VAR_19 == 4 && VAR_18+4 >= VAR_20) break;


  }
  VAR_7 = VAR_7 + VAR_18;
  *(VAR_14+3)=*(VAR_14+3) &~ 0xfff;
  *(VAR_14+3)=*(VAR_14+3) | VAR_18;

  if (VAR_13->ieee80211->current_network.capability&VAR_2)
   if (VAR_13->plcp_preamble_mode==1 && VAR_12!=0)
   ;

  if(VAR_28) {
   *VAR_14 |= (1<<18);
  }

  if(VAR_29)
  {
   *VAR_14 |= ((FUNC_4(VAR_13->ieee80211->basic_rate))<<19);
   *VAR_14 |= (1<<23);
   *(VAR_14+1) |=(VAR_31&0xffff);
  }
  *(VAR_14+3) |= ((VAR_33&0xffff)<<16);

         *(VAR_14+5) |= (11<<8);

  *VAR_14 = *VAR_14 | ((VAR_12&0xf) << 24);



  if(VAR_13->card_8185 == 0 || !VAR_13->hw_plcp_len){
   VAR_22 = FUNC_10(VAR_8, VAR_12, &VAR_23);
   *(VAR_14+1) = *(VAR_14+1) | ((VAR_22 & 0x7fff)<<16);
   if(VAR_23) *(VAR_14+1) = *(VAR_14+1) |(1<<31);
  }

  if(VAR_10) *VAR_14 = (*VAR_14) | (1<<17);
  if(!VAR_19) *VAR_14 = (*VAR_14) | (1<<28);

               *(VAR_14+5) = *(VAR_14+5)|(2<<27);
                *(VAR_14+7) = *(VAR_14+7)|(1<<4);

  FUNC_12();
  if(VAR_34)
  {
   *VAR_14 = *VAR_14 | (1<<31);
  }

  if((VAR_14 - VAR_16)/8 == VAR_21-1)
   VAR_14=VAR_16;
  else
   VAR_14=VAR_14+8;

  VAR_24=VAR_24->next;

  FUNC_7();

  switch(VAR_9) {
   case 130:
    VAR_13->txmapringtail=VAR_14;
    VAR_13->txmapbufstail=VAR_24;
    break;
   case 132:
    VAR_13->txbkpringtail=VAR_14;
    VAR_13->txbkpbufstail=VAR_24;
    break;
   case 133:
    VAR_13->txbepringtail=VAR_14;
    VAR_13->txbepbufstail=VAR_24;
    break;
   case 129:
    VAR_13->txvipringtail=VAR_14;
    VAR_13->txvipbufstail=VAR_24;
    break;
   case 128:
    VAR_13->txvopringtail=VAR_14;
    VAR_13->txvopbufstail=VAR_24;
    break;
   case 131:
    VAR_13->txhpringtail=VAR_14;
    VAR_13->txhpbufstail = VAR_24;
    break;
   case 134:





    break;
  }
 }
 *VAR_15 = *VAR_15 | (1<<31);
 FUNC_9(VAR_6,VAR_9);

 return 0;
}
