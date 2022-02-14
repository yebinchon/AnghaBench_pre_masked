
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union smp_flush_state {unsigned long flush_va; int tlbstate_lock; struct mm_struct* flush_mm; int flush_cpumask; } ;
struct mm_struct {int dummy; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {int (* send_IPI_mask ) (int ,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct cpumask const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 union smp_flush_state* VAR_3 ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(const struct cpumask *VAR_4,
     struct mm_struct *VAR_5, unsigned long VAR_6)
{
 unsigned int VAR_7;
 union smp_flush_state *VAR_8;


 VAR_7 = FUNC_4() % VAR_1;
 VAR_8 = &VAR_3[VAR_7];






 FUNC_5(&VAR_8->tlbstate_lock);

 VAR_8->flush_mm = VAR_5;
 VAR_8->flush_va = VAR_6;
 if (FUNC_1(FUNC_8(VAR_8->flush_cpumask), VAR_4, FUNC_3(FUNC_4()))) {




  VAR_2->send_IPI_mask(FUNC_8(VAR_8->flush_cpumask),
         VAR_0 + VAR_7);

  while (!FUNC_2(FUNC_8(VAR_8->flush_cpumask)))
   FUNC_0();
 }

 VAR_8->flush_mm = ((void*)0);
 VAR_8->flush_va = 0;
 FUNC_6(&VAR_8->tlbstate_lock);
}
