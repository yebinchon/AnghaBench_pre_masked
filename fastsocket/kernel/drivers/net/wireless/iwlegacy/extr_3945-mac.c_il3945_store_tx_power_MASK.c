
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,char const*) ;
 struct il_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (struct il_priv*,int ) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct il_priv *VAR_4 = FUNC_1(VAR_0);
 char *VAR_5 = (char *)VAR_2;
 u32 VAR_6;

 VAR_6 = FUNC_3(VAR_5, &VAR_5, 10);
 if (VAR_5 == VAR_2)
  FUNC_0(": %s is not in decimal form.\n", VAR_2);
 else
  FUNC_2(VAR_4, VAR_6);

 return VAR_3;
}
