
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_14__ {TYPE_2__* priv; } ;
struct TYPE_13__ {int format; int w; TYPE_5__* dst; } ;
struct TYPE_12__ {int flags; int nb_components; TYPE_1__* comp; } ;
struct TYPE_11__ {int requested_planes; int depth; int step; int is_packed; size_t* map; int linesize; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_2__ ExtractPlanesContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ,char*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (size_t*,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_12)
{
    AVFilterContext *VAR_13 = VAR_12->dst;
    ExtractPlanesContext *VAR_14 = VAR_13->priv;
    const AVPixFmtDescriptor *VAR_15 = FUNC_4(VAR_12->format);
    int VAR_16, VAR_17, VAR_18;
    uint8_t VAR_19[4];

    VAR_16 = ((VAR_15->flags & VAR_3) ? VAR_8|VAR_7|VAR_6 :
                                                 VAR_11 |
                                ((VAR_15->nb_components > 2) ? VAR_9|VAR_10 : 0)) |
                  ((VAR_15->flags & VAR_1) ? VAR_5 : 0);
    if (VAR_14->requested_planes & ~VAR_16) {
        FUNC_3(VAR_13, VAR_0, "Requested planes not available.\n");
        return FUNC_0(VAR_4);
    }
    if ((VAR_17 = FUNC_2(VAR_14->linesize, VAR_12->format, VAR_12->w)) < 0)
        return VAR_17;

    VAR_14->depth = VAR_15->comp[0].depth >> 3;
    VAR_14->step = FUNC_1(VAR_15) >> 3;
    VAR_14->is_packed = !(VAR_15->flags & VAR_2) &&
                    (VAR_15->nb_components > 1);
    if (VAR_15->flags & VAR_3) {
        FUNC_5(VAR_19, VAR_12->format);
        for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
            VAR_14->map[VAR_18] = VAR_19[VAR_14->map[VAR_18]];
    }

    return 0;
}
