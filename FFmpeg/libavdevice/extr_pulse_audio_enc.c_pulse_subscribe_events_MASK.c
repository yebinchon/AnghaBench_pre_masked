
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pa_operation ;
struct TYPE_5__ {int ctx; int mainloop; } ;
typedef TYPE_1__ PulseData ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *,char*) ;

__attribute__((used)) static int FUNC_3(PulseData *VAR_2)
{
    pa_operation *VAR_3;

    FUNC_1(VAR_2->mainloop);
    VAR_3 = FUNC_0(VAR_2->ctx, VAR_0, VAR_1, VAR_2);
    return FUNC_2(VAR_2, VAR_3, "pa_context_subscribe");
}
