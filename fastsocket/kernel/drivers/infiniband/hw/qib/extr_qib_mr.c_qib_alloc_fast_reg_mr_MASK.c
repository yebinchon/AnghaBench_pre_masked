
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mr {int dummy; } ;
struct qib_mr {struct ib_mr ibmr; } ;
struct ib_pd {int dummy; } ;


 scalar_t__ FUNC_0 (struct qib_mr*) ;
 struct qib_mr* FUNC_1 (int,struct ib_pd*) ;

struct ib_mr *FUNC_2(struct ib_pd *VAR_0, int VAR_1)
{
 struct qib_mr *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (FUNC_0(VAR_2))
  return (struct ib_mr *)VAR_2;

 return &VAR_2->ibmr;
}
