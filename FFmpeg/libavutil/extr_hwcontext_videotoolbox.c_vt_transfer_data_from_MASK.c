
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ width; scalar_t__ height; int format; } ;
struct TYPE_13__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__ const*,int ) ;

__attribute__((used)) static int FUNC_5(AVHWFramesContext *VAR_3,
                                 AVFrame *VAR_4, const AVFrame *VAR_5)
{
    AVFrame *VAR_6;
    int VAR_7;

    if (VAR_4->width > VAR_3->width || VAR_4->height > VAR_3->height)
        return FUNC_0(VAR_1);

    VAR_6 = FUNC_1();
    if (!VAR_6)
        return FUNC_0(VAR_2);
    VAR_6->format = VAR_4->format;

    VAR_7 = FUNC_4(VAR_3, VAR_6, VAR_5, VAR_0);
    if (VAR_7)
        goto fail;

    VAR_6->width = VAR_4->width;
    VAR_6->height = VAR_4->height;

    VAR_7 = FUNC_2(VAR_4, VAR_6);
    if (VAR_7)
        goto fail;

    VAR_7 = 0;
fail:
    FUNC_3(&VAR_6);
    return VAR_7;
}
