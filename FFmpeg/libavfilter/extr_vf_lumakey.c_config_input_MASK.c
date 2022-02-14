
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {TYPE_5__* dst; int format; } ;
struct TYPE_10__ {TYPE_1__* comp; } ;
struct TYPE_9__ {int max; int do_lumakey_slice; scalar_t__ tolerance; scalar_t__ threshold; void* black; void* white; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ LumakeyContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 void* FUNC_0 (scalar_t__,int ,int) ;
 void* FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_2)
{
    const AVPixFmtDescriptor *VAR_3 = FUNC_2(VAR_2->format);
    AVFilterContext *VAR_4 = VAR_2->dst;
    LumakeyContext *VAR_5 = VAR_4->priv;
    int VAR_6;

    VAR_6 = VAR_3->comp[0].depth;
    if (VAR_6 == 8) {
        VAR_5->white = FUNC_1(VAR_5->threshold + VAR_5->tolerance);
        VAR_5->black = FUNC_1(VAR_5->threshold - VAR_5->tolerance);
        VAR_5->do_lumakey_slice = VAR_1;
    } else {
        VAR_5->max = (1 << VAR_6) - 1;
        VAR_5->white = FUNC_0(VAR_5->threshold + VAR_5->tolerance, 0, VAR_5->max);
        VAR_5->black = FUNC_0(VAR_5->threshold - VAR_5->tolerance, 0, VAR_5->max);
        VAR_5->do_lumakey_slice = VAR_0;
    }

    return 0;
}
