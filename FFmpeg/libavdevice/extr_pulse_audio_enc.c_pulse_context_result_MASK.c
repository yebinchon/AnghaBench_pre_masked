
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pa_context ;
struct TYPE_2__ {int mainloop; int last_result; int * ctx; } ;
typedef TYPE_1__ PulseData ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(pa_context *VAR_1, int VAR_2, void *VAR_3)
{
    PulseData *VAR_4 = VAR_3;

    if (VAR_4->ctx != VAR_1)
        return;

    VAR_4->last_result = VAR_2 ? 0 : VAR_0;
    FUNC_0(VAR_4->mainloop, 0);
}
