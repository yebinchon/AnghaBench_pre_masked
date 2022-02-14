
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int gpio; int vrm; } ;
typedef int ssize_t ;


 struct adm1026_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct adm1026_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = (VAR_3->gpio >> 11) & 0x1f;

 FUNC_1(VAR_0, "Setting VID from GPIO11-15.\n");
 return FUNC_2(VAR_2, "%d\n", FUNC_3(VAR_4, VAR_3->vrm));
}
