
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
struct TYPE_12__ {unsigned long txbytesunicast; unsigned long rxbytesunicast; } ;
struct r8192_priv {int bis_cur_rdlstate; int bcurrent_turbo_EDCA; TYPE_5__ stats; TYPE_4__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_qos_parameters {int* aifs; scalar_t__* cw_min; scalar_t__* cw_max; scalar_t__* tx_op_limit; } ;
struct TYPE_10__ {scalar_t__ ACM; } ;
struct TYPE_14__ {TYPE_3__ f; } ;
struct TYPE_13__ {int IOTAction; size_t IOTPeer; } ;
struct TYPE_8__ {struct ieee80211_qos_parameters parameters; } ;
struct TYPE_9__ {TYPE_1__ qos_data; } ;
struct TYPE_11__ {scalar_t__ state; int bis_any_nonbepkts; int mode; TYPE_2__ current_network; TYPE_6__* pHTInfo; } ;
typedef TYPE_6__* PRT_HIGH_THROUGHPUT ;
typedef TYPE_7__* PACI_AIFSN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_12 ;
 int FUNC_1 (struct net_device*) ;
 int* VAR_13 ;
 int* VAR_14 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int) ;
 int FUNC_6 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_7(
 struct net_device * VAR_15)
{
 struct r8192_priv *VAR_16 = FUNC_2(VAR_15);
 PRT_HIGH_THROUGHPUT VAR_17 = VAR_16->ieee80211->pHTInfo;



 static unsigned long VAR_18 = 0;
 static unsigned long VAR_19 = 0;
 unsigned long VAR_20 = 0;
 unsigned long VAR_21 = 0;






 if(VAR_16->ieee80211->state != VAR_9)
  goto dm_CheckEdcaTurbo_EXIT;


 if(VAR_16->ieee80211->pHTInfo->IOTAction & VAR_8)
  goto dm_CheckEdcaTurbo_EXIT;



 if(!VAR_16->ieee80211->bis_any_nonbepkts)
 {
  VAR_20 = VAR_16->stats.txbytesunicast - VAR_18;
  VAR_21 = VAR_16->stats.rxbytesunicast - VAR_19;

  if(VAR_21 > 4*VAR_20)
  {

   if(!VAR_16->bis_cur_rdlstate || !VAR_16->bcurrent_turbo_EDCA)
   {
    FUNC_6(VAR_15, VAR_7, VAR_13[VAR_17->IOTPeer]);
    VAR_16->bis_cur_rdlstate = 1;
   }
  }
  else
  {


   if(VAR_16->bis_cur_rdlstate || !VAR_16->bcurrent_turbo_EDCA)
   {
    FUNC_6(VAR_15, VAR_7, VAR_14[VAR_17->IOTPeer]);
    VAR_16->bis_cur_rdlstate = 0;
   }

  }

  VAR_16->bcurrent_turbo_EDCA = 1;
 }
 else
 {




   if(VAR_16->bcurrent_turbo_EDCA)
  {

   {
    u8 VAR_22;
    u32 VAR_23;
    struct ieee80211_qos_parameters *VAR_24 = &VAR_16->ieee80211->current_network.qos_data.parameters;
    u8 VAR_25 = VAR_16->ieee80211->mode;


    FUNC_1(VAR_15);
    VAR_22 = VAR_24->aifs[0] * ((VAR_25&(VAR_10|VAR_11)) ?9:20) + VAR_12;
    VAR_23 = ((((u32)(VAR_24->tx_op_limit[0]))<< VAR_3)|
     (((u32)(VAR_24->cw_max[0]))<< VAR_1)|
     (((u32)(VAR_24->cw_min[0]))<< VAR_2)|
     ((u32)VAR_22 << VAR_0));
    FUNC_3("===>u4bAcParam:%x, ", VAR_23);

    FUNC_6(VAR_15, VAR_7, VAR_23);



    {


     PACI_AIFSN VAR_26 = (PACI_AIFSN)&(VAR_24->aifs[0]);
     u8 VAR_27 = FUNC_4( VAR_15, VAR_4 );
     if( VAR_26->f.ACM )
     {
      VAR_27 |= VAR_5;
     }
     else
     {
      VAR_27 &= (~VAR_5);
     }

     FUNC_0( VAR_6,"SetHwReg8190pci(): [HW_VAR_ACM_CTRL] Write 0x%X\n", VAR_27 ) ;
     FUNC_5(VAR_15, VAR_4, VAR_27 );
    }
   }
   VAR_16->bcurrent_turbo_EDCA = 0;
  }
 }


dm_CheckEdcaTurbo_EXIT:

 VAR_16->ieee80211->bis_any_nonbepkts = 0;
 VAR_18 = VAR_16->stats.txbytesunicast;
 VAR_19 = VAR_16->stats.rxbytesunicast;
}
