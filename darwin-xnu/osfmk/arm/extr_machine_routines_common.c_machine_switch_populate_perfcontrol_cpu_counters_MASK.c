
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perfcontrol_cpu_counters {scalar_t__ cycles; scalar_t__ instructions; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_1(struct perfcontrol_cpu_counters *VAR_0)
{



 VAR_0->instructions = 0;
 VAR_0->cycles = 0;

}
