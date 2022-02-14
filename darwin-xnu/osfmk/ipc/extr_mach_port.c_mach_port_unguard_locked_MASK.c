
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_3__ {scalar_t__ ip_context; scalar_t__ ip_strict_guard; scalar_t__ ip_guarded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static kern_return_t
FUNC_1(
 ipc_port_t VAR_4,
 mach_port_name_t VAR_5,
 uint64_t VAR_6)
{

 if (!VAR_4->ip_guarded) {

  FUNC_0(VAR_5, VAR_6, 0, VAR_3);
  return VAR_0;
 }

 if (VAR_4->ip_context != VAR_6) {

  FUNC_0(VAR_5, VAR_6, VAR_4->ip_context, VAR_2);
  return VAR_0;
 }

 VAR_4->ip_context = 0;
 VAR_4->ip_guarded = VAR_4->ip_strict_guard = 0;
 return VAR_1;
}
