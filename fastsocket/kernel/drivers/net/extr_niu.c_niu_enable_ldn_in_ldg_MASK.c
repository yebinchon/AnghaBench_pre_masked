
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_parent {scalar_t__* ldg_map; } ;
struct niu_ldg {scalar_t__ ldg_num; } ;
struct niu {struct niu_parent* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct niu*,int,int) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_1, struct niu_ldg *VAR_2, int VAR_3)
{
 struct niu_parent *VAR_4 = VAR_1->parent;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++) {
  int VAR_6;

  if (VAR_4->ldg_map[VAR_5] != VAR_2->ldg_num)
   continue;

  VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_3);
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
