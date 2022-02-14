
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int const linesize_in; int pixel_composition; int width; scalar_t__ data_in; int modifier; } ;
typedef TYPE_1__ VignettingThreadData ;
typedef int AVFilterContext ;


 int FUNC_0 (int ,scalar_t__,int ,int const,int ,int const,int ,int const) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    const VignettingThreadData *VAR_4 = VAR_1;
    const int VAR_5 = VAR_4->height * VAR_2 / VAR_3;
    const int VAR_6 = VAR_4->height * (VAR_2 + 1) / VAR_3;

    FUNC_0(VAR_4->modifier,
                                         VAR_4->data_in + VAR_5 * VAR_4->linesize_in,
                                         0,
                                         VAR_5,
                                         VAR_4->width,
                                         VAR_6 - VAR_5,
                                         VAR_4->pixel_composition,
                                         VAR_4->linesize_in);

    return 0;
}
