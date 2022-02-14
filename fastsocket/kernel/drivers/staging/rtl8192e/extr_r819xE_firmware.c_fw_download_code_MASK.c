
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {unsigned char* data; scalar_t__ cb; } ;
struct r8192_priv {TYPE_1__* ieee80211; TYPE_2__* pFirmware; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ cmdpacket_frag_thresold; } ;
typedef TYPE_2__ rt_firmware ;
typedef int dev ;
struct TYPE_6__ {scalar_t__ txbuf_size; void* bLastIniPkt; int bCmdOrInit; int queue_index; } ;
typedef TYPE_3__ cb_desc ;
struct TYPE_4__ {int (* softmac_hard_start_xmit ) (struct sk_buff*,struct net_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (unsigned char*,struct net_device**,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static bool FUNC_6(struct net_device *VAR_3, u8 *VAR_4,
        u32 VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_2(VAR_3);
 bool VAR_7 = 1;
 u16 VAR_8;
 u16 VAR_9, VAR_10 = 0;
 int VAR_11;

 rt_firmware *VAR_12 = VAR_6->pFirmware;
 struct sk_buff *VAR_13;
 unsigned char *VAR_14;
 cb_desc *VAR_15;
 u8 VAR_16;

 FUNC_1(VAR_3);


 VAR_8 = VAR_12->cmdpacket_frag_thresold;
 do {
  if ((VAR_5 - VAR_10) > VAR_8) {
   VAR_9 = VAR_8 ;
   VAR_16 = 0;
  } else {
   VAR_9 = VAR_5 - VAR_10;
   VAR_16 = 1;
  }





  VAR_13 = FUNC_0(VAR_9 + 4);
  FUNC_3((unsigned char *)(VAR_13->cb), &VAR_3, sizeof(VAR_3));
  VAR_15 = (cb_desc *)(VAR_13->cb + VAR_1);
  VAR_15->queue_index = VAR_2;
  VAR_15->bCmdOrInit = VAR_0;
  VAR_15->bLastIniPkt = VAR_16;

  VAR_14 = VAR_13->data;




  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11 += 4) {
   *VAR_14++ = ((VAR_11+0) < VAR_9) ? VAR_4[VAR_11+3] : 0;
   *VAR_14++ = ((VAR_11+1) < VAR_9) ? VAR_4[VAR_11+2] : 0;
   *VAR_14++ = ((VAR_11+2) < VAR_9) ? VAR_4[VAR_11+1] : 0;
   *VAR_14++ = ((VAR_11+3) < VAR_9) ? VAR_4[VAR_11+0] : 0;
  }
  VAR_15->txbuf_size = (u16)VAR_11;
  FUNC_4(VAR_13, VAR_11);
  VAR_6->ieee80211->softmac_hard_start_xmit(VAR_13, VAR_3);

  VAR_4 += VAR_9;
  VAR_10 += VAR_9;

 } while (VAR_10 < VAR_5);

 return VAR_7;
}
