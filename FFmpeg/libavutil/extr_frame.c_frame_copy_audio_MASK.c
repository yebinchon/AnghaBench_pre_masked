
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int channels; scalar_t__ nb_samples; scalar_t__ channel_layout; int format; int * extended_data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ,int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_4(AVFrame *VAR_1, const AVFrame *VAR_2)
{
    int VAR_3 = FUNC_2(VAR_1->format);
    int VAR_4 = VAR_1->channels;
    int VAR_5 = VAR_3 ? VAR_4 : 1;
    int VAR_6;

    if (VAR_1->nb_samples != VAR_2->nb_samples ||
        VAR_1->channels != VAR_2->channels ||
        VAR_1->channel_layout != VAR_2->channel_layout)
        return FUNC_0(VAR_0);

    FUNC_1(VAR_2);

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
        if (!VAR_1->extended_data[VAR_6] || !VAR_2->extended_data[VAR_6])
            return FUNC_0(VAR_0);

    FUNC_3(VAR_1->extended_data, VAR_2->extended_data, 0, 0,
                    VAR_1->nb_samples, VAR_4, VAR_1->format);

    return 0;
}
