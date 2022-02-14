
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int control_uri; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0)
{
    RTSPState *VAR_1 = VAR_0->priv_data;




    FUNC_4(VAR_0, 1);

    FUNC_3(VAR_0, "TEARDOWN", VAR_1->control_uri, ((void*)0));

    FUNC_2(VAR_0);
    FUNC_1(VAR_0);
    FUNC_0();
    return 0;
}
