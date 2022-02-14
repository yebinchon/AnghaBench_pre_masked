
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctcm_priv {TYPE_1__** channel; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int prof; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct ctcm_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct ctcm_priv *VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(&VAR_6->channel[VAR_1]->prof, 0,
    sizeof(VAR_6->channel[VAR_1]->prof));
 return VAR_5;
}
