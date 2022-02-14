
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_mac_addr {int* data; } ;
struct device {int dummy; } ;
struct uwb_dev {struct uwb_mac_addr mac_addr; struct device dev; } ;
struct uwb_rc {struct uwb_dev uwb_dev; } ;
typedef int devname ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (struct uwb_mac_addr*) ;
 int FUNC_3 (char*,int,struct uwb_mac_addr*) ;
 scalar_t__ FUNC_4 (struct uwb_mac_addr*) ;
 int FUNC_5 (struct uwb_rc*,struct uwb_mac_addr*) ;
 int FUNC_6 (struct uwb_rc*,struct uwb_mac_addr*) ;

__attribute__((used)) static
int FUNC_7(struct uwb_rc *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_1->uwb_dev.dev;
 struct uwb_dev *VAR_4 = &VAR_1->uwb_dev;
 char VAR_5[VAR_0];
 struct uwb_mac_addr VAR_6;

 VAR_2 = FUNC_5(VAR_1, &VAR_6);
 if (VAR_2 < 0) {
  FUNC_0(VAR_3, "cannot retrieve UWB EUI-48 address: %d\n", VAR_2);
  return VAR_2;
 }

 if (FUNC_4(&VAR_6) || FUNC_2(&VAR_6)) {
  VAR_6.data[0] = 0x02;
  FUNC_1(&VAR_6.data[1], sizeof(VAR_6.data)-1);

  VAR_2 = FUNC_6(VAR_1, &VAR_6);
  if (VAR_2 < 0) {
   FUNC_3(VAR_5, sizeof(VAR_5), &VAR_6);
   FUNC_0(VAR_3, "cannot set EUI-48 address %s: %d\n",
    VAR_5, VAR_2);
   return VAR_2;
  }
 }
 VAR_4->mac_addr = VAR_6;
 return 0;
}
