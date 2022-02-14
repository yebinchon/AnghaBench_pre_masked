
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dshow_ctx {int audio_buffer_size; } ;
struct TYPE_9__ {int nAvgBytesPerSec; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_12__ {int member_0; int member_1; int member_2; int member_3; int cbBuffer; } ;
struct TYPE_11__ {struct TYPE_11__* pbFormat; int formattype; } ;
struct TYPE_10__ {struct dshow_ctx* priv_data; } ;
typedef int IPin ;
typedef int IAMStreamConfig ;
typedef int IAMBufferNegotiation ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AM_MEDIA_TYPE ;
typedef TYPE_4__ ALLOCATOR_PROPERTIES ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__**) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_8(AVFormatContext *VAR_5, IPin *VAR_6)
{
    struct dshow_ctx *VAR_7 = VAR_5->priv_data;
    IAMBufferNegotiation *VAR_8 = ((void*)0);
    ALLOCATOR_PROPERTIES VAR_9 = { -1, -1, -1, -1 };
    IAMStreamConfig *VAR_10 = ((void*)0);
    AM_MEDIA_TYPE *VAR_11 = ((void*)0);
    int VAR_12 = FUNC_0(VAR_0);

    if (FUNC_6(VAR_6, &VAR_3, (void **) &VAR_10) != VAR_4)
        goto end;
    if (FUNC_4(VAR_10, &VAR_11) != VAR_4)
        goto end;
    if (!FUNC_7(&VAR_11->formattype, &VAR_1))
        goto end;

    VAR_9.cbBuffer = (((WAVEFORMATEX *) VAR_11->pbFormat)->nAvgBytesPerSec)
                   * VAR_7->audio_buffer_size / 1000;

    if (FUNC_6(VAR_6, &VAR_2, (void **) &VAR_8) != VAR_4)
        goto end;
    if (FUNC_3(VAR_8, &VAR_9) != VAR_4)
        goto end;

    VAR_12 = 0;

end:
    if (VAR_8)
        FUNC_2(VAR_8);
    if (VAR_11) {
        if (VAR_11->pbFormat)
            FUNC_1(VAR_11->pbFormat);
        FUNC_1(VAR_11);
    }
    if (VAR_10)
        FUNC_5(VAR_10);

    return VAR_12;
}
