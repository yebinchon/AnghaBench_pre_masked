
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int error_code; int writer; TYPE_2__* custom_ptr; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_20__ {int mem; int size; int member_0; } ;
typedef TYPE_2__ WebPMemoryWriter ;
struct TYPE_23__ {TYPE_3__* priv_data; } ;
struct TYPE_22__ {int flags; int data; } ;
struct TYPE_21__ {int config; } ;
typedef TYPE_3__ LibWebPContext ;
typedef TYPE_4__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_5__*,int ,char*,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_3__*,int const*,int **,TYPE_1__**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_3, AVPacket *VAR_4,
                                const AVFrame *VAR_5, int *VAR_6)
{
    LibWebPContext *VAR_7 = VAR_3->priv_data;
    WebPPicture *VAR_8 = ((void*)0);
    AVFrame *VAR_9 = ((void*)0);
    WebPMemoryWriter VAR_10 = { 0 };

    int VAR_11 = FUNC_9(VAR_3, VAR_7, VAR_5, &VAR_9, &VAR_8);
    if (VAR_11 < 0)
        goto end;

    FUNC_2(&VAR_10);
    VAR_8->custom_ptr = &VAR_10;
    VAR_8->writer = VAR_2;

    VAR_11 = FUNC_0(&VAR_7->config, VAR_8);
    if (!VAR_11) {
        FUNC_6(VAR_3, VAR_0, "WebPEncode() failed with error: %d\n",
               VAR_8->error_code);
        VAR_11 = FUNC_8(VAR_8->error_code);
        goto end;
    }

    VAR_11 = FUNC_7(VAR_3, VAR_4, VAR_10.size, VAR_10.size);
    if (VAR_11 < 0)
        goto end;
    FUNC_11(VAR_4->data, VAR_10.mem, VAR_10.size);

    VAR_4->flags |= VAR_1;
    *VAR_6 = 1;

end:



    FUNC_10(VAR_10.mem);

    FUNC_3(VAR_8);
    FUNC_5(&VAR_8);
    FUNC_4(&VAR_9);

    return VAR_11;
}
