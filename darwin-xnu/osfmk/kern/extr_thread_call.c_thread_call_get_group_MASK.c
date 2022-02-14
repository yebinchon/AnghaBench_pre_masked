
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_call_t ;
typedef size_t thread_call_index_t ;
typedef int * thread_call_group_t ;
struct TYPE_3__ {size_t tc_index; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;

__attribute__((used)) static inline thread_call_group_t
FUNC_1(thread_call_t VAR_2)
{
 thread_call_index_t VAR_3 = VAR_2->tc_index;

 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_0);

 return &VAR_1[VAR_3];
}
