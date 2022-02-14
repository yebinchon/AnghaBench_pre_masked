
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int nb_streams; int metadata; struct TYPE_7__* streams; scalar_t__ bsf; struct TYPE_7__* url; } ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {unsigned int nb_files; TYPE_4__* files; scalar_t__ avf; } ;
typedef TYPE_1__ ConcatContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    ConcatContext *VAR_1 = VAR_0->priv_data;
    unsigned VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_files; VAR_2++) {
        FUNC_2(&VAR_1->files[VAR_2].url);
        for (VAR_3 = 0; VAR_3 < VAR_1->files[VAR_2].nb_streams; VAR_3++) {
            if (VAR_1->files[VAR_2].streams[VAR_3].bsf)
                FUNC_0(&VAR_1->files[VAR_2].streams[VAR_3].bsf);
        }
        FUNC_2(&VAR_1->files[VAR_2].streams);
        FUNC_1(&VAR_1->files[VAR_2].metadata);
    }
    if (VAR_1->avf)
        FUNC_3(&VAR_1->avf);
    FUNC_2(&VAR_1->files);
    return 0;
}
