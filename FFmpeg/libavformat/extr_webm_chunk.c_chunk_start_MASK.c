
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chunk_index; TYPE_2__* avf; } ;
typedef TYPE_1__ WebMChunkContext ;
struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    WebMChunkContext *VAR_1 = VAR_0->priv_data;
    AVFormatContext *VAR_2 = VAR_1->avf;
    int VAR_3;

    VAR_3 = FUNC_0(&VAR_2->pb);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_1->chunk_index++;
    return 0;
}
