
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ah_attr {int dummy; } ;
struct qib_ah {struct ib_ah_attr attr; } ;
struct ib_ah {int dummy; } ;


 struct qib_ah* FUNC_0 (struct ib_ah*) ;

__attribute__((used)) static int FUNC_1(struct ib_ah *VAR_0, struct ib_ah_attr *VAR_1)
{
 struct qib_ah *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->attr;

 return 0;
}
