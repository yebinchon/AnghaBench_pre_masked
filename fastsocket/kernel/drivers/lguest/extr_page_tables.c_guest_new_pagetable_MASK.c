
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_cpu {int cpu_pgd; TYPE_1__* lg; } ;
struct TYPE_2__ {int pgdirs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,unsigned long) ;
 int FUNC_2 (struct lg_cpu*,unsigned long,int*) ;
 int FUNC_3 (struct lg_cpu*) ;

void FUNC_4(struct lg_cpu *VAR_0, unsigned long VAR_1)
{
 int VAR_2, VAR_3 = 0;


 VAR_2 = FUNC_1(VAR_0->lg, VAR_1);




 if (VAR_2 == FUNC_0(VAR_0->lg->pgdirs))
  VAR_2 = FUNC_2(VAR_0, VAR_1, &VAR_3);

 VAR_0->cpu_pgd = VAR_2;

 if (VAR_3)
  FUNC_3(VAR_0);
}
