
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nb_streams; int ** streams; } ;
typedef int AVStream ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int*) ;

int FUNC_5(AVFormatContext *VAR_2, AVIOContext *VAR_3)
{
    AVStream *VAR_4;
    int VAR_5, VAR_6 = 0;

    if (VAR_2->nb_streams < 1)
        return 0;
    VAR_4 = VAR_2->streams[VAR_2->nb_streams-1];

    FUNC_1(VAR_3);
    FUNC_4(VAR_2, VAR_3, &VAR_5);
    if (VAR_5 == VAR_1) {
        FUNC_2(VAR_3, ((void*)0));
    } else
        FUNC_0(VAR_3);

    FUNC_4(VAR_2, VAR_3, &VAR_5);
    if (VAR_5 == VAR_0)
        VAR_6 = FUNC_3(VAR_2, VAR_4, VAR_3);

    return VAR_6;
}
