
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lg_cpu {TYPE_1__* lg; } ;
typedef int pte_t ;
struct TYPE_4__ {scalar_t__ pgdir; } ;
struct TYPE_3__ {unsigned long kernel_address; TYPE_2__* pgdirs; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct lg_cpu*,int,unsigned long,int ) ;
 int FUNC_2 (TYPE_1__*,unsigned long) ;

void FUNC_3(struct lg_cpu *VAR_0,
     unsigned long VAR_1, unsigned long VAR_2, pte_t VAR_3)
{




 if (VAR_2 >= VAR_0->lg->kernel_address) {
  unsigned int VAR_4;
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->lg->pgdirs); VAR_4++)
   if (VAR_0->lg->pgdirs[VAR_4].pgdir)
    FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
 } else {

  int VAR_5 = FUNC_2(VAR_0->lg, VAR_1);
  if (VAR_5 != FUNC_0(VAR_0->lg->pgdirs))

   FUNC_1(VAR_0, VAR_5, VAR_2, VAR_3);
 }
}
