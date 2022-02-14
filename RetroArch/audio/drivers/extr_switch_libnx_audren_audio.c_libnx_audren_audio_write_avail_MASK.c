
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t buffer_size; size_t current_size; int current_wavebuf; } ;
typedef TYPE_1__ libnx_audren_t ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
   libnx_audren_t *VAR_1 = (libnx_audren_t*)VAR_0;
   size_t VAR_2;

   if (!VAR_1 || !VAR_1->current_wavebuf)
      return 0;

   VAR_2 = VAR_1->buffer_size - VAR_1->current_size;

   return VAR_2;
}
