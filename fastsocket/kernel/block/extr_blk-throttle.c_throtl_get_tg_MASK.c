
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int dummy; } ;
struct throtl_data {struct throtl_grp* root_tg; struct request_queue* queue; } ;
struct request_queue {int queue_lock; } ;
struct blkio_cgroup {int dummy; } ;


 int FUNC_0 (struct request_queue*) ;
 int VAR_0 ;
 int FUNC_1 (struct throtl_grp*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct blkio_cgroup* FUNC_6 (int ) ;
 struct throtl_grp* FUNC_7 (struct throtl_data*) ;
 struct throtl_grp* FUNC_8 (struct throtl_data*,struct blkio_cgroup*) ;
 int FUNC_9 (struct throtl_data*,struct throtl_grp*,struct blkio_cgroup*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static struct throtl_grp * FUNC_11(struct throtl_data *VAR_1)
{
 struct throtl_grp *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 struct blkio_cgroup *VAR_4;
 struct request_queue *VAR_5 = VAR_1->queue;


 if (FUNC_10(FUNC_0(VAR_5)))
  return ((void*)0);

 FUNC_2();
 VAR_4 = FUNC_6(VAR_0);
 VAR_2 = FUNC_8(VAR_1, VAR_4);
 if (VAR_2) {
  FUNC_3();
  return VAR_2;
 }






 FUNC_3();
 FUNC_5(VAR_5->queue_lock);

 VAR_2 = FUNC_7(VAR_1);


 FUNC_4(VAR_5->queue_lock);


 if (FUNC_10(FUNC_0(VAR_5))) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }




 FUNC_2();
 VAR_4 = FUNC_6(VAR_0);





 VAR_3 = FUNC_8(VAR_1, VAR_4);

 if (VAR_3) {
  FUNC_1(VAR_2);
  FUNC_3();
  return VAR_3;
 }


 if (!VAR_2) {
  VAR_2 = VAR_1->root_tg;
  return VAR_2;
 }

 FUNC_9(VAR_1, VAR_2, VAR_4);
 FUNC_3();
 return VAR_2;
}
