
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct mm_struct*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct mm_struct *VAR_2 = VAR_1;

 if (VAR_2 == VAR_0->mm)
  FUNC_0(VAR_2);
}
