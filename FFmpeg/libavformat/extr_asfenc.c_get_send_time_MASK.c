
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_5__ {int next_start_sec; TYPE_1__* index_ptr; scalar_t__ data_offset; } ;
struct TYPE_4__ {scalar_t__ send_time; scalar_t__ offset; } ;
typedef TYPE_2__ ASFContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int32_t FUNC_0(ASFContext *VAR_1, int64_t VAR_2, uint64_t *VAR_3)
{
    int VAR_4;
    int32_t VAR_5 = 0;
    *VAR_3 = VAR_1->data_offset + VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_1->next_start_sec; VAR_4++) {
        if (VAR_2 <= VAR_1->index_ptr[VAR_4].send_time)
            break;
        VAR_5 = VAR_1->index_ptr[VAR_4].send_time;
        *VAR_3 = VAR_1->index_ptr[VAR_4].offset;
    }

    return VAR_5 / 10000;
}
