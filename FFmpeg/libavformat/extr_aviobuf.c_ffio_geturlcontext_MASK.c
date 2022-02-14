
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int URLContext ;
struct TYPE_5__ {scalar_t__ read_packet; TYPE_1__* opaque; } ;
struct TYPE_4__ {int * h; } ;
typedef TYPE_1__ AVIOInternal ;
typedef TYPE_2__ AVIOContext ;


 scalar_t__ VAR_0 ;

URLContext* FUNC_0(AVIOContext *VAR_1)
{
    AVIOInternal *VAR_2;
    if (!VAR_1)
        return ((void*)0);

    VAR_2 = VAR_1->opaque;
    if (VAR_2 && VAR_1->read_packet == VAR_0)
        return VAR_2->h;
    else
        return ((void*)0);
}
