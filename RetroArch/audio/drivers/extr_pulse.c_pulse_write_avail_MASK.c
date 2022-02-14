
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mainloop; int buffer_size; int stream; } ;
typedef TYPE_1__ pa_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static size_t FUNC_4(void *VAR_0)
{
   size_t VAR_1;
   pa_t *VAR_2 = (pa_t*)VAR_0;

   FUNC_2(VAR_2->mainloop);
   VAR_1 = FUNC_1(VAR_2->stream);

   FUNC_0(VAR_2->buffer_size);
   FUNC_3(VAR_2->mainloop);
   return VAR_1;
}
