
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {int sa_flags; } ;
struct k_sigaction {TYPE_1__ sa; } ;
struct TYPE_4__ {unsigned long sas_ss_sp; unsigned long sas_ss_size; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static inline void *
FUNC_2(struct k_sigaction *VAR_2, struct pt_regs *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;


 VAR_5 = FUNC_0();


 if (VAR_2->sa.sa_flags & VAR_0) {
  if (!FUNC_1(VAR_5))
   VAR_5 = VAR_1->sas_ss_sp + VAR_1->sas_ss_size;
 }
 return (void *)((VAR_5 - VAR_4) & -8UL);
}
