
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_5__ {scalar_t__ num_levels; TYPE_1__* levels; int ctx; } ;
struct TYPE_4__ {int length; int start; } ;
typedef TYPE_1__ MatroskaLevel ;
typedef TYPE_2__ MatroskaDemuxContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(MatroskaDemuxContext *VAR_3,
                            uint64_t VAR_4, int64_t VAR_5)
{
    MatroskaLevel *VAR_6;

    if (VAR_3->num_levels >= VAR_1) {
        FUNC_1(VAR_3->ctx, VAR_0,
               "File moves beyond max. allowed depth (%d)\n", VAR_1);
        return FUNC_0(VAR_2);
    }

    VAR_6 = &VAR_3->levels[VAR_3->num_levels++];
    VAR_6->start = VAR_5;
    VAR_6->length = VAR_4;

    return 0;
}
