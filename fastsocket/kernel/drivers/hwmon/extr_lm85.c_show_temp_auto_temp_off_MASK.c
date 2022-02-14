
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm85_data {TYPE_1__* zone; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int hyst; int limit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct lm85_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_2__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_1)->index;
 struct lm85_data *VAR_4 = FUNC_2(VAR_0);
 return FUNC_3(VAR_2, "%d\n", FUNC_1(VAR_4->zone[VAR_3].limit) -
  FUNC_0(VAR_4->zone[VAR_3].hyst));
}
