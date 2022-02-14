
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {scalar_t__ pos_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 struct mca_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{

 struct mca_device *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if(VAR_4->pos_id < VAR_0)
  VAR_5 = FUNC_0(VAR_3, "%04x\n", VAR_4->pos_id);
 else
  VAR_5 = FUNC_0(VAR_3, "none\n");
 return VAR_5;
}
