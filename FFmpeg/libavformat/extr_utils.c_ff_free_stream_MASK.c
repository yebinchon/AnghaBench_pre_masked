
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_streams; int ** streams; } ;
typedef int AVStream ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;

void FUNC_2(AVFormatContext *VAR_0, AVStream *VAR_1)
{
    FUNC_0(VAR_0->nb_streams>0);
    FUNC_0(VAR_0->streams[ VAR_0->nb_streams - 1 ] == VAR_1);

    FUNC_1(&VAR_0->streams[ --VAR_0->nb_streams ]);
}
