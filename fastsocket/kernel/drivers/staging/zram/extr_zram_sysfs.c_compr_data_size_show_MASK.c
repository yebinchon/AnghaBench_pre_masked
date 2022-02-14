
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int compr_size; } ;
struct zram {TYPE_1__ stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct zram* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (struct zram*,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct zram *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%llu\n",
  FUNC_2(VAR_3, &VAR_3->stats.compr_size));
}
