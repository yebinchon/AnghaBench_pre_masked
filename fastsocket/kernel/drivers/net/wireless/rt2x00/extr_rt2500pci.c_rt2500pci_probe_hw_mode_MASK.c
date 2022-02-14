
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hw_mode_spec {int supported_rates; int num_channels; struct channel_info* channels_info; void* channels; int supported_bands; } ;
struct rt2x00_dev {TYPE_1__* hw; int dev; struct hw_mode_spec spec; } ;
struct channel_info {int default_power1; void* max_power; } ;
struct TYPE_3__ {int flags; } ;


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
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (char) ;
 struct channel_info* FUNC_4 (int,int,int ) ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 char* FUNC_5 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_26)
{
 struct hw_mode_spec *VAR_27 = &VAR_26->spec;
 struct channel_info *VAR_28;
 char *VAR_29;
 unsigned int VAR_30;




 VAR_26->hw->flags = VAR_5 |
          VAR_7 |
          VAR_8 |
          VAR_6;

 FUNC_1(VAR_26->hw, VAR_26->dev);
 FUNC_2(VAR_26->hw,
    FUNC_5(VAR_26,
         VAR_1));




 VAR_27->supported_bands = VAR_16;
 VAR_27->supported_rates = VAR_18 | VAR_19;

 if (FUNC_6(VAR_26, VAR_10)) {
  VAR_27->num_channels = FUNC_0(VAR_21);
  VAR_27->channels = VAR_21;
 } else if (FUNC_6(VAR_26, VAR_11)) {
  VAR_27->num_channels = FUNC_0(VAR_22);
  VAR_27->channels = VAR_22;
 } else if (FUNC_6(VAR_26, VAR_12)) {
  VAR_27->num_channels = FUNC_0(VAR_23);
  VAR_27->channels = VAR_23;
 } else if (FUNC_6(VAR_26, VAR_13)) {
  VAR_27->num_channels = FUNC_0(VAR_24);
  VAR_27->channels = VAR_24;
 } else if (FUNC_6(VAR_26, VAR_14)) {
  VAR_27->num_channels = FUNC_0(VAR_25);
  VAR_27->channels = VAR_25;
 } else if (FUNC_6(VAR_26, VAR_15)) {
  VAR_27->supported_bands |= VAR_17;
  VAR_27->num_channels = FUNC_0(VAR_20);
  VAR_27->channels = VAR_20;
 }




 VAR_28 = FUNC_4(VAR_27->num_channels, sizeof(*VAR_28), VAR_4);
 if (!VAR_28)
  return -VAR_3;

 VAR_27->channels_info = VAR_28;

 VAR_29 = FUNC_5(VAR_26, VAR_2);
 for (VAR_30 = 0; VAR_30 < 14; VAR_30++) {
  VAR_28[VAR_30].max_power = VAR_9;
  VAR_28[VAR_30].default_power1 = FUNC_3(VAR_29[VAR_30]);
 }

 if (VAR_27->num_channels > 14) {
  for (VAR_30 = 14; VAR_30 < VAR_27->num_channels; VAR_30++) {
   VAR_28[VAR_30].max_power = VAR_9;
   VAR_28[VAR_30].default_power1 = VAR_0;
  }
 }

 return 0;
}
