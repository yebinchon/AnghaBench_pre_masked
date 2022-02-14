
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int state; int lan_online; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;







 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 switch (VAR_4->state) {
 case 132:
  return FUNC_1(VAR_3, "DOWN\n");
 case 131:
  return FUNC_1(VAR_3, "HARDSETUP\n");
 case 129:
  return FUNC_1(VAR_3, "SOFTSETUP\n");
 case 128:
  if (VAR_4->lan_online)
  return FUNC_1(VAR_3, "UP (LAN ONLINE)\n");
  else
   return FUNC_1(VAR_3, "UP (LAN OFFLINE)\n");
 case 130:
  return FUNC_1(VAR_3, "RECOVER\n");
 default:
  return FUNC_1(VAR_3, "UNKNOWN\n");
 }
}
