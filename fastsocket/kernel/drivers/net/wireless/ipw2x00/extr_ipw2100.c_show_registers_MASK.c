
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ipw2100_priv {struct net_device* net_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int addr; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct ipw2100_priv* FUNC_1 (struct device*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct net_device*,int,int*) ;
 int FUNC_3 (char*,char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 int VAR_4;
 struct ipw2100_priv *VAR_5 = FUNC_1(VAR_1);
 struct net_device *VAR_6 = VAR_5->net_dev;
 char *VAR_7 = VAR_3;
 u32 VAR_8 = 0;

 VAR_7 += FUNC_3(VAR_7, "%30s [Address ] : Hex\n", "Register");

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  FUNC_2(VAR_6, VAR_0[VAR_4].addr, &VAR_8);
  VAR_7 += FUNC_3(VAR_7, "%30s [%08X] : %08X\n",
          VAR_0[VAR_4].name, VAR_0[VAR_4].addr, VAR_8);
 }

 return VAR_7 - VAR_3;
}
