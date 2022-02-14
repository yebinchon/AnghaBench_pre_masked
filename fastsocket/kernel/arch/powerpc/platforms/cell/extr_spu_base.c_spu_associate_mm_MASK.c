
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu {struct mm_struct* mm; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;

void FUNC_3(struct spu *VAR_1, struct mm_struct *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0, VAR_3);
 VAR_1->mm = VAR_2;
 FUNC_2(&VAR_0, VAR_3);
 if (VAR_2)
  FUNC_0(VAR_2);
}
