
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t buffer_size; } ;
typedef TYPE_1__ libnx_audren_thread_t ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
   libnx_audren_thread_t *VAR_1 = (libnx_audren_thread_t*)VAR_0;

   if (!VAR_1)
      return 0;

   return VAR_1->buffer_size;
}
