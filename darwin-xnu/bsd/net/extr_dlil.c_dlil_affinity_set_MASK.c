
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int thread_policy_t ;
struct TYPE_3__ {int affinity_tag; } ;
typedef TYPE_1__ thread_affinity_policy_data_t ;
struct thread {int dummy; } ;
typedef int policy ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_2(struct thread *VAR_2, u_int32_t VAR_3)
{
 thread_affinity_policy_data_t VAR_4;

 FUNC_0(&VAR_4, sizeof (VAR_4));
 VAR_4.affinity_tag = VAR_3;
 return (FUNC_1(VAR_2, VAR_0,
     (thread_policy_t)&VAR_4, VAR_1));
}
