
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aem_data {int ver_major; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 struct aem_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct aem_data *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, "%s%d\n", VAR_0, VAR_4->ver_major);
}
