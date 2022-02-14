
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int * data; } ;
struct TYPE_8__ {int numpacket_toself; int numpacket_matchbssid; } ;
struct r8192_priv {TYPE_4__ stats; TYPE_3__* ieee80211; } ;
struct net_device {int * dev_addr; } ;
struct ieee80211_rx_stats {int bICV; int bCRC; int bHwError; } ;
struct ieee80211_hdr_3addr {int * addr3; int * addr2; int * addr1; int frame_ctl; } ;
typedef int prx_fwinfo_819x_pci ;
typedef int prx_desc_819x_pci ;
struct TYPE_5__ {int * bssid; } ;
struct TYPE_7__ {TYPE_2__* dev; TYPE_1__ current_network; } ;
struct TYPE_6__ {int * dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct r8192_priv*,int *,struct ieee80211_rx_stats*,struct ieee80211_rx_stats*) ;
 int FUNC_6 (struct r8192_priv*,struct ieee80211_rx_stats*,int ,int ,struct ieee80211_rx_stats*,int,int,int,int) ;
 int FUNC_7 (struct ieee80211_rx_stats*,struct ieee80211_rx_stats*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5,
        struct sk_buff *VAR_6,
        struct ieee80211_rx_stats * VAR_7,
        prx_desc_819x_pci VAR_8,
        prx_fwinfo_819x_pci VAR_9)
{

    struct r8192_priv *VAR_10 = (struct r8192_priv *)FUNC_3(VAR_5);
    bool VAR_11, VAR_12;
    bool VAR_13=0, VAR_14=0;
    static struct ieee80211_rx_stats VAR_15;
    struct ieee80211_hdr_3addr *VAR_16;
    u16 VAR_17,VAR_18;



    u8* VAR_19;
    u8 *VAR_20;


    VAR_19 = VAR_6->data;

    VAR_16 = (struct ieee80211_hdr_3addr *)VAR_19;
    VAR_17 = FUNC_4(VAR_16->frame_ctl);
    VAR_18 = FUNC_1(VAR_17);
    VAR_20 = VAR_16->addr1;


    VAR_11 = ((VAR_2 != VAR_18) &&
            (FUNC_2(VAR_10->ieee80211->current_network.bssid, (VAR_17 & VAR_1)? VAR_16->addr1 : (VAR_17 & VAR_0 )? VAR_16->addr2 : VAR_16->addr3))
            && (!VAR_7->bHwError) && (!VAR_7->bCRC)&& (!VAR_7->bICV));
    VAR_12 = VAR_11 & (FUNC_2(VAR_20, VAR_10->ieee80211->dev->dev_addr));

    if(FUNC_0(VAR_17)== VAR_3)
    {
        VAR_13 = 1;

    }
    if(FUNC_0(VAR_17) == VAR_4)
    {
        if((FUNC_2(VAR_20,VAR_5->dev_addr)))
            VAR_14 = 1;

    }


    if(VAR_11)
    {
        VAR_10->stats.numpacket_matchbssid++;
    }
    if(VAR_12){
        VAR_10->stats.numpacket_toself++;
    }





    FUNC_5(VAR_10, VAR_19,&VAR_15, VAR_7);
    FUNC_6(VAR_10, VAR_7, VAR_8, VAR_9, &VAR_15, VAR_11,
            VAR_12 ,VAR_13, VAR_14);
    FUNC_7(VAR_7, &VAR_15);

}
