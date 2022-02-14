
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ah_attr {int dummy; } ;
struct qib_ah {struct ib_ah_attr attr; } ;
struct ib_ah {int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct ib_ah_attr*) ;
 struct qib_ah* FUNC_1 (struct ib_ah*) ;

__attribute__((used)) static int FUNC_2(struct ib_ah *VAR_1, struct ib_ah_attr *VAR_2)
{
 struct qib_ah *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_1->device, VAR_2))
  return -VAR_0;

 VAR_3->attr = *VAR_2;

 return 0;
}
