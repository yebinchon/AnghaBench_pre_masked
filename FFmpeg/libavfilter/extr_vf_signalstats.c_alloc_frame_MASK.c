
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {int format; int width; int height; } ;
typedef TYPE_1__ AVFrame ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static AVFrame *FUNC_3(enum AVPixelFormat VAR_0, int VAR_1, int VAR_2)
{
    AVFrame *VAR_3 = FUNC_0();
    if (!VAR_3)
        return ((void*)0);

    VAR_3->format = VAR_0;
    VAR_3->width = VAR_1;
    VAR_3->height = VAR_2;

    if (FUNC_2(VAR_3, 32) < 0) {
        FUNC_1(&VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
