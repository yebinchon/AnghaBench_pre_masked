
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lguest {TYPE_1__* pgdirs; } ;
struct TYPE_2__ {unsigned long gpgdir; scalar_t__ pgdir; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static unsigned int FUNC_1(struct lguest *VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->pgdirs); VAR_2++)
  if (VAR_0->pgdirs[VAR_2].pgdir && VAR_0->pgdirs[VAR_2].gpgdir == VAR_1)
   break;
 return VAR_2;
}
