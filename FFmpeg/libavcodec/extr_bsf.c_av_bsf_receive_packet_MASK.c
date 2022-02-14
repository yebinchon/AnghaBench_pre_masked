
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* filter; } ;
struct TYPE_5__ {int (* filter ) (TYPE_2__*,int *) ;} ;
typedef int AVPacket ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (TYPE_2__*,int *) ;

int FUNC_1(AVBSFContext *VAR_0, AVPacket *VAR_1)
{
    return VAR_0->filter->filter(VAR_0, VAR_1);
}
