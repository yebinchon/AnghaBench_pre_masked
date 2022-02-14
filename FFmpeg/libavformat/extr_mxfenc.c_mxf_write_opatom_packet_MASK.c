
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_15__ {int size; int data; } ;
struct TYPE_14__ {int header_written; size_t edit_units_count; int body_offset; TYPE_1__* index_entries; int edit_unit_byte_count; } ;
struct TYPE_13__ {int temporal_ref; int flags; } ;
struct TYPE_12__ {int temporal_ref; int flags; int offset; } ;
typedef TYPE_2__ MXFIndexEntry ;
typedef TYPE_3__ MXFContext ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVPacket *VAR_2, MXFIndexEntry *VAR_3)
{
    MXFContext *VAR_4 = VAR_1->priv_data;
    AVIOContext *VAR_5 = VAR_1->pb;

    int VAR_6;

    if (!VAR_4->header_written) {
        if ((VAR_6 = FUNC_4(VAR_1, 0, 0, VAR_0, 1)) < 0)
            return VAR_6;
        FUNC_2(VAR_1);

        if ((VAR_6 = FUNC_3(VAR_1)) < 0)
            return VAR_6;
        VAR_4->header_written = 1;
    }

    if (!VAR_4->edit_unit_byte_count) {
        VAR_4->index_entries[VAR_4->edit_units_count].offset = VAR_4->body_offset;
        VAR_4->index_entries[VAR_4->edit_units_count].flags = VAR_3->flags;
        VAR_4->index_entries[VAR_4->edit_units_count].temporal_ref = VAR_3->temporal_ref;
    }
    VAR_4->edit_units_count++;
    FUNC_1(VAR_5, VAR_2->data, VAR_2->size);
    VAR_4->body_offset += VAR_2->size;
    FUNC_0(VAR_5);

    return 0;
}
