
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nonblocking; } ;
typedef TYPE_1__ libnx_audren_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bool VAR_1)
{
   libnx_audren_t *VAR_2 = (libnx_audren_t*)VAR_0;

   if (!VAR_2)
      return;

   VAR_2->nonblocking = VAR_1;
}
