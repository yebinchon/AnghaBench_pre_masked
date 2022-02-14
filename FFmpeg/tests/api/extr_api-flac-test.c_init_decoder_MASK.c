
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_6__ {void* channel_layout; void* request_channel_layout; int request_sample_fmt; } ;
typedef TYPE_1__ AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_4(AVCodec *VAR_3, AVCodecContext **VAR_4,
                        int64_t VAR_5)
{
    AVCodecContext *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_2(VAR_3);
    if (!VAR_6) {
        FUNC_1(((void*)0), VAR_0 , "Can't allocate decoder context\n");
        return FUNC_0(VAR_2);
    }

    VAR_6->request_sample_fmt = VAR_1;

    VAR_6->request_channel_layout = VAR_5;
    VAR_6->channel_layout = VAR_5;

    VAR_7 = FUNC_3(VAR_6, VAR_3, ((void*)0));
    if (VAR_7 < 0) {
        FUNC_1(VAR_6, VAR_0, "Can't open decoder\n");
        return VAR_7;
    }

    *VAR_4 = VAR_6;
    return 0;
}
