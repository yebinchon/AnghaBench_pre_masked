
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (char*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(char *VAR_1)
{
 struct device_node *VAR_2;
 int VAR_3 = -VAR_0;

 if ((VAR_2 = FUNC_0(VAR_1)))
  VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2);
 return VAR_3;
}
