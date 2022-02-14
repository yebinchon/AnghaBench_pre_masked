
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {TYPE_3__* avf; } ;
struct TYPE_6__ {TYPE_3__* avf; } ;
typedef TYPE_1__ FifoThreadContext ;
typedef TYPE_2__ FifoContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_1(FifoThreadContext *VAR_0)
{
    AVFormatContext *VAR_1 = VAR_0->avf;
    FifoContext *VAR_2 = VAR_1->priv_data;
    AVFormatContext *VAR_3 = VAR_2->avf;

    return FUNC_0(VAR_3, ((void*)0));
}
