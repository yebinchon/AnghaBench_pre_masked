
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int limits_changed; } ;
struct throtl_data {int limits_changed; } ;


 int FUNC_0 (struct throtl_data*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct throtl_data *VAR_0,
    struct throtl_grp *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->limits_changed, 1);
 VAR_2 = FUNC_1(&VAR_0->limits_changed, 1);

 FUNC_0(VAR_0, 0);
}
