
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int height; } ;
struct TYPE_7__ {int bpp; scalar_t__ alpha; } ;
typedef TYPE_1__ FadeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2,
                            int VAR_3)
{
    FadeContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    int VAR_6 = (VAR_5->height * VAR_2 ) / VAR_3;
    int VAR_7 = (VAR_5->height * (VAR_2+1)) / VAR_3;

    if (VAR_4->alpha) FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, 1, 4);
    else if (VAR_4->bpp == 3) FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, 0, 3);
    else if (VAR_4->bpp == 4) FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, 0, 4);
    else FUNC_0(0);

    return 0;
}
