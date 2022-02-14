
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dshow_ctx {int eof; int * event; int media_event; int mutex; int * curbufsize; TYPE_1__* pktl; } ;
struct TYPE_9__ {int flags; struct dshow_ctx* priv_data; } ;
struct TYPE_8__ {size_t stream_index; int size; } ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_2__ pkt; } ;
typedef TYPE_1__ AVPacketList ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    struct dshow_ctx *VAR_6 = VAR_4->priv_data;
    AVPacketList *VAR_7 = ((void*)0);

    while (!VAR_6->eof && !VAR_7) {
        FUNC_4(VAR_6->mutex, VAR_3);
        VAR_7 = VAR_6->pktl;
        if (VAR_7) {
            *VAR_5 = VAR_7->pkt;
            VAR_6->pktl = VAR_6->pktl->next;
            FUNC_5(VAR_7);
            VAR_6->curbufsize[VAR_5->stream_index] -= VAR_5->size;
        }
        FUNC_2(VAR_6->event[1]);
        FUNC_1(VAR_6->mutex);
        if (!VAR_7) {
            if (FUNC_6(VAR_6->media_event) < 0) {
                VAR_6->eof = 1;
            } else if (VAR_4->flags & VAR_0) {
                return FUNC_0(VAR_1);
            } else {
                FUNC_3(2, VAR_6->event, 0, VAR_3);
            }
        }
    }

    return VAR_6->eof ? FUNC_0(VAR_2) : VAR_5->size;
}
