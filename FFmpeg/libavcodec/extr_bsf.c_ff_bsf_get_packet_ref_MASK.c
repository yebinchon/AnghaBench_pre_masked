
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int side_data_elems; int data; } ;
struct TYPE_6__ {TYPE_1__* internal; } ;
struct TYPE_5__ {TYPE_4__* buffer_pkt; scalar_t__ eof; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVBSFInternal ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_4__*) ;

int FUNC_2(AVBSFContext *VAR_2, AVPacket *VAR_3)
{
    AVBSFInternal *VAR_4 = VAR_2->internal;

    if (VAR_4->eof)
        return VAR_0;

    if (!VAR_2->internal->buffer_pkt->data &&
        !VAR_2->internal->buffer_pkt->side_data_elems)
        return FUNC_0(VAR_1);

    FUNC_1(VAR_3, VAR_2->internal->buffer_pkt);

    return 0;
}
