
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* filter; TYPE_1__* internal; } ;
struct TYPE_7__ {int (* flush ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int buffer_pkt; scalar_t__ eof; } ;
typedef TYPE_3__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(AVBSFContext *VAR_0)
{
    VAR_0->internal->eof = 0;

    FUNC_0(VAR_0->internal->buffer_pkt);

    if (VAR_0->filter->flush)
        VAR_0->filter->flush(VAR_0);
}
