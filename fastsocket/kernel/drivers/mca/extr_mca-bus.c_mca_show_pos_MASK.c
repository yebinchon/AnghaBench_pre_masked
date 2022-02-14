
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {int* pos; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 struct mca_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{

 int VAR_3, VAR_4=0;
 struct mca_device *VAR_5 = FUNC_1(VAR_0);

 for(VAR_3=0; VAR_3<8; VAR_3++)
  VAR_4 += FUNC_0(VAR_2+VAR_4, "%02x ", VAR_5->pos[VAR_3]);

 VAR_2[VAR_4-1] = '\n';
 return VAR_4;
}
