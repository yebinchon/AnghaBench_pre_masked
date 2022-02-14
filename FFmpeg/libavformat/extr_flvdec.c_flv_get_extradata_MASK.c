
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int extradata; } ;
struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {TYPE_1__* internal; TYPE_7__* codecpar; } ;
struct TYPE_8__ {int need_context_update; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_7__*,int ,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AVStream *VAR_2, int VAR_3)
{
    if (!VAR_3)
        return 0;

    FUNC_1(&VAR_2->codecpar->extradata);
    if (FUNC_2(VAR_1, VAR_2->codecpar, VAR_1->pb, VAR_3) < 0)
        return FUNC_0(VAR_0);
    VAR_2->internal->need_context_update = 1;
    return 0;
}
