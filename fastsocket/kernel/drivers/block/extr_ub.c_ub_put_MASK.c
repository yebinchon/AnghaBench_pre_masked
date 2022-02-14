
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_dev {scalar_t__ openc; int poison; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct ub_dev*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ub_dev *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0, VAR_2);
 --VAR_1->openc;
 if (VAR_1->openc == 0 && FUNC_0(&VAR_1->poison)) {
  FUNC_2(&VAR_0, VAR_2);
  FUNC_3(VAR_1);
 } else {
  FUNC_2(&VAR_0, VAR_2);
 }
}
