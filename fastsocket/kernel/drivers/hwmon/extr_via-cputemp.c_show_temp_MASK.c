
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct via_cputemp_data {int msr; int id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct via_cputemp_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*,int*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct via_cputemp_data *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->id, VAR_4->msr, &VAR_5, &VAR_6);
 if (VAR_7)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3, "%d\n", (VAR_5 & 0xffffff) * 1000);

 return VAR_7;
}
