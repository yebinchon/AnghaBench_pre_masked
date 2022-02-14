
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_14__ {int nb_streams; TYPE_5__** streams; } ;
struct TYPE_13__ {scalar_t__ id; TYPE_1__* priv_data; } ;
struct TYPE_11__ {scalar_t__ track_id; int stsd_id; } ;
struct TYPE_12__ {int frag_index; TYPE_8__* fc; TYPE_3__ fragment; } ;
struct TYPE_10__ {void* tfdt_dts; } ;
struct TYPE_9__ {int pseudo_stream_id; void* track_end; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVFragmentStreamInfo ;
typedef TYPE_3__ MOVFragment ;
typedef TYPE_4__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,int ,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    MOVFragment *VAR_4 = &VAR_1->fragment;
    AVStream *VAR_5 = ((void*)0);
    MOVStreamContext *VAR_6;
    int VAR_7, VAR_8;
    MOVFragmentStreamInfo * VAR_9;
    int64_t VAR_10;

    for (VAR_8 = 0; VAR_8 < VAR_1->fc->nb_streams; VAR_8++) {
        if (VAR_1->fc->streams[VAR_8]->id == VAR_4->track_id) {
            VAR_5 = VAR_1->fc->streams[VAR_8];
            break;
        }
    }
    if (!VAR_5) {
        FUNC_0(VAR_1->fc, VAR_0, "could not find corresponding track id %u\n", VAR_4->track_id);
        return 0;
    }
    VAR_6 = VAR_5->priv_data;
    if (VAR_6->pseudo_stream_id + 1 != VAR_4->stsd_id && VAR_6->pseudo_stream_id != -1)
        return 0;
    VAR_7 = FUNC_1(VAR_2);
    FUNC_2(VAR_2);
    if (VAR_7) {
        VAR_10 = FUNC_4(VAR_2);
    } else {
        VAR_10 = FUNC_3(VAR_2);
    }

    VAR_9 = FUNC_5(&VAR_1->frag_index);
    if (VAR_9)
        VAR_9->tfdt_dts = VAR_10;
    VAR_6->track_end = VAR_10;

    return 0;
}
