
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hw_mode_spec {int supported_rates; int num_channels; struct channel_info* channels_info; int supported_bands; int channels; } ;
struct rt2x00_dev {int cap_flags; TYPE_2__* hw; int dev; struct hw_mode_spec spec; } ;
struct channel_info {void* default_power1; void* max_power; } ;
struct TYPE_5__ {int flags; int max_rates; int max_report_rates; int max_rate_tries; TYPE_1__* wiphy; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int ) ;
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
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_3 (char) ;
 int VAR_17 ;
 struct channel_info* FUNC_4 (int,int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 char* FUNC_5 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_20)
{
 struct hw_mode_spec *VAR_21 = &VAR_20->spec;
 struct channel_info *VAR_22;
 char *VAR_23;
 unsigned int VAR_24;




 VAR_20->hw->wiphy->flags &= ~VAR_17;




 VAR_20->hw->flags =
     VAR_6 |
     VAR_8 |
     VAR_9 |
     VAR_7;

 FUNC_1(VAR_20->hw, VAR_20->dev);
 FUNC_2(VAR_20->hw,
    FUNC_5(VAR_20,
         VAR_1));
 VAR_20->hw->max_rates = 1;
 VAR_20->hw->max_report_rates = 7;
 VAR_20->hw->max_rate_tries = 1;




 VAR_21->supported_bands = VAR_13;
 VAR_21->supported_rates = VAR_15 | VAR_16;

 if (!FUNC_7(VAR_0, &VAR_20->cap_flags)) {
  VAR_21->num_channels = 14;
  VAR_21->channels = VAR_18;
 } else {
  VAR_21->num_channels = 14;
  VAR_21->channels = VAR_19;
 }

 if (FUNC_6(VAR_20, VAR_11) || FUNC_6(VAR_20, VAR_12)) {
  VAR_21->supported_bands |= VAR_14;
  VAR_21->num_channels = FUNC_0(VAR_19);
 }




 VAR_22 = FUNC_4(VAR_21->num_channels, sizeof(*VAR_22), VAR_5);
 if (!VAR_22)
  return -VAR_4;

 VAR_21->channels_info = VAR_22;

 VAR_23 = FUNC_5(VAR_20, VAR_3);
 for (VAR_24 = 0; VAR_24 < 14; VAR_24++) {
  VAR_22[VAR_24].max_power = VAR_10;
  VAR_22[VAR_24].default_power1 = FUNC_3(VAR_23[VAR_24]);
 }

 if (VAR_21->num_channels > 14) {
  VAR_23 = FUNC_5(VAR_20, VAR_2);
  for (VAR_24 = 14; VAR_24 < VAR_21->num_channels; VAR_24++) {
   VAR_22[VAR_24].max_power = VAR_10;
   VAR_22[VAR_24].default_power1 =
     FUNC_3(VAR_23[VAR_24 - 14]);
  }
 }

 return 0;
}
