
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct il_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct il_priv *VAR_4 = FUNC_0(VAR_0);
 char *VAR_5 = (char *)VAR_2;

 if (VAR_5[0] == '1')
  FUNC_1(VAR_4);

 return FUNC_2(VAR_2, VAR_3);
}
