
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* delta; void* pts; } ;
typedef TYPE_2__ sync_delta_t ;
struct TYPE_9__ {int stream_count; TYPE_1__* streams; } ;
typedef TYPE_3__ sync_common_t ;
typedef void* int64_t ;
struct TYPE_7__ {int delta_list; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( sync_common_t * VAR_0, int64_t VAR_1, int64_t VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->stream_count; VAR_3++)
    {
        sync_delta_t * VAR_4 = FUNC_1(sizeof(sync_delta_t));
        VAR_4->pts = VAR_1;
        VAR_4->delta = VAR_2;
        FUNC_0(VAR_0->streams[VAR_3].delta_list, VAR_4);
    }
}
