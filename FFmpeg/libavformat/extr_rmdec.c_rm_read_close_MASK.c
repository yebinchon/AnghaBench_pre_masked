
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_4__ {int priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    int VAR_1;

    for (VAR_1=0;VAR_1<VAR_0->nb_streams;VAR_1++)
        FUNC_0(VAR_0->streams[VAR_1]->priv_data);

    return 0;
}
