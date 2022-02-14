
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int rtsp_flags; int real_setup_cache; int * real_setup; int control_uri; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,int ,int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1)
{
    RTSPState *VAR_2 = VAR_1->priv_data;

    if (!(VAR_2->rtsp_flags & VAR_0))
        FUNC_4(VAR_1, "TEARDOWN", VAR_2->control_uri, ((void*)0));

    FUNC_3(VAR_1);
    FUNC_2(VAR_1);
    FUNC_1();
    VAR_2->real_setup = ((void*)0);
    FUNC_0(&VAR_2->real_setup_cache);
    return 0;
}
