
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int active_thread_type; int thread_count; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(AVCodecContext *VAR_1)
{
    if (VAR_1->active_thread_type&VAR_0)
        FUNC_0(VAR_1, VAR_1->thread_count);
    else
        FUNC_1(VAR_1);
}
