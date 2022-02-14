
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ side_data_elems; scalar_t__ data; } ;
struct TYPE_12__ {TYPE_1__* internal; } ;
struct TYPE_11__ {int side_data_elems; int data; } ;
struct TYPE_10__ {int eof; TYPE_4__* buffer_pkt; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;

int FUNC_4(AVBSFContext *VAR_3, AVPacket *VAR_4)
{
    int VAR_5;

    if (!VAR_4 || (!VAR_4->data && !VAR_4->side_data_elems)) {
        VAR_3->internal->eof = 1;
        return 0;
    }

    if (VAR_3->internal->eof) {
        FUNC_1(VAR_3, VAR_0, "A non-NULL packet sent after an EOF.\n");
        return FUNC_0(VAR_2);
    }

    if (VAR_3->internal->buffer_pkt->data ||
        VAR_3->internal->buffer_pkt->side_data_elems)
        return FUNC_0(VAR_1);

    VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 < 0)
        return VAR_5;
    FUNC_3(VAR_3->internal->buffer_pkt, VAR_4);

    return 0;
}
