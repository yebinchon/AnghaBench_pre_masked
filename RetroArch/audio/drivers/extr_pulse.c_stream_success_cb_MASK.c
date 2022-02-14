
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int success; int mainloop; } ;
typedef TYPE_1__ pa_t ;
typedef int pa_stream ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(pa_stream *VAR_0, int VAR_1, void *VAR_2)
{
   pa_t *VAR_3 = (pa_t*)VAR_2;
   (void)VAR_0;
   VAR_3->success = VAR_1;
   FUNC_0(VAR_3->mainloop, 0);
}
