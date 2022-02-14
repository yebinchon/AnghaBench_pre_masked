
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int flags; scalar_t__ stream_index; int size; scalar_t__ pts; int data; scalar_t__ side_data_elems; } ;
struct TYPE_11__ {scalar_t__ stream_id; int size_mul; scalar_t__ pts_delta; int header_idx; int flags; } ;
struct TYPE_10__ {int version; int max_distance; int* header_len; int * header; } ;
struct TYPE_9__ {scalar_t__ last_pts; scalar_t__ max_pts_distance; } ;
typedef TYPE_1__ StreamContext ;
typedef TYPE_2__ NUTContext ;
typedef TYPE_3__ FrameCode ;
typedef TYPE_4__ AVPacket ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(NUTContext *VAR_9, StreamContext *VAR_10, FrameCode *VAR_11,
                            AVPacket *VAR_12)
{
    int VAR_13 = 0;

    if (VAR_12->flags & VAR_0)
        VAR_13 |= VAR_5;
    if (VAR_12->stream_index != VAR_11->stream_id)
        VAR_13 |= VAR_8;
    if (VAR_12->size / VAR_11->size_mul)
        VAR_13 |= VAR_6;
    if (VAR_12->pts - VAR_10->last_pts != VAR_11->pts_delta)
        VAR_13 |= VAR_3;
    if (VAR_12->side_data_elems && VAR_9->version > 3)
        VAR_13 |= VAR_7;
    if (VAR_12->size > 2 * VAR_9->max_distance)
        VAR_13 |= VAR_1;
    if (FUNC_0(VAR_12->pts - VAR_10->last_pts) > VAR_10->max_pts_distance)
        VAR_13 |= VAR_1;
    if (VAR_11->header_idx)
        if (VAR_12->size < VAR_9->header_len[VAR_11->header_idx] ||
            VAR_12->size > 4096 ||
            FUNC_1(VAR_12->data, VAR_9->header [VAR_11->header_idx],
                              VAR_9->header_len[VAR_11->header_idx]))
            VAR_13 |= VAR_4;

    return VAR_13 | (VAR_11->flags & VAR_2);
}
