
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int rf; } ;
struct TYPE_9__ {int tx_params; int* rx_mask; } ;
struct TYPE_10__ {int ht_supported; int cap; int ampdu_factor; int ampdu_density; TYPE_3__ mcs; } ;
struct hw_mode_spec {int supported_rates; int num_channels; struct channel_info* channels_info; TYPE_4__ ht; void* channels; int supported_bands; } ;
struct rt2x00_dev {int cap_flags; TYPE_1__ chip; TYPE_5__* hw; int dev; struct hw_mode_spec spec; } ;
struct channel_info {char default_power1; char default_power2; } ;
struct TYPE_11__ {int flags; int max_rates; int max_report_rates; int max_rate_tries; TYPE_2__* wiphy; } ;
struct TYPE_8__ {int flags; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_28 ;
 int VAR_29 ;

 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;






 int VAR_34 ;





 int VAR_35 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_40 ;
 int FUNC_4 (int ,int *) ;
 struct channel_info* FUNC_5 (int,int,int ) ;
 void* VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 int FUNC_6 (struct rt2x00_dev*,int ,int *) ;
 char* FUNC_7 (struct rt2x00_dev*,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_12 (struct rt2x00_dev*) ;
 int FUNC_13 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_14 (struct rt2x00_dev*,int) ;

__attribute__((used)) static int FUNC_15(struct rt2x00_dev *VAR_45)
{
 struct hw_mode_spec *VAR_46 = &VAR_45->spec;
 struct channel_info *VAR_47;
 char *VAR_48;
 char *VAR_49;
 unsigned int VAR_50;
 u16 VAR_51;
 u32 VAR_52;




 if (FUNC_11(VAR_45) || FUNC_12(VAR_45))
  VAR_45->hw->wiphy->flags &= ~VAR_40;




 VAR_45->hw->flags =
     VAR_25 |
     VAR_27 |
     VAR_23 |
     VAR_21 |
     VAR_24 |
     VAR_26;
 if (!FUNC_13(VAR_45))
  VAR_45->hw->flags |=
   VAR_22;

 FUNC_1(VAR_45->hw, VAR_45->dev);
 FUNC_2(VAR_45->hw,
    FUNC_7(VAR_45,
         VAR_1));
 VAR_45->hw->max_rates = 1;
 VAR_45->hw->max_report_rates = 7;
 VAR_45->hw->max_rate_tries = 1;

 FUNC_8(VAR_45, VAR_2, &VAR_51);




 VAR_46->supported_bands = VAR_36;
 VAR_46->supported_rates = VAR_38 | VAR_39;

 if (FUNC_14(VAR_45, VAR_32) ||
     FUNC_14(VAR_45, VAR_30)) {
  VAR_46->num_channels = 14;
  VAR_46->channels = VAR_41;
 } else if (FUNC_14(VAR_45, VAR_33) ||
     FUNC_14(VAR_45, VAR_31)) {
  VAR_46->supported_bands |= VAR_37;
  VAR_46->num_channels = FUNC_0(VAR_41);
  VAR_46->channels = VAR_41;
 } else if (FUNC_14(VAR_45, 138) ||
     FUNC_14(VAR_45, 139) ||
     FUNC_14(VAR_45, 137) ||
     FUNC_14(VAR_45, 136) ||
     FUNC_14(VAR_45, 134) ||
     FUNC_14(VAR_45, 133) ||
     FUNC_14(VAR_45, VAR_34) ||
     FUNC_14(VAR_45, 132) ||
     FUNC_14(VAR_45, 131) ||
     FUNC_14(VAR_45, 130) ||
     FUNC_14(VAR_45, 129) ||
     FUNC_14(VAR_45, 128)) {
  VAR_46->num_channels = 14;
  VAR_46->channels = VAR_42;
 } else if (FUNC_14(VAR_45, 135)) {
  VAR_46->supported_bands |= VAR_37;
  VAR_46->num_channels = FUNC_0(VAR_42);
  VAR_46->channels = VAR_42;
 } else if (FUNC_14(VAR_45, VAR_35)) {
  VAR_46->supported_bands |= VAR_37;

  FUNC_6(VAR_45, VAR_28, &VAR_52);
  if (FUNC_10(VAR_52, VAR_29)) {
   VAR_46->num_channels = FUNC_0(VAR_44);
   VAR_46->channels = VAR_44;
  } else {
   VAR_46->num_channels = FUNC_0(VAR_43);
   VAR_46->channels = VAR_43;
  }
 }

 if (FUNC_3(!VAR_46->channels))
  return -VAR_9;




 if (!FUNC_14(VAR_45, 139))
  VAR_46->ht.ht_supported = 1;
 else
  VAR_46->ht.ht_supported = 0;

 VAR_46->ht.cap =
     VAR_16 |
     VAR_12 |
     VAR_14 |
     VAR_15;

 if (FUNC_9(VAR_51, VAR_4) >= 2)
  VAR_46->ht.cap |= VAR_17;

 VAR_46->ht.cap |=
     FUNC_9(VAR_51, VAR_3) <<
  VAR_13;

 VAR_46->ht.ampdu_factor = 3;
 VAR_46->ht.ampdu_density = 4;
 VAR_46->ht.mcs.tx_params =
     VAR_18 |
     VAR_20 |
     ((FUNC_9(VAR_51, VAR_4) - 1) <<
  VAR_19);

 switch (FUNC_9(VAR_51, VAR_3)) {
 case 3:
  VAR_46->ht.mcs.rx_mask[2] = 0xff;
 case 2:
  VAR_46->ht.mcs.rx_mask[1] = 0xff;
 case 1:
  VAR_46->ht.mcs.rx_mask[0] = 0xff;
  VAR_46->ht.mcs.rx_mask[4] = 0x1;
  break;
 }




 VAR_47 = FUNC_5(VAR_46->num_channels, sizeof(*VAR_47), VAR_11);
 if (!VAR_47)
  return -VAR_10;

 VAR_46->channels_info = VAR_47;

 VAR_48 = FUNC_7(VAR_45, VAR_7);
 VAR_49 = FUNC_7(VAR_45, VAR_8);

 for (VAR_50 = 0; VAR_50 < 14; VAR_50++) {
  VAR_47[VAR_50].default_power1 = VAR_48[VAR_50];
  VAR_47[VAR_50].default_power2 = VAR_49[VAR_50];
 }

 if (VAR_46->num_channels > 14) {
  VAR_48 = FUNC_7(VAR_45, VAR_5);
  VAR_49 = FUNC_7(VAR_45, VAR_6);

  for (VAR_50 = 14; VAR_50 < VAR_46->num_channels; VAR_50++) {
   VAR_47[VAR_50].default_power1 = VAR_48[VAR_50 - 14];
   VAR_47[VAR_50].default_power2 = VAR_49[VAR_50 - 14];
  }
 }

 switch (VAR_45->chip.rf) {
 case 139:
 case 138:
 case 137:
 case 136:
 case 133:
 case 135:
 case 134:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_4(VAR_0, &VAR_45->cap_flags);
  break;
 }

 return 0;
}
