
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_rb_root {int dummy; } ;
struct throtl_grp {scalar_t__* nr_queued; int disptime; } ;
struct throtl_data {struct throtl_rb_root tg_service_tree; } ;
struct bio_list {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct throtl_data*,struct throtl_grp*) ;
 int FUNC_1 (struct throtl_data*,struct throtl_grp*) ;
 scalar_t__ FUNC_2 (struct throtl_data*,struct throtl_grp*,struct bio_list*) ;
 int FUNC_3 (struct throtl_data*,struct throtl_grp*) ;
 unsigned int VAR_1 ;
 struct throtl_grp* FUNC_4 (struct throtl_rb_root*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct throtl_data *VAR_2, struct bio_list *VAR_3)
{
 unsigned int VAR_4 = 0;
 struct throtl_grp *VAR_5;
 struct throtl_rb_root *VAR_6 = &VAR_2->tg_service_tree;

 while (1) {
  VAR_5 = FUNC_4(VAR_6);

  if (!VAR_5)
   break;

  if (FUNC_5(VAR_0, VAR_5->disptime))
   break;

  FUNC_1(VAR_2, VAR_5);

  VAR_4 += FUNC_2(VAR_2, VAR_5, VAR_3);

  if (VAR_5->nr_queued[0] || VAR_5->nr_queued[1]) {
   FUNC_0(VAR_2, VAR_5);
   FUNC_3(VAR_2, VAR_5);
  }

  if (VAR_4 >= VAR_1)
   break;
 }

 return VAR_4;
}
