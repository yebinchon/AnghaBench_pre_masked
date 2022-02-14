
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6650_data {int speed; int config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct max6650_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct max6650_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6, VAR_7;
 VAR_5 = FUNC_0(VAR_4->config);
 VAR_6 = VAR_4->speed;
 VAR_7 = 60 * VAR_5 * VAR_0 / (256 * (VAR_6 + 1));
 return FUNC_2(VAR_3, "%d\n", VAR_7);
}
