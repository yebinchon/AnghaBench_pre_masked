
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
struct TYPE_11__ {int w; int h; int format; TYPE_5__* dst; } ;
struct TYPE_10__ {TYPE_1__* comp; } ;
struct TYPE_9__ {int nb_planes; int points; scalar_t__ back; scalar_t__ front; int pick_pixel; int is_same; int set_pixel; } ;
struct TYPE_8__ {int depth; } ;
typedef int Points ;
typedef TYPE_2__ FloodfillContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_19)
{
    const AVPixFmtDescriptor *VAR_20 = FUNC_3(VAR_19->format);
    AVFilterContext *VAR_21 = VAR_19->dst;
    FloodfillContext *VAR_22 = VAR_21->priv;
    int VAR_23;

    VAR_22->nb_planes = FUNC_2(VAR_19->format);
    VAR_23 = VAR_20->comp[0].depth;
    if (VAR_23 == 8) {
        switch (VAR_22->nb_planes) {
        case 1: VAR_22->set_pixel = VAR_13;
                VAR_22->is_same = VAR_1;
                VAR_22->pick_pixel = VAR_7; break;
        case 3: VAR_22->set_pixel = VAR_15;
                VAR_22->is_same = VAR_3;
                VAR_22->pick_pixel = VAR_9; break;
        case 4: VAR_22->set_pixel = VAR_17;
                VAR_22->is_same = VAR_5;
                VAR_22->pick_pixel = VAR_11; break;
       }
    } else {
        switch (VAR_22->nb_planes) {
        case 1: VAR_22->set_pixel = VAR_14;
                VAR_22->is_same = VAR_2;
                VAR_22->pick_pixel = VAR_8; break;
        case 3: VAR_22->set_pixel = VAR_16;
                VAR_22->is_same = VAR_4;
                VAR_22->pick_pixel = VAR_10; break;
        case 4: VAR_22->set_pixel = VAR_18;
                VAR_22->is_same = VAR_6;
                VAR_22->pick_pixel = VAR_12; break;
       }
    }

    VAR_22->front = VAR_22->back = 0;
    VAR_22->points = FUNC_1(VAR_19->w * VAR_19->h, 4 * sizeof(Points));
    if (!VAR_22->points)
        return FUNC_0(VAR_0);

    return 0;
}
