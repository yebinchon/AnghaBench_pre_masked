
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int w; int h; TYPE_3__* dst; } ;
struct TYPE_6__ {int grp_width; int scan_max; } ;
typedef TYPE_1__ ReadVitcContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    ReadVitcContext *VAR_3 = VAR_2->priv;

    VAR_3->grp_width = VAR_1->w * 5 / 48;
    FUNC_0(VAR_2, VAR_0, "w:%d h:%d grp_width:%d scan_max:%d\n",
            VAR_1->w, VAR_1->h, VAR_3->grp_width, VAR_3->scan_max);
    return 0;
}
