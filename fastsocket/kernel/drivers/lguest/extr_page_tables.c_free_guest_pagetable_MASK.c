
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lguest {TYPE_1__* pgdirs; } ;
struct TYPE_2__ {scalar_t__ pgdir; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (long) ;
 int FUNC_2 (struct lguest*) ;

void FUNC_3(struct lguest *VAR_0)
{
 unsigned int VAR_1;


 FUNC_2(VAR_0);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->pgdirs); VAR_1++)
  FUNC_1((long)VAR_0->pgdirs[VAR_1].pgdir);
}
