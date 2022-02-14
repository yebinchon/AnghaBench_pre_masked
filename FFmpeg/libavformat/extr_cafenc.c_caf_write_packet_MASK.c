
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__** streams; int pb; TYPE_3__* priv_data; } ;
struct TYPE_11__ {int size; int data; } ;
struct TYPE_10__ {int* pkt_sizes; int size_entries_used; int packets; int size_buffer_size; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int block_align; } ;
typedef TYPE_3__ CAFContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int* FUNC_1 (int*,int *,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    CAFContext *VAR_3 = VAR_1->priv_data;

    FUNC_3(VAR_1->pb, VAR_2->data, VAR_2->size);
    if (!VAR_1->streams[0]->codecpar->block_align) {
        void *VAR_4 = VAR_3->pkt_sizes;
        int VAR_5, VAR_6 = VAR_3->size_entries_used + 5;
        if (VAR_6 < 0) {
            VAR_3->pkt_sizes = ((void*)0);
        } else {
            VAR_3->pkt_sizes = FUNC_1(VAR_3->pkt_sizes,
                                             &VAR_3->size_buffer_size,
                                             VAR_6);
        }
        if (!VAR_3->pkt_sizes) {
            FUNC_2(VAR_4);
            return FUNC_0(VAR_0);
        }
        for (VAR_5 = 4; VAR_5 > 0; VAR_5--) {
            unsigned VAR_7 = VAR_2->size >> VAR_5 * 7;
            if (VAR_7)
                VAR_3->pkt_sizes[VAR_3->size_entries_used++] = 128 | VAR_7;
        }
        VAR_3->pkt_sizes[VAR_3->size_entries_used++] = VAR_2->size & 127;
        VAR_3->packets++;
    }
    return 0;
}
