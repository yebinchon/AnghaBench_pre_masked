
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_nvm_data {struct ieee80211_channel* channels; } ;
struct iwl_cfg {int dummy; } ;
struct ieee80211_channel {scalar_t__ band; scalar_t__ max_power; scalar_t__ hw_value; int flags; int center_freq; } ;
struct device {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct device*,char*,scalar_t__,...) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int const* const) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_28 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_29, const struct iwl_cfg *VAR_30,
    struct iwl_nvm_data *VAR_31,
    const __le16 * const VAR_32)
{
 int VAR_33;
 int VAR_34 = 0;
 struct ieee80211_channel *VAR_35;
 u16 VAR_36;
 bool VAR_37;

 for (VAR_33 = 0; VAR_33 < VAR_14; VAR_33++) {
  VAR_36 = FUNC_2(VAR_32 + VAR_33);
  if (!(VAR_36 & VAR_24)) {
   FUNC_1(VAR_29,
      "Ch. %d Flags %x [%sGHz] - No traffic\n",
      VAR_28[VAR_33],
      VAR_36,
      (VAR_33 >= VAR_17) ?
      "5.2" : "2.4");
   continue;
  }

  VAR_35 = &VAR_31->channels[VAR_34];
  VAR_34++;

  VAR_35->hw_value = VAR_28[VAR_33];
  VAR_35->band = (VAR_33 < VAR_17) ?
    VAR_4 : VAR_5;
  VAR_35->center_freq =
   FUNC_3(
    VAR_35->hw_value, VAR_35->band);


  VAR_35->flags = VAR_8;
  if (VAR_33 < VAR_17 &&
      (VAR_36 & VAR_19)) {
   if (VAR_28[VAR_33] <= VAR_15)
    VAR_35->flags &= ~VAR_10;
   if (VAR_28[VAR_33] >= VAR_2)
    VAR_35->flags &= ~VAR_9;
  } else if (VAR_28[VAR_33] <= VAR_16 &&
      (VAR_36 & VAR_19)) {
   if ((VAR_33 - VAR_17) % 2 == 0)
    VAR_35->flags &= ~VAR_10;
   else
    VAR_35->flags &= ~VAR_9;
  }
  if (!(VAR_36 & VAR_20))
   VAR_35->flags |= VAR_7;
  if (!(VAR_36 & VAR_18))
   VAR_35->flags |= VAR_6;

  if (!(VAR_36 & VAR_22))
   VAR_35->flags |= VAR_11;

  if (!(VAR_36 & VAR_21))
   VAR_35->flags |= VAR_12;

  if (VAR_36 & VAR_23)
   VAR_35->flags |= VAR_13;




  VAR_35->max_power = 0;
  VAR_37 = VAR_35->band == VAR_5;
  FUNC_1(VAR_29,
     "Ch. %d [%sGHz] %s%s%s%s%s%s(0x%02x %ddBm): Ad-Hoc %ssupported\n",
     VAR_35->hw_value,
     VAR_37 ? "5.2" : "2.4",
     FUNC_0(VAR_26),
     FUNC_0(VAR_3),
     FUNC_0(VAR_0),
     FUNC_0(VAR_25),
     FUNC_0(VAR_27),
     FUNC_0(VAR_1),
     VAR_36,
     VAR_35->max_power,
     ((VAR_36 & VAR_22) &&
      !(VAR_36 & VAR_23))
     ? "" : "not ");
 }

 return VAR_34;
}
