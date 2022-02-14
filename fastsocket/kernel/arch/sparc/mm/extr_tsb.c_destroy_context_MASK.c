
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tsb_block; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned long FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mm_struct *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_4(&VAR_3->context.tsb_block[VAR_5]);

 FUNC_2(&VAR_1, VAR_4);

 if (FUNC_1(VAR_3->context)) {
  unsigned long VAR_6 = FUNC_0(VAR_3->context);
  VAR_2[VAR_6>>6] &= ~(1UL << (VAR_6 & 63));
 }

 FUNC_3(&VAR_1, VAR_4);
}
