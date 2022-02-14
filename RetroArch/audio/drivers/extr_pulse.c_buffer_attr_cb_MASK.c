
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer_size; } ;
typedef TYPE_1__ pa_t ;
typedef int pa_stream ;
struct TYPE_5__ {scalar_t__ tlength; } ;
typedef TYPE_2__ pa_buffer_attr ;


 int FUNC_0 (char*,unsigned int) ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(pa_stream *VAR_0, void *VAR_1)
{
   pa_t *VAR_2 = (pa_t*)VAR_1;
   const pa_buffer_attr *VAR_3 = FUNC_1(VAR_0);
   if (VAR_3)
      VAR_2->buffer_size = VAR_3->tlength;




}
