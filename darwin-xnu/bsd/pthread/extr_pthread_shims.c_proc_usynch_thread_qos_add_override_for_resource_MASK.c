
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint64_t ;
typedef int thread_t ;
typedef int task_t ;
struct uthread {int uu_thread; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,int,int ,int) ;

__attribute__((used)) static boolean_t
FUNC_1(task_t VAR_1, struct uthread *VAR_2,
  uint64_t VAR_3, int VAR_4, boolean_t VAR_5,
  user_addr_t VAR_6, int VAR_7)
{
 thread_t VAR_8 = VAR_2 ? VAR_2->uu_thread : VAR_0;

 return FUNC_0(VAR_1, VAR_8, VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7) == 0;
}
