
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_7__ {int send_time; void* offset; void* packet_count; void* packet_number; } ;
struct TYPE_6__ {int next_start_sec; int nb_index_memory_alloc; void* next_packet_offset; void* next_packet_count; void* next_packet_number; int maximum_packet; TYPE_4__* index_ptr; } ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__**,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, int VAR_2,
                         uint32_t VAR_3, uint16_t VAR_4,
                         uint64_t VAR_5)
{
    ASFContext *VAR_6 = VAR_1->priv_data;

    if (VAR_2 > VAR_6->next_start_sec) {
        int VAR_7;

        if (!VAR_6->next_start_sec) {
            VAR_6->next_packet_number = VAR_3;
            VAR_6->next_packet_count = VAR_4;
            VAR_6->next_packet_offset = VAR_5;
        }

        if (VAR_2 > VAR_6->nb_index_memory_alloc) {
            int VAR_8;
            VAR_6->nb_index_memory_alloc = (VAR_2 + VAR_0) & ~(VAR_0 - 1);
            if ((VAR_8 = FUNC_2(&VAR_6->index_ptr,
                                         VAR_6->nb_index_memory_alloc,
                                         sizeof(*VAR_6->index_ptr))) < 0) {
                VAR_6->nb_index_memory_alloc = 0;
                return VAR_8;
            }
        }
        for (VAR_7 = VAR_6->next_start_sec; VAR_7 < VAR_2; VAR_7++) {
            VAR_6->index_ptr[VAR_7].packet_number = VAR_6->next_packet_number;
            VAR_6->index_ptr[VAR_7].packet_count = VAR_6->next_packet_count;
            VAR_6->index_ptr[VAR_7].send_time = VAR_6->next_start_sec * FUNC_1(10000000);
            VAR_6->index_ptr[VAR_7].offset = VAR_6->next_packet_offset;

        }
    }
    VAR_6->maximum_packet = FUNC_0(VAR_6->maximum_packet, VAR_4);
    VAR_6->next_packet_number = VAR_3;
    VAR_6->next_packet_count = VAR_4;
    VAR_6->next_packet_offset = VAR_5;
    VAR_6->next_start_sec = VAR_2;

    return 0;
}
