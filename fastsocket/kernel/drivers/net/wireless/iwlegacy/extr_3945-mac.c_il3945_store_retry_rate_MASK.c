
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int retry_rate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct il_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int *,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct il_priv *VAR_4 = FUNC_0(VAR_0);

 VAR_4->retry_rate = FUNC_1(VAR_2, ((void*)0), 0);
 if (VAR_4->retry_rate <= 0)
  VAR_4->retry_rate = 1;

 return VAR_3;
}
