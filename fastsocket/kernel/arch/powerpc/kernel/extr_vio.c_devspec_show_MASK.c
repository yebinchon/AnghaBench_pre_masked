
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {char* full_name; } ;
struct device_attribute {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct device {TYPE_1__ archdata; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct device_node *VAR_3 = VAR_0->archdata.of_node;

 return FUNC_0(VAR_2, "%s\n", VAR_3 ? VAR_3->full_name : "none");
}
