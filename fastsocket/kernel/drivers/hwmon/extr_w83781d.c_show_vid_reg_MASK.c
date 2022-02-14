
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int vrm; int vid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,long) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct w83781d_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83781d_data *VAR_3 = FUNC_2(VAR_0);
 return FUNC_0(VAR_2, "%ld\n", (long) FUNC_1(VAR_3->vid, VAR_3->vrm));
}
