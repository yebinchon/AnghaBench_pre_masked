
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_ah {int dev; } ;
struct ib_ah {int dummy; } ;


 struct ocrdma_ah* FUNC_0 (struct ib_ah*) ;
 int FUNC_1 (struct ocrdma_ah*) ;
 int FUNC_2 (int ,struct ocrdma_ah*) ;

int FUNC_3(struct ib_ah *VAR_0)
{
 struct ocrdma_ah *VAR_1 = FUNC_0(VAR_0);
 FUNC_2(VAR_1->dev, VAR_1);
 FUNC_1(VAR_1);
 return 0;
}
