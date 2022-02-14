
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VASurfaceID ;
struct TYPE_10__ {TYPE_2__* rps; } ;
struct TYPE_9__ {int frame; } ;
struct TYPE_8__ {int nb_refs; TYPE_1__** ref; } ;
struct TYPE_7__ {int frame; } ;
typedef TYPE_3__ HEVCFrame ;
typedef TYPE_4__ HEVCContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const HEVCContext *VAR_6, const HEVCFrame *VAR_7)
{
    VASurfaceID VAR_8 = FUNC_0(VAR_7->frame);
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_6->rps[VAR_2].nb_refs; VAR_9++) {
        if (VAR_8 == FUNC_0(VAR_6->rps[VAR_2].ref[VAR_9]->frame))
            return VAR_5;
    }

    for (VAR_9 = 0; VAR_9 < VAR_6->rps[VAR_1].nb_refs; VAR_9++) {
        if (VAR_8 == FUNC_0(VAR_6->rps[VAR_1].ref[VAR_9]->frame))
            return VAR_4;
    }

    for (VAR_9 = 0; VAR_9 < VAR_6->rps[VAR_0].nb_refs; VAR_9++) {
        if (VAR_8 == FUNC_0(VAR_6->rps[VAR_0].ref[VAR_9]->frame))
            return VAR_3;
    }

    return 0;
}
