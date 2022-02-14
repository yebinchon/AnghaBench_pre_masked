
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int thread_t ;
struct arm_saved_state {int dummy; } ;


 int FUNC_0 (struct arm_saved_state*) ;
 struct arm_saved_state* FUNC_1 (int ) ;
 int FUNC_2 (struct arm_saved_state*,int) ;

uint64_t
FUNC_3(thread_t VAR_0, int VAR_1)
{
 struct arm_saved_state *VAR_2;
 uint64_t VAR_3;

 VAR_2 = FUNC_1(VAR_0);

 VAR_3 = FUNC_0(VAR_2);
 VAR_3 += VAR_1;
 FUNC_2(VAR_2, VAR_3);;

 return VAR_3;
}
