
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct AVFormatContext {TYPE_3__* priv_data; } ;
struct TYPE_12__ {int pb; } ;
struct TYPE_9__ {int filename; } ;
struct TYPE_11__ {TYPE_4__* avf; TYPE_2__* segment_list_entries; TYPE_1__ cur_entry; int frames; int times; int format_options; int list_pb; scalar_t__ list; int write_header_trailer; } ;
struct TYPE_10__ {int filename; struct TYPE_10__* next; } ;
typedef TYPE_2__ SegmentListEntry ;
typedef TYPE_3__ SegmentContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct AVFormatContext*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct AVFormatContext*,int,int) ;

__attribute__((used)) static int FUNC_10(struct AVFormatContext *VAR_0)
{
    SegmentContext *VAR_1 = VAR_0->priv_data;
    AVFormatContext *VAR_2 = VAR_1->avf;
    SegmentListEntry *VAR_3, *VAR_4;
    int VAR_5 = 0;

    if (!VAR_2)
        goto fail;

    if (!VAR_1->write_header_trailer) {
        if ((VAR_5 = FUNC_9(VAR_0, 0, 1)) < 0)
            goto fail;
        if ((VAR_5 = FUNC_8(&VAR_2->pb)) < 0)
            goto fail;
        VAR_5 = FUNC_4(VAR_2);
        FUNC_6(&VAR_2->pb);
    } else {
        VAR_5 = FUNC_9(VAR_0, 1, 1);
    }
fail:
    if (VAR_1->list)
        FUNC_7(VAR_0, &VAR_1->list_pb);

    FUNC_0(&VAR_1->format_options);
    FUNC_3(VAR_1);
    FUNC_2(&VAR_1->times);
    FUNC_2(&VAR_1->frames);
    FUNC_2(&VAR_1->cur_entry.filename);

    VAR_3 = VAR_1->segment_list_entries;
    while (VAR_3) {
        VAR_4 = VAR_3->next;
        FUNC_2(&VAR_3->filename);
        FUNC_1(VAR_3);
        VAR_3 = VAR_4;
    }

    FUNC_5(VAR_2);
    VAR_1->avf = ((void*)0);
    return VAR_5;
}
