
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lg_cpu {unsigned int cpu_pgd; TYPE_1__* lg; } ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_4__ {unsigned long gpgdir; int * pgdir; } ;
struct TYPE_3__ {TYPE_2__* pgdirs; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (long) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static unsigned int FUNC_8(struct lg_cpu *VAR_3,
         unsigned long VAR_4,
         int *VAR_5)
{
 unsigned int VAR_6;
 VAR_6 = FUNC_6() % FUNC_0(VAR_3->lg->pgdirs);

 if (!VAR_3->lg->pgdirs[VAR_6].pgdir) {
  VAR_3->lg->pgdirs[VAR_6].pgdir =
     (pgd_t *)FUNC_5(VAR_0);

  if (!VAR_3->lg->pgdirs[VAR_6].pgdir)
   VAR_6 = VAR_3->cpu_pgd;
  else {
   *VAR_5 = 1;

  }
 }

 VAR_3->lg->pgdirs[VAR_6].gpgdir = VAR_4;

 FUNC_3(VAR_3->lg, VAR_6);

 return VAR_6;
}
