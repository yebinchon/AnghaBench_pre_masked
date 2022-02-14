
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {scalar_t__ w; scalar_t__ h; TYPE_3__* dst; } ;
struct TYPE_6__ {scalar_t__ mask_w; scalar_t__ mask_h; } ;
typedef TYPE_1__ RemovelogoContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    RemovelogoContext *VAR_4 = VAR_3->priv;

    if (VAR_2->w != VAR_4->mask_w || VAR_2->h != VAR_4->mask_h) {
        FUNC_1(VAR_3, VAR_0,
               "Mask image size %dx%d does not match with the input video size %dx%d\n",
               VAR_4->mask_w, VAR_4->mask_h, VAR_2->w, VAR_2->h);
        return FUNC_0(VAR_1);
    }

    return 0;
}
