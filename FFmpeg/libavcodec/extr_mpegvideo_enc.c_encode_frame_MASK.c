
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; int member_0; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2, AVFrame *VAR_3)
{
    AVPacket VAR_4 = { 0 };
    int VAR_5;
    int VAR_6 = 0;

    FUNC_1(&VAR_4);

    VAR_5 = FUNC_4(VAR_2, VAR_3);
    if (VAR_5 < 0)
        return VAR_5;

    do {
        VAR_5 = FUNC_3(VAR_2, &VAR_4);
        if (VAR_5 >= 0) {
            VAR_6 += VAR_4.size;
            FUNC_2(&VAR_4);
        } else if (VAR_5 < 0 && VAR_5 != FUNC_0(VAR_1) && VAR_5 != VAR_0)
            return VAR_5;
    } while (VAR_5 >= 0);

    return VAR_6;
}
