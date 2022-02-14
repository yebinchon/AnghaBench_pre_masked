
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int dummy; } ;
struct throtl_data {struct throtl_grp* root_tg; } ;
struct blkio_cgroup {int dummy; } ;


 int FUNC_0 (struct throtl_data*,struct throtl_grp*) ;
 struct blkio_cgroup VAR_0 ;
 int FUNC_1 (struct blkio_cgroup*,void*) ;
 struct throtl_grp* FUNC_2 (int ) ;

__attribute__((used)) static struct
throtl_grp *FUNC_3(struct throtl_data *VAR_1, struct blkio_cgroup *VAR_2)
{
 struct throtl_grp *VAR_3 = ((void*)0);
 void *VAR_4 = VAR_1;





 if (VAR_2 == &VAR_0)
  VAR_3 = VAR_1->root_tg;
 else
  VAR_3 = FUNC_2(FUNC_1(VAR_2, VAR_4));

 FUNC_0(VAR_1, VAR_3);
 return VAR_3;
}
