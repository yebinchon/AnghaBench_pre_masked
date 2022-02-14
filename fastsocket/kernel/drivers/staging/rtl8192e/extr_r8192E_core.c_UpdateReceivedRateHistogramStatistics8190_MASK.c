
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int ** received_rate_histogram; int ** received_preamble_GI; } ;
struct r8192_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int rate; scalar_t__ bShortPreamble; scalar_t__ bICV; scalar_t__ bCRC; } ;
struct TYPE_4__ {scalar_t__ queue_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1(
 struct net_device *VAR_2,
 struct ieee80211_rx_stats* VAR_3
 )
{
 struct r8192_priv *VAR_4 = (struct r8192_priv *)FUNC_0(VAR_2);
 u32 VAR_5=1;
 u32 VAR_6;
 u32 VAR_7;






 if(VAR_3->bCRC)
  VAR_5 = 2;
 else if(VAR_3->bICV)
  VAR_5 = 3;

 if(VAR_3->bShortPreamble)
  VAR_7 = 1;
 else
  VAR_7 = 0;

 switch(VAR_3->rate)
 {



  case 152: VAR_6 = 0; break;
      case 150: VAR_6 = 1; break;
      case 146: VAR_6 = 2; break;
      case 155: VAR_6 = 3; break;



      case 145: VAR_6 = 4; break;
      case 144: VAR_6 = 5; break;
      case 154: VAR_6 = 6; break;
      case 153: VAR_6 = 7; break;
      case 151: VAR_6 = 8; break;
      case 149: VAR_6 = 9; break;
      case 148: VAR_6 = 10; break;
      case 147: VAR_6 = 11; break;



      case 143: VAR_6 = 12; break;
      case 142: VAR_6 = 13; break;
      case 135: VAR_6 = 14; break;
      case 134: VAR_6 = 15; break;
      case 133: VAR_6 = 16; break;
      case 132: VAR_6 = 17; break;
      case 131: VAR_6 = 18; break;
      case 130: VAR_6 = 19; break;
      case 129: VAR_6 = 20; break;
      case 128: VAR_6 = 21; break;
      case 141: VAR_6 = 22; break;
      case 140: VAR_6 = 23; break;
      case 139: VAR_6 = 24; break;
      case 138: VAR_6 = 25; break;
      case 137: VAR_6 = 26; break;
      case 136: VAR_6 = 27; break;
  default: VAR_6 = 28; break;
 }
 VAR_4->stats.received_preamble_GI[VAR_7][VAR_6]++;
 VAR_4->stats.received_rate_histogram[0][VAR_6]++;
 VAR_4->stats.received_rate_histogram[VAR_5][VAR_6]++;
}
