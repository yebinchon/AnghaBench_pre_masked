
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int num_levels; int resync_pos; TYPE_1__* ctx; scalar_t__ unknown_count; scalar_t__ current_id; } ;
struct TYPE_4__ {int pb; } ;
typedef TYPE_2__ MatroskaDemuxContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(MatroskaDemuxContext *VAR_1,
                                 uint32_t VAR_2, int64_t VAR_3)
{
    if (VAR_3 >= 0) {
        int64_t VAR_4 = FUNC_1(VAR_1->ctx->pb, VAR_3, VAR_0);
        if (VAR_4 < 0)
            return VAR_4;
    }

    VAR_1->current_id = VAR_2;
    VAR_1->num_levels = 1;
    VAR_1->unknown_count = 0;
    VAR_1->resync_pos = FUNC_2(VAR_1->ctx->pb);
    if (VAR_2)
        VAR_1->resync_pos -= (FUNC_0(VAR_2) + 7) / 8;

    return 0;
}
