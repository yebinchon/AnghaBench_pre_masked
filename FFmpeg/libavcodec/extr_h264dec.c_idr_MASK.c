
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int prev_poc_msb; int prev_poc_lsb; scalar_t__ prev_frame_num_offset; scalar_t__ prev_frame_num; } ;
struct TYPE_6__ {int * last_pocs; TYPE_1__ poc; } ;
typedef TYPE_2__ H264Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(H264Context *VAR_2)
{
    int VAR_3;
    FUNC_0(VAR_2);
    VAR_2->poc.prev_frame_num =
    VAR_2->poc.prev_frame_num_offset = 0;
    VAR_2->poc.prev_poc_msb = 1<<16;
    VAR_2->poc.prev_poc_lsb = -1;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        VAR_2->last_pocs[VAR_3] = VAR_0;
}
