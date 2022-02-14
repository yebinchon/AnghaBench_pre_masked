
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * rxcmdpkt; } ;
struct r8192_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int Length; int* virtual_address; } ;
typedef int cmpk_intr_sta_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;





 int FUNC_1 (struct net_device*,int*) ;
 int FUNC_2 (struct net_device*,int*) ;
 int FUNC_3 (struct net_device*,int*) ;
 int FUNC_4 (struct net_device*,int*) ;
 int FUNC_5 (struct net_device*,int*) ;
 struct r8192_priv* FUNC_6 (struct net_device*) ;

extern u32
FUNC_7(
 struct net_device *VAR_5,
 struct ieee80211_rx_stats *VAR_6)
{

 struct r8192_priv *VAR_7 = FUNC_6(VAR_5);
 int VAR_8;
 u8 VAR_9, VAR_10 = 0;
 u8 VAR_11;
 u8 *VAR_12;



 if ( VAR_6== ((void*)0))
 {



  return 0;
 }


 VAR_8 = VAR_6->Length;


 VAR_12 = VAR_6->virtual_address;


 VAR_11 = VAR_12[0];







 while (VAR_8 > 0 || VAR_10++ >100)
 {

  VAR_11 = VAR_12[0];

  switch(VAR_11)
  {
   case 131:
    FUNC_3 (VAR_5, VAR_12);
    VAR_9 = VAR_1;
    break;

   case 132:
    FUNC_1(VAR_5, VAR_12);
    VAR_9 = sizeof(cmpk_intr_sta_t);
    break;

   case 133:
    FUNC_2(VAR_5, VAR_12);
    VAR_9 = VAR_0;
    break;

   case 128:
    FUNC_5(VAR_5, VAR_12);
    VAR_9 = VAR_2;
    break;

   case 130:



    VAR_9 = VAR_1;
    break;

   case 129:

    FUNC_4(VAR_5, VAR_12);
    VAR_9 = VAR_3;
    break;

   default:

           FUNC_0(VAR_4, "---->cmpk_message_handle_rx():unknow CMD Element\n");
    return 1;
  }







  VAR_7->stats.rxcmdpkt[VAR_11]++;

  VAR_8 -= VAR_9;
  VAR_12 += VAR_9;
 }
 return 1;

}
