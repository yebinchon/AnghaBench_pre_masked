
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* internal; } ;
struct TYPE_8__ {TYPE_1__* buffer_pkt; scalar_t__ eof; } ;
struct TYPE_7__ {int side_data_elems; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVBSFInternal ;
typedef TYPE_3__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 () ;

int FUNC_2(AVBSFContext *VAR_3, AVPacket **VAR_4)
{
    AVBSFInternal *VAR_5 = VAR_3->internal;
    AVPacket *VAR_6;

    if (VAR_5->eof)
        return VAR_0;

    if (!VAR_3->internal->buffer_pkt->data &&
        !VAR_3->internal->buffer_pkt->side_data_elems)
        return FUNC_0(VAR_1);

    VAR_6 = FUNC_1();
    if (!VAR_6)
        return FUNC_0(VAR_2);

    *VAR_4 = VAR_3->internal->buffer_pkt;
    VAR_3->internal->buffer_pkt = VAR_6;

    return 0;
}
