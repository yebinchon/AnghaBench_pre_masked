
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {int nb_streams; TYPE_1__* tracks; } ;
struct TYPE_6__ {int data_offset; } ;
typedef TYPE_2__ MOVMuxContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    MOVMuxContext *VAR_4 = VAR_0->priv_data;

    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 < 0)
        return VAR_2;

    for (VAR_1 = 0; VAR_1 < VAR_4->nb_streams; VAR_1++)
        VAR_4->tracks[VAR_1].data_offset += VAR_2;

    VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 < 0)
        return VAR_3;



    if (VAR_3 != VAR_2)
        for (VAR_1 = 0; VAR_1 < VAR_4->nb_streams; VAR_1++)
            VAR_4->tracks[VAR_1].data_offset += VAR_3 - VAR_2;

    return VAR_3;
}
