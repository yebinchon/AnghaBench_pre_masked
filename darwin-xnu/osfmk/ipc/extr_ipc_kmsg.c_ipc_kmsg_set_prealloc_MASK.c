
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ipc_port_t ;
typedef TYPE_1__* ipc_kmsg_t ;
struct TYPE_4__ {scalar_t__ ikm_prealloc; scalar_t__ ikm_turnstile; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(
 ipc_kmsg_t VAR_2,
 ipc_port_t VAR_3)
{
 FUNC_1(VAR_2->ikm_prealloc == VAR_0);

 VAR_2->ikm_prealloc = VAR_0;

 FUNC_1(FUNC_2(VAR_3) == VAR_1);
 VAR_2->ikm_turnstile = VAR_1;
 FUNC_0(VAR_3, VAR_2);
}
