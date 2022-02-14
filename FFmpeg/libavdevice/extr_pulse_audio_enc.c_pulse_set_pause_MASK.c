
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pa_operation ;
struct TYPE_5__ {int stream; int mainloop; } ;
typedef TYPE_1__ PulseData ;


 int * FUNC_0 (int ,int,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(PulseData *VAR_1, int VAR_2)
{
    pa_operation *VAR_3;
    FUNC_1(VAR_1->mainloop);
    VAR_3 = FUNC_0(VAR_1->stream, VAR_2, VAR_0, VAR_1);
    return FUNC_2(VAR_1, VAR_3, "pa_stream_cork");
}
