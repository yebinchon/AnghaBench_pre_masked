
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int parent; int kref; int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 struct device_node* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (int ,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static struct device_node *FUNC_8(const char *VAR_2,
  struct device_node *VAR_3)
{
 struct device_node *VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return ((void*)0);
 VAR_4->full_name = FUNC_1(FUNC_7(VAR_2) + 1, VAR_0);
 if (!VAR_4->full_name) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 FUNC_6(VAR_4->full_name, VAR_2);
 FUNC_5(VAR_4, VAR_1);
 FUNC_2(&VAR_4->kref);
 VAR_4->parent = FUNC_4(VAR_3);
 return VAR_4;
}
