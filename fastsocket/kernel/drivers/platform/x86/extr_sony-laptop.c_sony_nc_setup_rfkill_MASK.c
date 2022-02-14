
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct acpi_device {int dev; } ;
typedef enum sony_nc_rfkill { ____Placeholder_sony_nc_rfkill } sony_nc_rfkill ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 struct rfkill* FUNC_0 (char const*,int *,int,int *,void*) ;
 int FUNC_1 (struct rfkill*) ;
 int FUNC_2 (struct rfkill*) ;
 int FUNC_3 (struct rfkill*,int) ;
 int FUNC_4 (int,int,int*) ;
 struct rfkill** VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_8,
    enum sony_nc_rfkill VAR_9)
{
 int VAR_10 = 0;
 struct rfkill *VAR_11;
 enum rfkill_type VAR_12;
 const char *VAR_13;
 int VAR_14;
 bool VAR_15;

 switch (VAR_9) {
 case 130:
  VAR_12 = VAR_4;
  VAR_13 = "sony-wifi";
  break;
 case 131:
  VAR_12 = VAR_2;
  VAR_13 = "sony-bluetooth";
  break;
 case 128:
  VAR_12 = VAR_5;
  VAR_13 = "sony-wwan";
  break;
 case 129:
  VAR_12 = VAR_3;
  VAR_13 = "sony-wimax";
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = FUNC_0(VAR_13, &VAR_8->dev, VAR_12,
      &VAR_7, (void *)VAR_9);
 if (!VAR_11)
  return -VAR_1;

 FUNC_4(0x124, 0x200, &VAR_14);
 VAR_15 = !(VAR_14 & 0x1);
 FUNC_3(VAR_11, VAR_15);

 VAR_10 = FUNC_2(VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_11);
  return VAR_10;
 }
 VAR_6[VAR_9] = VAR_11;
 return VAR_10;
}
