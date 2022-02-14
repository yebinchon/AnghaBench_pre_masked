
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int active_thread_type; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(AVCodecContext *VAR_2)
{
    FUNC_2(VAR_2);

    if (VAR_2->active_thread_type&VAR_1)
        return FUNC_1(VAR_2);
    else if (VAR_2->active_thread_type&VAR_0)
        return FUNC_0(VAR_2);

    return 0;
}
