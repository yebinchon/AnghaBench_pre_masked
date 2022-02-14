
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_device {int port_spec; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
 int VAR_0 ;



 struct hso_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
           struct device_attribute *VAR_2,
           char *VAR_3)
{
 struct hso_device *VAR_4 = FUNC_0(VAR_1);
 char *VAR_5;

 if (!VAR_4)
  return 0;

 switch (VAR_4->port_spec & VAR_0) {
 case 135:
  VAR_5 = "Control";
  break;
 case 137:
  VAR_5 = "Application";
  break;
 case 136:
  VAR_5 = "Application2";
  break;
 case 132:
  VAR_5 = "GPS";
  break;
 case 131:
  VAR_5 = "GPS Control";
  break;
 case 128:
  VAR_5 = "PCSC";
  break;
 case 134:
  VAR_5 = "Diagnostic";
  break;
 case 133:
  VAR_5 = "Diagnostic2";
  break;
 case 130:
  VAR_5 = "Modem";
  break;
 case 129:
  VAR_5 = "Network";
  break;
 default:
  VAR_5 = "Unknown";
  break;
 }

 return FUNC_1(VAR_3, "%s\n", VAR_5);
}
