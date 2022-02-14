
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wireless_dev {TYPE_5__* wiphy; } ;
struct net_device {int dummy; } ;
struct libipw_geo {int bg_channels; int a_channels; TYPE_3__* a; TYPE_2__* bg; } ;
struct ipw_priv {TYPE_1__* pci_dev; TYPE_7__* ieee; int mac_addr; } ;
struct ieee80211_supported_band {size_t band; int n_channels; int n_bitrates; int bitrates; TYPE_4__* channels; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_13__ {struct ieee80211_supported_band a_band; struct ieee80211_supported_band bg_band; struct wireless_dev wdev; } ;
struct TYPE_12__ {int n_cipher_suites; int cipher_suites; struct ieee80211_supported_band** bands; int perm_addr; } ;
struct TYPE_11__ {size_t band; int flags; int max_power; int hw_value; int center_freq; } ;
struct TYPE_10__ {int flags; int max_power; int channel; int freq; } ;
struct TYPE_9__ {int flags; int max_power; int channel; int freq; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_1 (int,int,int ) ;
 struct libipw_geo* FUNC_2 (TYPE_7__*) ;
 struct ipw_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_17)
{
 int VAR_18, VAR_19 = 0;
 struct ipw_priv *VAR_20 = FUNC_3(VAR_17);
 const struct libipw_geo *VAR_21 = FUNC_2(VAR_20->ieee);
 struct wireless_dev *VAR_22 = &VAR_20->ieee->wdev;

 FUNC_4(VAR_22->wiphy->perm_addr, VAR_20->mac_addr, VAR_2);


 if (VAR_21->bg_channels) {
  struct ieee80211_supported_band *VAR_23 = &VAR_20->ieee->bg_band;

  VAR_23->band = VAR_4;
  VAR_23->n_channels = VAR_21->bg_channels;
  VAR_23->channels = FUNC_1(VAR_21->bg_channels,
         sizeof(struct ieee80211_channel),
         VAR_3);
  if (!VAR_23->channels) {
   VAR_19 = -VAR_1;
   goto out;
  }

  for (VAR_18 = 0; VAR_18 < VAR_21->bg_channels; VAR_18++) {
   VAR_23->channels[VAR_18].band = VAR_4;
   VAR_23->channels[VAR_18].center_freq = VAR_21->bg[VAR_18].freq;
   VAR_23->channels[VAR_18].hw_value = VAR_21->bg[VAR_18].channel;
   VAR_23->channels[VAR_18].max_power = VAR_21->bg[VAR_18].max_power;
   if (VAR_21->bg[VAR_18].flags & VAR_10)
    VAR_23->channels[VAR_18].flags |=
     VAR_7;
   if (VAR_21->bg[VAR_18].flags & VAR_9)
    VAR_23->channels[VAR_18].flags |=
     VAR_6;
   if (VAR_21->bg[VAR_18].flags & VAR_11)
    VAR_23->channels[VAR_18].flags |=
     VAR_8;



  }

  VAR_23->bitrates = VAR_13;
  VAR_23->n_bitrates = VAR_15;

  VAR_22->wiphy->bands[VAR_4] = VAR_23;
 }


 if (VAR_21->a_channels) {
  struct ieee80211_supported_band *VAR_24 = &VAR_20->ieee->a_band;

  VAR_24->band = VAR_5;
  VAR_24->n_channels = VAR_21->a_channels;
  VAR_24->channels = FUNC_1(VAR_21->a_channels,
        sizeof(struct ieee80211_channel),
        VAR_3);
  if (!VAR_24->channels) {
   VAR_19 = -VAR_1;
   goto out;
  }

  for (VAR_18 = 0; VAR_18 < VAR_21->a_channels; VAR_18++) {
   VAR_24->channels[VAR_18].band = VAR_5;
   VAR_24->channels[VAR_18].center_freq = VAR_21->a[VAR_18].freq;
   VAR_24->channels[VAR_18].hw_value = VAR_21->a[VAR_18].channel;
   VAR_24->channels[VAR_18].max_power = VAR_21->a[VAR_18].max_power;
   if (VAR_21->a[VAR_18].flags & VAR_10)
    VAR_24->channels[VAR_18].flags |=
     VAR_7;
   if (VAR_21->a[VAR_18].flags & VAR_9)
    VAR_24->channels[VAR_18].flags |=
     VAR_6;
   if (VAR_21->a[VAR_18].flags & VAR_11)
    VAR_24->channels[VAR_18].flags |=
     VAR_8;



  }

  VAR_24->bitrates = VAR_12;
  VAR_24->n_bitrates = VAR_14;

  VAR_22->wiphy->bands[VAR_5] = VAR_24;
 }

 VAR_22->wiphy->cipher_suites = VAR_16;
 VAR_22->wiphy->n_cipher_suites = FUNC_0(VAR_16);

 FUNC_5(VAR_22->wiphy, &VAR_20->pci_dev->dev);


 if (FUNC_6(VAR_22->wiphy))
  VAR_19 = -VAR_0;
out:
 return VAR_19;
}
