
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int header_count; int * header; int stream; int time_base; } ;
typedef TYPE_1__ NUTContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    NUTContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    FUNC_0(&VAR_1->time_base);
    FUNC_0(&VAR_1->stream);
    FUNC_1(VAR_1);
    for (VAR_2 = 1; VAR_2 < VAR_1->header_count; VAR_2++)
        FUNC_0(&VAR_1->header[VAR_2]);

    return 0;
}
