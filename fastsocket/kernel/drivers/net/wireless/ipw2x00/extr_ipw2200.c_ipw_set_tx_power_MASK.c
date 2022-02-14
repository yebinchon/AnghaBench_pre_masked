
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tx_power ;
struct libipw_geo {int bg_channels; int a_channels; TYPE_2__* a; TYPE_1__* bg; } ;
struct ipw_tx_power {int num_channels; TYPE_3__* channels_tx_power; int ieee_mode; } ;
struct ipw_priv {void* tx_power; TYPE_4__* ieee; } ;
typedef scalar_t__ s8 ;
struct TYPE_8__ {scalar_t__ abg_true; } ;
struct TYPE_7__ {void* tx_power; int channel_number; } ;
struct TYPE_6__ {int channel; scalar_t__ max_power; } ;
struct TYPE_5__ {int channel; scalar_t__ max_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ipw_priv*,struct ipw_tx_power*) ;
 struct libipw_geo* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct ipw_tx_power*,int ,int) ;
 void* FUNC_3 (scalar_t__,void*) ;

__attribute__((used)) static int FUNC_4(struct ipw_priv *VAR_4)
{
 const struct libipw_geo *VAR_5 = FUNC_1(VAR_4->ieee);
 struct ipw_tx_power VAR_6;
 s8 VAR_7;
 int VAR_8;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));


 VAR_6.ieee_mode = VAR_3;
 VAR_6.num_channels = VAR_5->bg_channels;
 for (VAR_8 = 0; VAR_8 < VAR_5->bg_channels; VAR_8++) {
  VAR_7 = VAR_5->bg[VAR_8].max_power;
  VAR_6.channels_tx_power[VAR_8].channel_number =
      VAR_5->bg[VAR_8].channel;
  VAR_6.channels_tx_power[VAR_8].tx_power = VAR_7 ?
      FUNC_3(VAR_7, VAR_4->tx_power) : VAR_4->tx_power;
 }
 if (FUNC_0(VAR_4, &VAR_6))
  return -VAR_0;


 VAR_6.ieee_mode = VAR_2;
 if (FUNC_0(VAR_4, &VAR_6))
  return -VAR_0;


 if (VAR_4->ieee->abg_true) {
  VAR_6.ieee_mode = VAR_1;
  VAR_6.num_channels = VAR_5->a_channels;
  for (VAR_8 = 0; VAR_8 < VAR_6.num_channels; VAR_8++) {
   VAR_7 = VAR_5->a[VAR_8].max_power;
   VAR_6.channels_tx_power[VAR_8].channel_number =
       VAR_5->a[VAR_8].channel;
   VAR_6.channels_tx_power[VAR_8].tx_power = VAR_7 ?
       FUNC_3(VAR_7, VAR_4->tx_power) : VAR_4->tx_power;
  }
  if (FUNC_0(VAR_4, &VAR_6))
   return -VAR_0;
 }
 return 0;
}
