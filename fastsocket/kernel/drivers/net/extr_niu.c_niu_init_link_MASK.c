
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_parent {scalar_t__ plat_type; } ;
struct niu {int flags; struct niu_parent* parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct niu*,int*) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_2)
{
 struct niu_parent *VAR_3 = VAR_2->parent;
 int VAR_4, VAR_5;

 if (VAR_3->plat_type == VAR_1) {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4)
   return VAR_4;
  FUNC_0(200);
 }
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 && !(VAR_2->flags & VAR_0))
  return VAR_4;
 FUNC_0(200);
 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4 || (VAR_2->flags & VAR_0))
  FUNC_1(VAR_2, &VAR_5);
 return 0;
}
