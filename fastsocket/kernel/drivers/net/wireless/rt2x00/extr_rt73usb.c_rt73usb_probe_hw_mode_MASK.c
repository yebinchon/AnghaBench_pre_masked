
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hw_mode_spec {int supported_rates; int num_channels; struct channel_info* channels_info; void* channels; int supported_bands; } ;
struct rt2x00_dev {TYPE_1__* hw; int dev; struct hw_mode_spec spec; } ;
struct channel_info {void* default_power1; void* max_power; } ;
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
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_3 (char) ;
 struct channel_info* FUNC_4 (int,int,int ) ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 char* FUNC_5 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_20)
{
 struct hw_mode_spec *VAR_21 = &VAR_20->spec;
 struct channel_info *VAR_22;
 char *VAR_23;
 unsigned int VAR_24;
 VAR_20->hw->flags =
     VAR_6 |
     VAR_7 |
     VAR_5;

 FUNC_1(VAR_20->hw, VAR_20->dev);
 FUNC_2(VAR_20->hw,
    FUNC_5(VAR_20,
         VAR_0));




 VAR_21->supported_bands = VAR_13;
 VAR_21->supported_rates = VAR_15 | VAR_16;

 if (FUNC_6(VAR_20, VAR_10)) {
  VAR_21->num_channels = FUNC_0(VAR_19);
  VAR_21->channels = VAR_19;
 } else if (FUNC_6(VAR_20, VAR_12)) {
  VAR_21->supported_bands |= VAR_14;
  VAR_21->num_channels = FUNC_0(VAR_18);
  VAR_21->channels = VAR_18;
 } else if (FUNC_6(VAR_20, VAR_9)) {
  VAR_21->num_channels = 14;
  VAR_21->channels = VAR_17;
 } else if (FUNC_6(VAR_20, VAR_11)) {
  VAR_21->supported_bands |= VAR_14;
  VAR_21->num_channels = FUNC_0(VAR_17);
  VAR_21->channels = VAR_17;
 }




 VAR_22 = FUNC_4(VAR_21->num_channels, sizeof(*VAR_22), VAR_4);
 if (!VAR_22)
  return -VAR_3;

 VAR_21->channels_info = VAR_22;

 VAR_23 = FUNC_5(VAR_20, VAR_2);
 for (VAR_24 = 0; VAR_24 < 14; VAR_24++) {
  VAR_22[VAR_24].max_power = VAR_8;
  VAR_22[VAR_24].default_power1 = FUNC_3(VAR_23[VAR_24]);
 }

 if (VAR_21->num_channels > 14) {
  VAR_23 = FUNC_5(VAR_20, VAR_1);
  for (VAR_24 = 14; VAR_24 < VAR_21->num_channels; VAR_24++) {
   VAR_22[VAR_24].max_power = VAR_8;
   VAR_22[VAR_24].default_power1 =
     FUNC_3(VAR_23[VAR_24 - 14]);
  }
 }

 return 0;
}
