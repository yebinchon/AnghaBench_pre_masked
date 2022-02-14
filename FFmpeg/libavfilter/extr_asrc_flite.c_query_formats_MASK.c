
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {TYPE_2__* priv; } ;
struct TYPE_9__ {TYPE_1__* wave; } ;
struct TYPE_8__ {int sample_rate; int num_channels; } ;
typedef TYPE_2__ FliteContext ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1)
{
    FliteContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    AVFilterChannelLayouts *VAR_4 = ((void*)0);
    int64_t VAR_5 = FUNC_0(VAR_2->wave->num_channels);
    AVFilterFormats *VAR_6 = ((void*)0);
    AVFilterFormats *VAR_7 = ((void*)0);

    if ((VAR_3 = FUNC_1 (&VAR_4 , VAR_5 )) < 0 ||
        (VAR_3 = FUNC_3 (VAR_1 , VAR_4 )) < 0 ||
        (VAR_3 = FUNC_2 (&VAR_6, VAR_0 )) < 0 ||
        (VAR_3 = FUNC_4 (VAR_1 , VAR_6 )) < 0 ||
        (VAR_3 = FUNC_2 (&VAR_7 , VAR_2->wave->sample_rate)) < 0 ||
        (VAR_3 = FUNC_5 (VAR_1 , VAR_7 )) < 0)
        return VAR_3;

    return 0;
}
