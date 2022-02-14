
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct playlist {scalar_t__ is_id3_timestamped; } ;
struct TYPE_8__ {int num; int den; } ;
struct TYPE_9__ {int pts_wrap_bits; TYPE_1__* internal; TYPE_2__ time_base; int codecpar; } ;
struct TYPE_7__ {int need_context_update; } ;
typedef TYPE_3__ AVStream ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(AVStream *VAR_1, struct playlist *VAR_2, AVStream *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0(VAR_1->codecpar, VAR_3->codecpar);
    if (VAR_4 < 0)
        return VAR_4;

    if (VAR_2->is_id3_timestamped)
        FUNC_1(VAR_1, 33, 1, VAR_0);
    else
        FUNC_1(VAR_1, VAR_3->pts_wrap_bits, VAR_3->time_base.num, VAR_3->time_base.den);

    VAR_1->internal->need_context_update = 1;

    return 0;
}
