
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid ;
typedef int u8 ;
struct TYPE_2__ {char* device_name; char* manufacturer; char* model_name; char* model_number; char* serial_number; int pri_dev_type; } ;
struct wps_registrar_device {TYPE_1__ dev; int uuid; } ;
struct wps_registrar {int dummy; } ;
typedef int devtype ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char*,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (int ,char*,int) ;
 struct wps_registrar_device* FUNC_3 (struct wps_registrar*,int const*) ;

int FUNC_4(struct wps_registrar *VAR_1, const u8 *VAR_2,
      char *VAR_3, size_t VAR_4)
{
 struct wps_registrar_device *VAR_5;
 int VAR_6 = 0, VAR_7;
 char VAR_8[40];
 char VAR_9[VAR_0];

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5 == ((void*)0))
  return 0;
 if (FUNC_1(VAR_5->uuid, VAR_8, sizeof(VAR_8)))
  return 0;

 VAR_7 = FUNC_0(VAR_3 + VAR_6, VAR_4 - VAR_6,
     "wpsUuid=%s\n"
     "wpsPrimaryDeviceType=%s\n"
     "wpsDeviceName=%s\n"
     "wpsManufacturer=%s\n"
     "wpsModelName=%s\n"
     "wpsModelNumber=%s\n"
     "wpsSerialNumber=%s\n",
     VAR_8,
     FUNC_2(VAR_5->dev.pri_dev_type, VAR_9,
            sizeof(VAR_9)),
     VAR_5->dev.device_name ? VAR_5->dev.device_name : "",
     VAR_5->dev.manufacturer ? VAR_5->dev.manufacturer : "",
     VAR_5->dev.model_name ? VAR_5->dev.model_name : "",
     VAR_5->dev.model_number ? VAR_5->dev.model_number : "",
     VAR_5->dev.serial_number ? VAR_5->dev.serial_number : "");
 if (VAR_7 < 0 || (size_t) VAR_7 >= VAR_4 - VAR_6)
  return VAR_6;
 VAR_6 += VAR_7;

 return VAR_6;
}
