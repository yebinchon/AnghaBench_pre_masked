
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,int *) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int VAR_3 ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_4)
{
 struct device_node *VAR_5, *VAR_6;

 VAR_5 = FUNC_3(VAR_4);
 if (!VAR_5)
  return -VAR_1;

 if ((VAR_6 = FUNC_2(VAR_4, ((void*)0)))) {
  FUNC_4(VAR_6);
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 FUNC_5(VAR_4);

 FUNC_0(&VAR_3,
       VAR_2, VAR_4);
 FUNC_1(VAR_4);

 FUNC_4(VAR_5);
 FUNC_4(VAR_4);
 return 0;
}
