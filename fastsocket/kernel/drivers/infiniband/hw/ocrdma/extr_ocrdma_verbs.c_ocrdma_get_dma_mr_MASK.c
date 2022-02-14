
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mr {int dummy; } ;
struct ocrdma_mr {struct ib_mr ibmr; } ;
struct ib_pd {int dummy; } ;


 struct ib_mr* FUNC_0 (struct ocrdma_mr*) ;
 scalar_t__ FUNC_1 (struct ocrdma_mr*) ;
 int VAR_0 ;
 struct ocrdma_mr* FUNC_2 (struct ib_pd*,int,int ,int ) ;

struct ib_mr *FUNC_3(struct ib_pd *VAR_1, int VAR_2)
{
 struct ocrdma_mr *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2, 0, VAR_0);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);

 return &VAR_3->ibmr;
}
