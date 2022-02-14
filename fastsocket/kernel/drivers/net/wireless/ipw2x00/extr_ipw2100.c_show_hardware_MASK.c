
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ipw2100_priv {struct net_device* net_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int size; int addr; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct ipw2100_priv* FUNC_1 (struct device*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct net_device*,int,int*) ;
 int FUNC_3 (struct net_device*,int,int*) ;
 int FUNC_4 (struct net_device*,int,int*) ;
 int FUNC_5 (char*,char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct ipw2100_priv *VAR_4 = FUNC_1(VAR_1);
 struct net_device *VAR_5 = VAR_4->net_dev;
 char *VAR_6 = VAR_3;
 int VAR_7;

 VAR_6 += FUNC_5(VAR_6, "%30s [Address ] : Hex\n", "NIC entry");

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  u8 VAR_8;
  u16 VAR_9;
  u32 VAR_10;

  switch (VAR_0[VAR_7].size) {
  case 1:
   FUNC_2(VAR_5, VAR_0[VAR_7].addr, &VAR_8);
   VAR_6 += FUNC_5(VAR_6, "%30s [%08X] : %02X\n",
           VAR_0[VAR_7].name, VAR_0[VAR_7].addr,
           VAR_8);
   break;
  case 2:
   FUNC_4(VAR_5, VAR_0[VAR_7].addr, &VAR_9);
   VAR_6 += FUNC_5(VAR_6, "%30s [%08X] : %04X\n",
           VAR_0[VAR_7].name, VAR_0[VAR_7].addr,
           VAR_9);
   break;
  case 4:
   FUNC_3(VAR_5, VAR_0[VAR_7].addr, &VAR_10);
   VAR_6 += FUNC_5(VAR_6, "%30s [%08X] : %08X\n",
           VAR_0[VAR_7].name, VAR_0[VAR_7].addr,
           VAR_10);
   break;
  }
 }
 return VAR_6 - VAR_3;
}
