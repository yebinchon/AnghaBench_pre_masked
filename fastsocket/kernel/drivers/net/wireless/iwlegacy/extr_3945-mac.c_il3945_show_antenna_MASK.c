
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int antenna; } ;


 int VAR_0 ;
 struct il_priv* FUNC_0 (struct device*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct il_priv *VAR_5 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 return FUNC_2(VAR_4, "%d\n", VAR_1.antenna);
}
