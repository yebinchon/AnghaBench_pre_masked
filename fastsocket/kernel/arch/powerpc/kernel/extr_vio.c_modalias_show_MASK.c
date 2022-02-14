
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {char* type; } ;
struct device_node {int dummy; } ;
struct device_attribute {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct device {TYPE_1__ archdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (char*,char*,char*,char const*) ;
 struct vio_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 const struct vio_dev *VAR_4 = FUNC_2(VAR_1);
 struct device_node *VAR_5;
 const char *VAR_6;

 VAR_5 = VAR_1->archdata.of_node;
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_5, "compatible", ((void*)0));
 if (!VAR_6)
  return -VAR_0;

 return FUNC_1(VAR_3, "vio:T%sS%s\n", VAR_4->type, VAR_6);
}
