
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95241_data {int rate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lm95241_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,scalar_t__,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct lm95241_data *VAR_5 = FUNC_0(VAR_2);

 FUNC_1(VAR_4, VAR_1 - 1, "%lu\n", 1000 * VAR_5->rate / VAR_0);
 return FUNC_2(VAR_4);
}
