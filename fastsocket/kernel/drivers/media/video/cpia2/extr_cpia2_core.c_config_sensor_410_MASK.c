
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_8__ {TYPE_2__* registers; } ;
struct cpia2_command {int req_mode; int reg_count; TYPE_3__ buffer; int direction; } ;
struct TYPE_9__ {int width; int height; } ;
struct TYPE_6__ {scalar_t__ device_type; } ;
struct TYPE_10__ {TYPE_4__ roi; TYPE_1__ pnp_id; } ;
struct camera_data {TYPE_5__ params; } ;
struct TYPE_7__ {int value; int index; } ;


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
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (char*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct camera_data*,struct cpia2_command*) ;
 int FUNC_4 (struct camera_data*,int) ;

__attribute__((used)) static int FUNC_5(struct camera_data *VAR_39,
       int VAR_40, int VAR_41)
{
 struct cpia2_command VAR_42;
 int VAR_43 = 0;
 int VAR_44;
 int VAR_45;
 int VAR_46 = VAR_40;
 int VAR_47 = VAR_41;




 if (VAR_46 > VAR_31)
  VAR_46 = VAR_31;
 if (VAR_47 > VAR_32)
  VAR_47 = VAR_32;

 VAR_44 = FUNC_2(VAR_46, VAR_47);

 FUNC_0("Config 410: width = %d, height = %d\n", VAR_46, VAR_47);
 FUNC_0("Image size returned is %d\n", VAR_44);
 if (VAR_44 >= 0) {
  FUNC_4(VAR_39, VAR_44);
  VAR_46 = VAR_39->params.roi.width;
  VAR_47 = VAR_39->params.roi.height;

  FUNC_0("After set_vw_size(), width = %d, height = %d\n",
      VAR_46, VAR_47);
  if (VAR_46 <= 176 && VAR_47 <= 144) {
   FUNC_0("image type = VIDEOSIZE_QCIF\n");
   VAR_45 = VAR_37;
  }
  else if (VAR_46 <= 320 && VAR_47 <= 240) {
   FUNC_0("image type = VIDEOSIZE_QVGA\n");
   VAR_45 = VAR_38;
  }
  else {
   FUNC_0("image type = VIDEOSIZE_CIF\n");
   VAR_45 = VAR_36;
  }
 } else {
  FUNC_1("ConfigSensor410 failed\n");
  return -VAR_30;
 }

 VAR_42.req_mode = VAR_0 | VAR_1;
 VAR_42.direction = VAR_35;


 VAR_42.buffer.registers[VAR_43].index = VAR_9;
 if (VAR_45 == VAR_36) {
  VAR_42.buffer.registers[VAR_43++].value =
      (u8) (VAR_11 |
     VAR_10);
 } else {
  VAR_42.buffer.registers[VAR_43++].value =
      (u8) VAR_11;
 }


 VAR_42.buffer.registers[VAR_43].index = VAR_6;
 if (VAR_45 == VAR_37) {
  if (VAR_39->params.pnp_id.device_type == VAR_29) {
   VAR_42.buffer.registers[VAR_43++].value=
    (u8)(VAR_2 |
         VAR_3 |
         VAR_8);
   FUNC_0("VC_Clocks (0xc4) should be B\n");
  }
  else {
   VAR_42.buffer.registers[VAR_43++].value=
    (u8)(VAR_4 |
         VAR_8);
  }
 } else {
  if (VAR_39->params.pnp_id.device_type == VAR_29) {
   VAR_42.buffer.registers[VAR_43++].value =
      (u8) (VAR_2 |
     VAR_7);
  }
  else {
   VAR_42.buffer.registers[VAR_43++].value =
      (u8) (VAR_4 |
     VAR_5 |
     VAR_7);
  }
 }
 FUNC_0("VC_Clocks (0xc4) = 0x%0X\n", VAR_42.buffer.registers[VAR_43-1].value);


 VAR_42.buffer.registers[VAR_43].index = VAR_17;
 if (VAR_45 == VAR_37)
  VAR_42.buffer.registers[VAR_43++].value =
      (u8) (VAR_33 / 4);
 else
  VAR_42.buffer.registers[VAR_43++].value =
      (u8) (VAR_31 / 4);


 VAR_42.buffer.registers[VAR_43].index = VAR_25;
 if (VAR_45 == VAR_37)
  VAR_42.buffer.registers[VAR_43++].value = (u8) 0;
 else
  VAR_42.buffer.registers[VAR_43++].value = (u8) 1;

 VAR_42.buffer.registers[VAR_43].index = VAR_26;
 if (VAR_45 == VAR_37)
  VAR_42.buffer.registers[VAR_43++].value = (u8) 208;
 else
  VAR_42.buffer.registers[VAR_43++].value = (u8) 160;

 VAR_42.buffer.registers[VAR_43].index = VAR_27;
 if (VAR_45 == VAR_37)
  VAR_42.buffer.registers[VAR_43++].value = (u8) 0;
 else
  VAR_42.buffer.registers[VAR_43++].value = (u8) 1;

 VAR_42.buffer.registers[VAR_43].index = VAR_28;
 if (VAR_45 == VAR_37)
  VAR_42.buffer.registers[VAR_43++].value = (u8) 160;
 else
  VAR_42.buffer.registers[VAR_43++].value = (u8) 64;


 VAR_42.buffer.registers[VAR_43].index = VAR_18;
 VAR_42.buffer.registers[VAR_43++].value = VAR_39->params.roi.width / 4;

 VAR_42.buffer.registers[VAR_43].index = VAR_19;
 VAR_42.buffer.registers[VAR_43++].value = VAR_39->params.roi.height / 4;


 VAR_42.buffer.registers[VAR_43].index = VAR_12;
 if (VAR_45 == VAR_37)
  VAR_42.buffer.registers[VAR_43++].value =
      (u8) (((VAR_33 / 4) - (VAR_46 / 4)) / 2);
 else
  VAR_42.buffer.registers[VAR_43++].value =
      (u8) (((VAR_31 / 4) - (VAR_46 / 4)) / 2);

 VAR_42.buffer.registers[VAR_43].index = VAR_20;
 if (VAR_45 == VAR_37)
  VAR_42.buffer.registers[VAR_43++].value =
      (u8) (((VAR_34 / 4) - (VAR_47 / 4)) / 2);
 else
  VAR_42.buffer.registers[VAR_43++].value =
      (u8) (((VAR_32 / 4) - (VAR_47 / 4)) / 2);


 VAR_42.buffer.registers[VAR_43].index = VAR_16;
 VAR_42.buffer.registers[VAR_43++].value = (u8) 0;

 VAR_42.buffer.registers[VAR_43].index = VAR_24;
 VAR_42.buffer.registers[VAR_43++].value = (u8) 0;

 VAR_42.buffer.registers[VAR_43].index = VAR_15;
 VAR_42.buffer.registers[VAR_43++].value = (u8) 31;

 VAR_42.buffer.registers[VAR_43].index = VAR_23;
 VAR_42.buffer.registers[VAR_43++].value = (u8) 31;

 VAR_42.buffer.registers[VAR_43].index = VAR_14;
 VAR_42.buffer.registers[VAR_43++].value = (u8) 0;

 VAR_42.buffer.registers[VAR_43].index = VAR_22;
 VAR_42.buffer.registers[VAR_43++].value = (u8) 0;

 VAR_42.buffer.registers[VAR_43].index = VAR_13;
 VAR_42.buffer.registers[VAR_43++].value = (u8) 0x81;

 VAR_42.buffer.registers[VAR_43].index = VAR_21;
 VAR_42.buffer.registers[VAR_43++].value = (u8) 0x81;

 VAR_42.reg_count = VAR_43;

 FUNC_3(VAR_39, &VAR_42);

 return VAR_43;
}
