
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int pb; int * streams; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int* data; int pts; int size; scalar_t__ stream_index; } ;
struct TYPE_10__ {int curframe; int fcount; int lastframe; int curbits; int frames_noted; TYPE_1__* frames; } ;
struct TYPE_9__ {int pos; int skip; int size; } ;
typedef TYPE_2__ MPCContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int,int,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    MPCContext *VAR_7 = VAR_5->priv_data;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = VAR_7->curframe;
    unsigned VAR_13;
    int64_t VAR_14;

    if (VAR_7->curframe >= VAR_7->fcount && VAR_7->fcount)
        return VAR_0;

    if(VAR_7->curframe != VAR_7->lastframe + 1){
        FUNC_6(VAR_5->pb, VAR_7->frames[VAR_7->curframe].pos, VAR_4);
        VAR_7->curbits = VAR_7->frames[VAR_7->curframe].skip;
    }
    VAR_7->lastframe = VAR_7->curframe;
    VAR_7->curframe++;
    VAR_11 = VAR_7->curbits;
    VAR_14 = FUNC_7(VAR_5->pb);
    VAR_13 = FUNC_5(VAR_5->pb);
    if(VAR_11 <= 12){
        VAR_10 = (VAR_13 >> (12 - VAR_11)) & 0xFFFFF;
    }else{
        VAR_10 = (VAR_13 << (VAR_11 - 12) | FUNC_5(VAR_5->pb) >> (44 - VAR_11)) & 0xFFFFF;
    }
    VAR_11 += 20;
    FUNC_6(VAR_5->pb, VAR_14, VAR_4);

    VAR_9 = ((VAR_10 + VAR_11 + 31) & ~31) >> 3;
    if(VAR_12 == VAR_7->frames_noted && VAR_7->fcount){
        VAR_7->frames[VAR_12].pos = VAR_14;
        VAR_7->frames[VAR_12].size = VAR_9;
        VAR_7->frames[VAR_12].skip = VAR_11 - 20;
        FUNC_1(VAR_5->streams[0], VAR_12, VAR_12, VAR_9, 0, VAR_1);
        VAR_7->frames_noted++;
    }
    VAR_7->curbits = (VAR_11 + VAR_10) & 0x1F;

    if ((VAR_8 = FUNC_2(VAR_6, VAR_9 + 4)) < 0)
        return VAR_8;

    VAR_6->data[0] = VAR_11;
    VAR_6->data[1] = (VAR_7->curframe > VAR_7->fcount) && VAR_7->fcount;
    VAR_6->data[2] = 0;
    VAR_6->data[3] = 0;

    VAR_6->stream_index = 0;
    VAR_6->pts = VAR_12;
    VAR_8 = FUNC_4(VAR_5->pb, VAR_6->data + 4, VAR_9);
    if(VAR_7->curbits)
        FUNC_6(VAR_5->pb, -4, VAR_3);
    if(VAR_8 < VAR_9){
        FUNC_3(VAR_6);
        return VAR_8 < 0 ? VAR_8 : FUNC_0(VAR_2);
    }
    VAR_6->size = VAR_8 + 4;

    return 0;
}
