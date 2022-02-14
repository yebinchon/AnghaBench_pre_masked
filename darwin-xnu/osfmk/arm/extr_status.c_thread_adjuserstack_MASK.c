
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int thread_t ;
struct arm_saved_state {int sp; } ;


 struct arm_saved_state* FUNC_0 (int ) ;

uint64_t
FUNC_1(thread_t VAR_0, int VAR_1)
{
 struct arm_saved_state *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 VAR_2->sp += VAR_1;

 return VAR_2->sp;
}
