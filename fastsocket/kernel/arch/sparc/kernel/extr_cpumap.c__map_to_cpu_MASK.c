
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_node {unsigned int num_cpus; } ;
struct TYPE_2__ {struct cpuinfo_node* nodes; } ;


 int FUNC_0 () ;
 int* VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2)
{
 struct cpuinfo_node *VAR_3;

 if (FUNC_3(!VAR_1)) {
  FUNC_0();
  if (!VAR_1)
   return FUNC_2(VAR_2);
 }

 VAR_3 = &VAR_1->nodes[0];







 return VAR_0[VAR_2 % VAR_3->num_cpus];
}
