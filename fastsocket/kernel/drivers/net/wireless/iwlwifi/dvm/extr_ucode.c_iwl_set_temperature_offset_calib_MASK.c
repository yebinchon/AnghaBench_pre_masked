
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {TYPE_1__* nvm_data; } ;
struct iwl_calib_temperature_offset_cmd {scalar_t__ radio_sensor_offset; int hdr; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ raw_temperature; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,void*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct iwl_calib_temperature_offset_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iwl_priv *VAR_2)
{
 struct iwl_calib_temperature_offset_cmd VAR_3;

 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 FUNC_2(&VAR_3.hdr, VAR_1);
 VAR_3.radio_sensor_offset = VAR_2->nvm_data->raw_temperature;
 if (!(VAR_3.radio_sensor_offset))
  VAR_3.radio_sensor_offset = VAR_0;

 FUNC_0(VAR_2, "Radio sensor offset: %d\n",
   FUNC_3(VAR_3.radio_sensor_offset));
 return FUNC_1(VAR_2, (void *)&VAR_3, sizeof(VAR_3));
}
