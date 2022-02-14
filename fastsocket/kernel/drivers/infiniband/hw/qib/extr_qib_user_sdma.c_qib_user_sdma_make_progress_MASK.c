
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_user_sdma_queue {int lock; } ;
struct qib_pportdata {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qib_pportdata*) ;
 int FUNC_3 (struct qib_pportdata*,struct qib_user_sdma_queue*) ;

int FUNC_4(struct qib_pportdata *VAR_0,
    struct qib_user_sdma_queue *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_1->lock);
 FUNC_2(VAR_0);
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 FUNC_1(&VAR_1->lock);

 return VAR_2;
}
