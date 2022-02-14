
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int name ;
struct TYPE_9__ {int * nb_prev_pkt; int * prev_pkt; int out_chunk_size; int stream; } ;
struct TYPE_8__ {scalar_t__ type; int size; int data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;
typedef int GetByteContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,double) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,double*) ;
 int FUNC_3 (int *,char*,int,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_6(RTMPContext *VAR_1, RTMPPacket *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_2->type == VAR_0 && VAR_3) {
        GetByteContext VAR_5;
        char VAR_6[128];
        double VAR_7;
        int VAR_8;

        FUNC_1(&VAR_5, VAR_2->data, VAR_2->size);
        if ((VAR_4 = FUNC_3(&VAR_5, VAR_6, sizeof(VAR_6), &VAR_8)) < 0)
            goto fail;

        if ((VAR_4 = FUNC_2(&VAR_5, &VAR_7)) < 0)
            goto fail;

        if ((VAR_4 = FUNC_0(VAR_1, VAR_6, VAR_7)) < 0)
            goto fail;
    }

    VAR_4 = FUNC_5(VAR_1->stream, VAR_2, VAR_1->out_chunk_size,
                               &VAR_1->prev_pkt[1], &VAR_1->nb_prev_pkt[1]);
fail:
    FUNC_4(VAR_2);
    return VAR_4;
}
