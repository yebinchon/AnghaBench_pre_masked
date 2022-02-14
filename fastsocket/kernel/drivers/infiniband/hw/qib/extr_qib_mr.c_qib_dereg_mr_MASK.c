
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int comp; } ;
struct qib_mr {scalar_t__ umem; TYPE_1__ mr; } ;
struct ib_mr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qib_mr*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct qib_mr* FUNC_6 (struct ib_mr*) ;
 unsigned long FUNC_7 (int *,int) ;

int FUNC_8(struct ib_mr *VAR_2)
{
 struct qib_mr *VAR_3 = FUNC_6(VAR_2);
 int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_3(&VAR_3->mr);

 FUNC_5(&VAR_3->mr);
 VAR_5 = FUNC_7(&VAR_3->mr.comp,
  5 * VAR_1);
 if (!VAR_5) {
  FUNC_4(&VAR_3->mr);
  VAR_4 = -VAR_0;
  goto out;
 }
 FUNC_0(&VAR_3->mr);
 if (VAR_3->umem)
  FUNC_1(VAR_3->umem);
 FUNC_2(VAR_3);
out:
 return VAR_4;
}
