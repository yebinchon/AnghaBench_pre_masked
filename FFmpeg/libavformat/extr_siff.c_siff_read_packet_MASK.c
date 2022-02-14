
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int data; int stream_index; int duration; int size; int flags; } ;
struct TYPE_9__ {scalar_t__ cur_frame; scalar_t__ frames; int curstrm; unsigned int pktsize; int flags; int gmcsize; int gmc; int sndsize; int block_align; scalar_t__ has_video; } ;
typedef TYPE_1__ SIFFContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 unsigned int FUNC_5 (int ,int,unsigned int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int,int,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_7, AVPacket *VAR_8)
{
    SIFFContext *VAR_9 = VAR_7->priv_data;

    if (VAR_9->has_video) {
        unsigned int VAR_10;
        if (VAR_9->cur_frame >= VAR_9->frames)
            return VAR_0;
        if (VAR_9->curstrm == -1) {
            VAR_9->pktsize = FUNC_7(VAR_7->pb) - 4;
            VAR_9->flags = FUNC_6(VAR_7->pb);
            VAR_9->gmcsize = (VAR_9->flags & VAR_6) ? 4 : 0;
            if (VAR_9->gmcsize)
                FUNC_5(VAR_7->pb, VAR_9->gmc, VAR_9->gmcsize);
            VAR_9->sndsize = (VAR_9->flags & VAR_5) ? FUNC_7(VAR_7->pb) : 0;
            VAR_9->curstrm = !!(VAR_9->flags & VAR_5);
        }

        if (!VAR_9->curstrm) {
            if (VAR_9->pktsize < 2LL + VAR_9->sndsize + VAR_9->gmcsize)
                return VAR_1;

            VAR_10 = VAR_9->pktsize - VAR_9->sndsize - VAR_9->gmcsize - 2;
            VAR_10 = FUNC_8(VAR_7->pb, VAR_10);
            if (FUNC_3(VAR_8, VAR_10 + VAR_9->gmcsize + 2) < 0)
                return FUNC_0(VAR_4);
            FUNC_1(VAR_8->data, VAR_9->flags);
            if (VAR_9->gmcsize)
                FUNC_9(VAR_8->data + 2, VAR_9->gmc, VAR_9->gmcsize);
            if (FUNC_5(VAR_7->pb, VAR_8->data + 2 + VAR_9->gmcsize, VAR_10) != VAR_10) {
                FUNC_4(VAR_8);
                return VAR_1;
            }
            VAR_8->stream_index = 0;
            VAR_9->curstrm = -1;
        } else {
            int VAR_11 = FUNC_2(VAR_7->pb, VAR_8, VAR_9->sndsize - 4);
            if (VAR_11 < 0)
                return FUNC_0(VAR_3);
            VAR_8->stream_index = 1;
            VAR_8->duration = VAR_11;
            VAR_9->curstrm = 0;
        }
        if (!VAR_9->cur_frame || VAR_9->curstrm)
            VAR_8->flags |= VAR_2;
        if (VAR_9->curstrm == -1)
            VAR_9->cur_frame++;
    } else {
        int VAR_12 = FUNC_2(VAR_7->pb, VAR_8, VAR_9->block_align);
        if (!VAR_12)
            return VAR_0;
        if (VAR_12 <= 0)
            return FUNC_0(VAR_3);
        VAR_8->duration = VAR_12;
    }
    return VAR_8->size;
}
