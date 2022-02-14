
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {double h; scalar_t__ w; int format; TYPE_1__* dst; } ;
struct TYPE_6__ {double original_h; int shaping; int renderer; scalar_t__ original_w; scalar_t__ alpha; int draw; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ AssContext ;
typedef TYPE_3__ AVFilterLink ;


 int VAR_0 ;
 int FUNC_0 (int ,double,double) ;
 int FUNC_1 (int ,scalar_t__,double) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    AssContext *VAR_2 = VAR_1->dst->priv;

    FUNC_3(&VAR_2->draw, VAR_1->format, VAR_2->alpha ? VAR_0 : 0);

    FUNC_1 (VAR_2->renderer, VAR_1->w, VAR_1->h);
    if (VAR_2->original_w && VAR_2->original_h)
        FUNC_0(VAR_2->renderer, (double)VAR_1->w / VAR_1->h,
                             (double)VAR_2->original_w / VAR_2->original_h);
    if (VAR_2->shaping != -1)
        FUNC_2(VAR_2->renderer, VAR_2->shaping);

    return 0;
}
