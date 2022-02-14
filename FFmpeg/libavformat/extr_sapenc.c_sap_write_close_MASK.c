
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct SAPState {int* ann; scalar_t__ ann_fd; int ann_size; scalar_t__ last_time; } ;
struct TYPE_7__ {int nb_streams; TYPE_1__** streams; int pb; struct SAPState* priv_data; } ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int**) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_0)
{
    struct SAPState *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->nb_streams; VAR_2++) {
        AVFormatContext *VAR_3 = VAR_0->streams[VAR_2]->priv_data;
        if (!VAR_3)
            continue;
        FUNC_1(VAR_3);
        FUNC_3(&VAR_3->pb);
        FUNC_2(VAR_3);
        VAR_0->streams[VAR_2]->priv_data = ((void*)0);
    }

    if (VAR_1->last_time && VAR_1->ann && VAR_1->ann_fd) {
        VAR_1->ann[0] |= 4;
        FUNC_6(VAR_1->ann_fd, VAR_1->ann, VAR_1->ann_size);
    }

    FUNC_0(&VAR_1->ann);
    if (VAR_1->ann_fd)
        FUNC_5(VAR_1->ann_fd);
    FUNC_4();
    return 0;
}
