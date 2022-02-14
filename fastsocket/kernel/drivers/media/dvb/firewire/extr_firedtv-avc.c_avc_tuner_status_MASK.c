
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_tuner_status {int active_system; int searching; int moving; int no_rf; int input; int selected_antenna; int ber; int signal_strength; int raster_frequency; int rf_frequency; int man_dep_info_length; int front_end_error; int antenna_error; int front_end_power_status; int power_supply; int carrier_noise_ratio; int power_supply_voltage; int antenna_voltage; int firewire_bus_voltage; int ca_mmi; int ca_pmt_reply; int ca_date_time_request; int ca_application_info; int ca_module_present_status; int ca_dvb_flag; int ca_error_flag; int ca_initialization_status; } ;
struct firedtv {int subunit; int avc_data_length; int avc_mutex; int device; scalar_t__ avc_data; } ;
struct avc_response_frame {scalar_t__ response; int* operand; } ;
struct avc_command_frame {int subunit; int* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct avc_command_frame*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct firedtv *VAR_8, struct firedtv_tuner_status *VAR_9)
{
 struct avc_command_frame *VAR_10 = (void *)VAR_8->avc_data;
 struct avc_response_frame *VAR_11 = (void *)VAR_8->avc_data;
 int VAR_12, VAR_13;

 FUNC_3(&VAR_8->avc_mutex);

 VAR_10->ctype = VAR_0;
 VAR_10->subunit = VAR_4 | VAR_8->subunit;
 VAR_10->opcode = VAR_1;

 VAR_10->operand[0] = VAR_5;
 VAR_10->operand[1] = 0xff;





 FUNC_1(VAR_10, 2, 31);

 VAR_8->avc_data_length = 12;
 VAR_13 = FUNC_0(VAR_8);
 if (VAR_13 < 0)
  goto out;

 if (VAR_11->response != VAR_3 &&
     VAR_11->response != VAR_2) {
  FUNC_2(VAR_8->device, "cannot read tuner status\n");
  VAR_13 = -VAR_6;
  goto out;
 }

 VAR_12 = VAR_11->operand[9];
 if (VAR_11->operand[1] != 0x10 || VAR_12 != VAR_7) {
  FUNC_2(VAR_8->device, "got invalid tuner status\n");
  VAR_13 = -VAR_6;
  goto out;
 }

 VAR_9->active_system = VAR_11->operand[10];
 VAR_9->searching = VAR_11->operand[11] >> 7 & 1;
 VAR_9->moving = VAR_11->operand[11] >> 6 & 1;
 VAR_9->no_rf = VAR_11->operand[11] >> 5 & 1;
 VAR_9->input = VAR_11->operand[12] >> 7 & 1;
 VAR_9->selected_antenna = VAR_11->operand[12] & 0x7f;
 VAR_9->ber = VAR_11->operand[13] << 24 |
       VAR_11->operand[14] << 16 |
       VAR_11->operand[15] << 8 |
       VAR_11->operand[16];
 VAR_9->signal_strength = VAR_11->operand[17];
 VAR_9->raster_frequency = VAR_11->operand[18] >> 6 & 2;
 VAR_9->rf_frequency = (VAR_11->operand[18] & 0x3f) << 16 |
       VAR_11->operand[19] << 8 |
       VAR_11->operand[20];
 VAR_9->man_dep_info_length = VAR_11->operand[21];
 VAR_9->front_end_error = VAR_11->operand[22] >> 4 & 1;
 VAR_9->antenna_error = VAR_11->operand[22] >> 3 & 1;
 VAR_9->front_end_power_status = VAR_11->operand[22] >> 1 & 1;
 VAR_9->power_supply = VAR_11->operand[22] & 1;
 VAR_9->carrier_noise_ratio = VAR_11->operand[23] << 8 |
       VAR_11->operand[24];
 VAR_9->power_supply_voltage = VAR_11->operand[27];
 VAR_9->antenna_voltage = VAR_11->operand[28];
 VAR_9->firewire_bus_voltage = VAR_11->operand[29];
 VAR_9->ca_mmi = VAR_11->operand[30] & 1;
 VAR_9->ca_pmt_reply = VAR_11->operand[31] >> 7 & 1;
 VAR_9->ca_date_time_request = VAR_11->operand[31] >> 6 & 1;
 VAR_9->ca_application_info = VAR_11->operand[31] >> 5 & 1;
 VAR_9->ca_module_present_status = VAR_11->operand[31] >> 4 & 1;
 VAR_9->ca_dvb_flag = VAR_11->operand[31] >> 3 & 1;
 VAR_9->ca_error_flag = VAR_11->operand[31] >> 2 & 1;
 VAR_9->ca_initialization_status = VAR_11->operand[31] >> 1 & 1;
out:
 FUNC_4(&VAR_8->avc_mutex);

 return VAR_13;
}
