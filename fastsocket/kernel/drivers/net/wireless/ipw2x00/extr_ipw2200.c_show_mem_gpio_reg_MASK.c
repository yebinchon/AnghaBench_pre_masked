
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ipw_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipw_priv*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 u32 VAR_3 = 0;
 struct ipw_priv *VAR_4 = FUNC_0(VAR_0);

 VAR_3 = FUNC_1(VAR_4, 0x301100);
 return FUNC_2(VAR_2, "0x%08x\n", VAR_3);
}
