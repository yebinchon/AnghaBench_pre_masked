
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int full_name; } ;
struct cc_workarea {int name_offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct device_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static struct device_node *FUNC_5(struct cc_workarea *VAR_1)
{
 struct device_node *VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);





 VAR_3 = (char *)VAR_1 + VAR_1->name_offset;
 VAR_2->full_name = FUNC_1(FUNC_4(VAR_3) + 2, VAR_0);
 if (!VAR_2->full_name) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 FUNC_3(VAR_2->full_name, "/%s", VAR_3);
 return VAR_2;
}
