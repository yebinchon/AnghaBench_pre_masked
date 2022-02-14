
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {TYPE_2__* priv_data; TYPE_3__** streams; } ;
struct TYPE_10__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_9__ {scalar_t__ curframe; scalar_t__ fcount; scalar_t__ frames_noted; } ;
struct TYPE_8__ {scalar_t__ timestamp; scalar_t__ pos; } ;
typedef TYPE_2__ MPCContext ;
typedef TYPE_3__ AVStream ;
typedef int AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    AVStream *VAR_5 = VAR_1->streams[VAR_2];
    MPCContext *VAR_6 = VAR_1->priv_data;
    AVPacket VAR_7, *VAR_8 = &VAR_7;
    int VAR_9;
    int VAR_10 = FUNC_1(VAR_5, FUNC_0(VAR_3 - VAR_0, 0), VAR_4);
    uint32_t VAR_11;


    if (VAR_10 >= 0 && VAR_5->index_entries[VAR_5->nb_index_entries-1].timestamp >= VAR_3 - VAR_0){
        VAR_6->curframe = VAR_5->index_entries[VAR_10].pos;
        return 0;
    }

    if(VAR_3 < 0 || VAR_3 >= VAR_6->fcount)
        return -1;
    VAR_3 -= VAR_0;


    VAR_11 = VAR_6->curframe;
    if(VAR_6->frames_noted) VAR_6->curframe = VAR_6->frames_noted - 1;
    while(VAR_6->curframe < VAR_3){
        VAR_9 = FUNC_3(VAR_1, VAR_8);
        if (VAR_9 < 0){
            VAR_6->curframe = VAR_11;
            return VAR_9;
        }
        FUNC_2(VAR_8);
    }
    return 0;
}
