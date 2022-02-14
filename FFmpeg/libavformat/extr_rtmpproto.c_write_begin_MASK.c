
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int * nb_prev_pkt; int * prev_pkt; int out_chunk_size; int stream; int nb_streamid; } ;
struct TYPE_10__ {int size; int data; int member_0; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;
typedef int PutByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_3)
{
    RTMPContext *VAR_4 = VAR_3->priv_data;
    PutByteContext VAR_5;
    RTMPPacket VAR_6 = { 0 };
    int VAR_7;


    if ((VAR_7 = FUNC_4(&VAR_6, VAR_1,
                                     VAR_2, 0, 6)) < 0) {
        FUNC_0(VAR_3, VAR_0, "Unable to create response packet\n");
        return VAR_7;
    }

    FUNC_1(&VAR_5, VAR_6.data, VAR_6.size);
    FUNC_2(&VAR_5, 0);
    FUNC_3(&VAR_5, VAR_4->nb_streamid);

    VAR_7 = FUNC_6(VAR_4->stream, &VAR_6, VAR_4->out_chunk_size,
                               &VAR_4->prev_pkt[1], &VAR_4->nb_prev_pkt[1]);

    FUNC_5(&VAR_6);

    return VAR_7;
}
