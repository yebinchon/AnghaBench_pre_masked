
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int ip_guarded; int ip_strict_guard; scalar_t__ ip_context; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static kern_return_t
FUNC_0(
 ipc_port_t VAR_2,
 uint64_t VAR_3,
 boolean_t VAR_4)
{
 if (VAR_2->ip_context)
  return VAR_0;

 VAR_2->ip_context = VAR_3;
 VAR_2->ip_guarded = 1;
 VAR_2->ip_strict_guard = (VAR_4)?1:0;
 return VAR_1;
}
