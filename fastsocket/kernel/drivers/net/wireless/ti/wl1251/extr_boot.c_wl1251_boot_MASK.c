
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int radio_type; int major; int minor; } ;
struct wl1251 {int fw_len; TYPE_1__ boot_attr; scalar_t__ use_eeprom; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct wl1251*) ;
 int FUNC_2 (struct wl1251*) ;
 int FUNC_3 (struct wl1251*) ;
 int FUNC_4 (struct wl1251*) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct wl1251*,int ) ;
 int FUNC_9 (struct wl1251*,int ,int) ;

int FUNC_10(struct wl1251 *VAR_10)
{
 int VAR_11 = 0, VAR_12;
 u32 VAR_13, VAR_14;


 FUNC_9(VAR_10, VAR_1, VAR_4);

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11 < 0)
  goto out;


 if (VAR_10->use_eeprom) {
  FUNC_9(VAR_10, VAR_2, VAR_8);

  FUNC_0(40);
  FUNC_9(VAR_10, VAR_0, VAR_9);
 } else {
  VAR_11 = FUNC_5(VAR_10);
  if (VAR_11 < 0)
   goto out;



  FUNC_9(VAR_10, VAR_0, VAR_10->fw_len);
 }


 VAR_13 = FUNC_8(VAR_10, VAR_6);


 VAR_10->boot_attr.radio_type = (VAR_13 & 0x0000FF00) >> 8;
 VAR_10->boot_attr.major = (VAR_13 & 0x00FF0000) >> 16;
 VAR_13 = FUNC_8(VAR_10, VAR_7);


 VAR_10->boot_attr.minor = (VAR_13 & 0x00FF0000) >> 16;
 VAR_12 = (VAR_13 & 0xFF000000) >> 24;

 FUNC_6(VAR_3, "radioType 0x%x majorE2Ver 0x%x "
       "minorE2Ver 0x%x minor_minor_e2_ver 0x%x",
       VAR_10->boot_attr.radio_type, VAR_10->boot_attr.major,
       VAR_10->boot_attr.minor, VAR_12);

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11 < 0)
  goto out;


 VAR_14 = FUNC_8(VAR_10, VAR_1);

 FUNC_6(VAR_3, "halt boot_data 0x%x", VAR_14);




 if ((VAR_14 & VAR_4) == 0) {
  FUNC_7("boot failed, ECPU_CONTROL_HALT not set");
  VAR_11 = -VAR_5;
  goto out;
 }

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 < 0)
  goto out;


 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11 < 0)
  goto out;

out:
 return VAR_11;
}
