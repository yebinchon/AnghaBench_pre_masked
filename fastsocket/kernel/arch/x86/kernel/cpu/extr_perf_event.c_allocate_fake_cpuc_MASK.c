
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_hw_events {int shared_regs; } ;
struct TYPE_2__ {scalar_t__ extra_regs; } ;


 int VAR_0 ;
 struct cpu_hw_events* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cpu_hw_events*) ;
 struct cpu_hw_events* FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static struct cpu_hw_events *FUNC_5(void)
{
 struct cpu_hw_events *VAR_3;
 int VAR_4 = FUNC_4();

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);


 if (VAR_2.extra_regs) {
  VAR_3->shared_regs = FUNC_1(VAR_4);
  if (!VAR_3->shared_regs)
   goto error;
 }
 return VAR_3;
error:
 FUNC_2(VAR_3);
 return FUNC_0(-VAR_0);
}
