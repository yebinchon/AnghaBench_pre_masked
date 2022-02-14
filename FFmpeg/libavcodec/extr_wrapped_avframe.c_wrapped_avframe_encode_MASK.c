
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size; int flags; int * data; int buf; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int ,int *,int ) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **) ;
 int * FUNC_6 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_5, AVPacket *VAR_6,
                     const AVFrame *VAR_7, int *VAR_8)
{
    AVFrame *VAR_9 = FUNC_2(VAR_7);
    uint8_t *VAR_10;
    int VAR_11 = sizeof(*VAR_9) + VAR_1;

    if (!VAR_9)
        return FUNC_0(VAR_3);

    VAR_10 = FUNC_6(VAR_11);
    if (!VAR_10) {
        FUNC_3(&VAR_9);
        return FUNC_0(VAR_3);
    }

    VAR_6->buf = FUNC_1(VAR_10, VAR_11,
                                VAR_4, ((void*)0),
                                VAR_0);
    if (!VAR_6->buf) {
        FUNC_3(&VAR_9);
        FUNC_5(&VAR_10);
        return FUNC_0(VAR_3);
    }

    FUNC_4((AVFrame*)VAR_10, VAR_9);
    FUNC_3(&VAR_9);

    VAR_6->data = VAR_10;
    VAR_6->size = sizeof(*VAR_9);

    VAR_6->flags |= VAR_2;
    *VAR_8 = 1;
    return 0;
}
