
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_rdc_tables {int first_table_num; } ;
struct niu_parent {struct niu_rdc_tables* rdc_group_cfg; } ;
struct niu {size_t port; struct niu_parent* parent; } ;


 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*,int,int,int) ;
 int FUNC_2 (struct niu*,int,int) ;
 int FUNC_3 (struct niu*,int,int) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_0)
{
 struct niu_parent *VAR_1 = VAR_0->parent;
 struct niu_rdc_tables *VAR_2 = &VAR_1->rdc_group_cfg[VAR_0->port];
 int VAR_3, VAR_4, VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = VAR_2->first_table_num;

 VAR_4 = FUNC_3(VAR_0, VAR_6, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_6, 1);
 if (VAR_4)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_6, 1);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
