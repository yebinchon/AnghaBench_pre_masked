
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_call_t ;
typedef int thread_call_flavor_t ;
struct TYPE_3__ {int tc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline thread_call_flavor_t
FUNC_0(thread_call_t VAR_3)
{
 return (VAR_3->tc_flags & VAR_2) ? VAR_1 : VAR_0;
}
