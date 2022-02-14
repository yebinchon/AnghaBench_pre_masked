
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_18__ {int nb_items; TYPE_4__* item; int allocated_size; } ;
struct TYPE_17__ {TYPE_7__ frag_index; TYPE_2__* fc; } ;
struct TYPE_16__ {scalar_t__ moof_offset; int nb_stream_info; TYPE_3__* stream_info; scalar_t__ current; scalar_t__ headers_read; } ;
struct TYPE_15__ {scalar_t__ id; int index_entry; int * encryption_index; void* first_tfra_pts; void* tfdt_dts; void* sidx_pts; } ;
struct TYPE_14__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_13__ {scalar_t__ id; } ;
typedef TYPE_3__ MOVFragmentStreamInfo ;
typedef TYPE_4__ MOVFragmentIndexItem ;
typedef TYPE_5__ MOVContext ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_4__*,int *,int) ;
 TYPE_3__* FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_7__*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(MOVContext *VAR_2, int64_t VAR_3)
{
    int VAR_4, VAR_5;
    MOVFragmentIndexItem * VAR_6;
    MOVFragmentStreamInfo * VAR_7;


    VAR_4 = FUNC_3(&VAR_2->frag_index, VAR_3);
    if (VAR_4 < VAR_2->frag_index.nb_items &&
        VAR_2->frag_index.item[VAR_4].moof_offset == VAR_3)
        return VAR_4;



    VAR_6 = FUNC_0(VAR_2->frag_index.item,
                           &VAR_2->frag_index.allocated_size,
                           (VAR_2->frag_index.nb_items + 1) *
                           sizeof(*VAR_2->frag_index.item));
    if(!VAR_6)
        return -1;
    VAR_2->frag_index.item = VAR_6;

    VAR_7 = FUNC_1(((void*)0), VAR_2->fc->nb_streams,
                                        sizeof(*VAR_6->stream_info));
    if (!VAR_7)
        return -1;

    for (VAR_5 = 0; VAR_5 < VAR_2->fc->nb_streams; VAR_5++) {

        if (VAR_2->fc->streams[VAR_5]->id < 0)
            return VAR_0;

        VAR_7[VAR_5].id = VAR_2->fc->streams[VAR_5]->id;
        VAR_7[VAR_5].sidx_pts = VAR_1;
        VAR_7[VAR_5].tfdt_dts = VAR_1;
        VAR_7[VAR_5].first_tfra_pts = VAR_1;
        VAR_7[VAR_5].index_entry = -1;
        VAR_7[VAR_5].encryption_index = ((void*)0);
    }

    if (VAR_4 < VAR_2->frag_index.nb_items)
        FUNC_2(VAR_2->frag_index.item + VAR_4 + 1, VAR_2->frag_index.item + VAR_4,
                (VAR_2->frag_index.nb_items - VAR_4) * sizeof(*VAR_2->frag_index.item));

    VAR_6 = &VAR_2->frag_index.item[VAR_4];
    VAR_6->headers_read = 0;
    VAR_6->current = 0;
    VAR_6->nb_stream_info = VAR_2->fc->nb_streams;
    VAR_6->moof_offset = VAR_3;
    VAR_6->stream_info = VAR_7;
    VAR_2->frag_index.nb_items++;

    return VAR_4;
}
