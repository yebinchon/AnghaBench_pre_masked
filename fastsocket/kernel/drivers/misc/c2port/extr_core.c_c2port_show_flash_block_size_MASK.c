
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct c2port_ops {int block_size; } ;
struct c2port_device {struct c2port_ops* ops; } ;
typedef int ssize_t ;


 struct c2port_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct c2port_device *VAR_3 = FUNC_0(VAR_0);
 struct c2port_ops *VAR_4 = VAR_3->ops;

 return FUNC_1(VAR_2, "%d\n", VAR_4->block_size);
}
