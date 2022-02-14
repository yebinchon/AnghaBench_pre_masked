
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, void *VAR_4,
                                  int *VAR_5, AVPacket *VAR_6)
{
    AVFrame *VAR_7, *VAR_8;
    int VAR_9;

    if (!(VAR_6->flags & VAR_0)) {

        return FUNC_0(VAR_2);
    }

    if (VAR_6->size < sizeof(AVFrame))
        return FUNC_0(VAR_1);

    VAR_7 = (AVFrame*)VAR_6->data;
    VAR_8 = VAR_4;

    VAR_9 = FUNC_4(VAR_3, VAR_8);
    if (VAR_9 < 0)
        return VAR_9;

    FUNC_1(VAR_8, VAR_7);

    VAR_9 = FUNC_3(VAR_8);
    if (VAR_9 < 0) {
        FUNC_2(VAR_8);
        return VAR_9;
    }

    *VAR_5 = 1;
    return 0;
}
