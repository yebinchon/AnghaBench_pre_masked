
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int skip_frame; int codec; int codec_id; } ;
struct TYPE_10__ {scalar_t__ size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int *,int*,TYPE_1__*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int const*,int *) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_2, AVPacket *VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    int VAR_6 = 0;
    AVFrame *VAR_7 = ((void*)0);
    int VAR_8 = VAR_2->skip_frame;

    if (!FUNC_6(VAR_2)) {
        const AVCodec *VAR_9 = FUNC_5(VAR_2->codec_id);

        VAR_5 = FUNC_7(VAR_2, VAR_9, ((void*)0));
        if (VAR_5 < 0) {
            FUNC_3(VAR_2, VAR_1, "Failed to open codec\n");
            goto end;
        }
    }

    VAR_7 = FUNC_1();
    if (!VAR_7) {
        FUNC_3(((void*)0), VAR_1, "Failed to allocate frame\n");
        goto end;
    }

    if (!VAR_4 && FUNC_8(VAR_2->codec)) {
        VAR_2->skip_frame = VAR_0;
    }

    do {
        VAR_5 = FUNC_4(VAR_2, VAR_7, &VAR_6, VAR_3);
        FUNC_0(VAR_4 || (!VAR_4 && !VAR_6));
        if (VAR_5 < 0)
            break;
        VAR_3->data += VAR_5;
        VAR_3->size -= VAR_5;

        if (VAR_6) {
            break;
        }
    } while (VAR_3->size > 0);

end:
    VAR_2->skip_frame = VAR_8;

    FUNC_2(&VAR_7);
    return VAR_5;
}
