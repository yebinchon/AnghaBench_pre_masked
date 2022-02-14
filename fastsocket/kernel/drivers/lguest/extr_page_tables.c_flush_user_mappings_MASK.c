
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lguest {TYPE_1__* pgdirs; int kernel_address; } ;
struct TYPE_2__ {scalar_t__ pgdir; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lguest *VAR_0, int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->kernel_address); VAR_2++)
  FUNC_1(VAR_0->pgdirs[VAR_1].pgdir + VAR_2);
}
