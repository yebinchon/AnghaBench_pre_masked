
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct dshow_ctx {int* curbufsize; int mutex; int * event; TYPE_1__* pktl; } ;
typedef int int64_t ;
typedef enum dshowDeviceType { ____Placeholder_dshowDeviceType } dshowDeviceType ;
struct TYPE_9__ {int stream_index; int data; int pts; } ;
struct TYPE_8__ {struct dshow_ctx* priv_data; } ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_4__ pkt; } ;
typedef TYPE_1__ AVPacketList ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (int ,int *,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1, int VAR_2, uint8_t *VAR_3, int VAR_4, int64_t VAR_5, enum dshowDeviceType VAR_6)
{
    AVFormatContext *VAR_7 = VAR_1;
    struct dshow_ctx *VAR_8 = VAR_7->priv_data;
    AVPacketList **VAR_9, *VAR_10;



    FUNC_2(VAR_8->mutex, VAR_0);

    if(FUNC_7(VAR_7, VAR_2, VAR_6))
        goto fail;

    VAR_10 = FUNC_4(sizeof(AVPacketList));
    if(!VAR_10)
        goto fail;

    if(FUNC_5(&VAR_10->pkt, VAR_4) < 0) {
        FUNC_3(VAR_10);
        goto fail;
    }

    VAR_10->pkt.stream_index = VAR_2;
    VAR_10->pkt.pts = VAR_5;
    FUNC_6(VAR_10->pkt.data, VAR_3, VAR_4);

    for(VAR_9 = &VAR_8->pktl ; *VAR_9 ; VAR_9 = &(*VAR_9)->next);
    *VAR_9 = VAR_10;
    VAR_8->curbufsize[VAR_2] += VAR_4;

    FUNC_1(VAR_8->event[1]);
    FUNC_0(VAR_8->mutex);

    return;
fail:
    FUNC_0(VAR_8->mutex);
    return;
}
