
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {int in_chunk_size; void* out_chunk_size; int * nb_prev_pkt; int * prev_pkt; int stream; int is_input; } ;
struct TYPE_9__ {int size; int data; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int) ;
 int FUNC_2 (int ,TYPE_2__*,void*,int *,int *) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_3, RTMPPacket *VAR_4)
{
    RTMPContext *VAR_5 = VAR_3->priv_data;
    int VAR_6;

    if (VAR_4->size < 4) {
        FUNC_1(VAR_3, VAR_2,
               "Too short chunk size change packet (%d)\n",
               VAR_4->size);
        return VAR_0;
    }

    if (!VAR_5->is_input) {


        if ((VAR_6 = FUNC_2(VAR_5->stream, VAR_4, VAR_5->out_chunk_size,
                                        &VAR_5->prev_pkt[1], &VAR_5->nb_prev_pkt[1])) < 0)
            return VAR_6;
        VAR_5->out_chunk_size = FUNC_0(VAR_4->data);
    }

    VAR_5->in_chunk_size = FUNC_0(VAR_4->data);
    if (VAR_5->in_chunk_size <= 0) {
        FUNC_1(VAR_3, VAR_2, "Incorrect chunk size %d\n",
               VAR_5->in_chunk_size);
        return VAR_0;
    }
    FUNC_1(VAR_3, VAR_1, "New incoming chunk size = %d\n",
           VAR_5->in_chunk_size);

    return 0;
}
