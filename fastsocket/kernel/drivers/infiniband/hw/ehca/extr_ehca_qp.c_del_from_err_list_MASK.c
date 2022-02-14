
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct ehca_cq {int spinlock; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ehca_cq *VAR_0, struct list_head *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->spinlock, VAR_2);

 if (!FUNC_1(VAR_1))
  FUNC_0(VAR_1);

 FUNC_3(&VAR_0->spinlock, VAR_2);
}
