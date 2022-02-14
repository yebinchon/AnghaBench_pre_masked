
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* io_close ) (TYPE_1__*,int *) ;} ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (TYPE_1__*,int *) ;

void FUNC_1(AVFormatContext *VAR_0, AVIOContext **VAR_1)
{
    if (*VAR_1)
        VAR_0->io_close(VAR_0, *VAR_1);
    *VAR_1 = ((void*)0);
}
