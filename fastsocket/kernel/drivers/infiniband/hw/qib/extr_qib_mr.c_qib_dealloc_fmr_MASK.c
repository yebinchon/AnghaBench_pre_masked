
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int comp; } ;
struct qib_fmr {TYPE_1__ mr; } ;
struct ib_fmr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct qib_fmr*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct qib_fmr* FUNC_5 (struct ib_fmr*) ;
 unsigned long FUNC_6 (int *,int) ;

int FUNC_7(struct ib_fmr *VAR_2)
{
 struct qib_fmr *VAR_3 = FUNC_5(VAR_2);
 int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->mr);
 FUNC_4(&VAR_3->mr);
 VAR_5 = FUNC_6(&VAR_3->mr.comp,
  5 * VAR_1);
 if (!VAR_5) {
  FUNC_3(&VAR_3->mr);
  VAR_4 = -VAR_0;
  goto out;
 }
 FUNC_0(&VAR_3->mr);
 FUNC_1(VAR_3);
out:
 return VAR_4;
}
