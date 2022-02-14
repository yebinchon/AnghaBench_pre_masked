
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ format; scalar_t__ width; scalar_t__ height; scalar_t__ nb_samples; scalar_t__ channels; scalar_t__ channel_layout; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(AVFrame *VAR_1, int VAR_2)
{
    if (VAR_1->format < 0)
        return FUNC_0(VAR_0);

    if (VAR_1->width > 0 && VAR_1->height > 0)
        return FUNC_2(VAR_1, VAR_2);
    else if (VAR_1->nb_samples > 0 && (VAR_1->channel_layout || VAR_1->channels > 0))
        return FUNC_1(VAR_1, VAR_2);

    return FUNC_0(VAR_0);
}
