
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int version; int minor_version; int max_distance; int time_base_count; int header_count; int* header_len; int flags; int * header; TYPE_3__* frame_code; TYPE_2__* time_base; TYPE_1__* avf; } ;
struct TYPE_8__ {int pts_delta; int size_mul; int stream_id; int size_lsb; int header_idx; int flags; } ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_6__ {int nb_streams; } ;
typedef TYPE_4__ NUTContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(NUTContext *VAR_0, AVIOContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10;
    int64_t VAR_11;

    FUNC_1(VAR_1, VAR_0->version);
    if (VAR_0->version > 3)
        FUNC_1(VAR_1, VAR_0->minor_version = 1);
    FUNC_1(VAR_1, VAR_0->avf->nb_streams);
    FUNC_1(VAR_1, VAR_0->max_distance);
    FUNC_1(VAR_1, VAR_0->time_base_count);

    for (VAR_2 = 0; VAR_2 < VAR_0->time_base_count; VAR_2++) {
        FUNC_1(VAR_1, VAR_0->time_base[VAR_2].num);
        FUNC_1(VAR_1, VAR_0->time_base[VAR_2].den);
    }

    VAR_4 = 0;
    VAR_7 = 1;
    VAR_6 = 0;
    VAR_11 = 1 - (1LL << 62);
    VAR_10 = 0;
    for (VAR_2 = 0; VAR_2 < 256; ) {
        VAR_9 = 0;
        VAR_8 = 0;

        if (VAR_4 != VAR_0->frame_code[VAR_2].pts_delta ) VAR_9 = 1;
        if (VAR_7 != VAR_0->frame_code[VAR_2].size_mul ) VAR_9 = 2;
        if (VAR_6 != VAR_0->frame_code[VAR_2].stream_id ) VAR_9 = 3;
        if (VAR_8 != VAR_0->frame_code[VAR_2].size_lsb ) VAR_9 = 4;

        if (VAR_10 != VAR_0->frame_code[VAR_2].header_idx) VAR_9 = 8;

        VAR_4 = VAR_0->frame_code[VAR_2].pts_delta;
        VAR_5 = VAR_0->frame_code[VAR_2].flags;
        VAR_6 = VAR_0->frame_code[VAR_2].stream_id;
        VAR_7 = VAR_0->frame_code[VAR_2].size_mul;
        VAR_8 = VAR_0->frame_code[VAR_2].size_lsb;

        VAR_10 = VAR_0->frame_code[VAR_2].header_idx;

        for (VAR_3 = 0; VAR_2 < 256; VAR_3++, VAR_2++) {
            if (VAR_2 == 'N') {
                VAR_3--;
                continue;
            }
            if (VAR_0->frame_code[VAR_2].pts_delta != VAR_4 ||
                VAR_0->frame_code[VAR_2].flags != VAR_5 ||
                VAR_0->frame_code[VAR_2].stream_id != VAR_6 ||
                VAR_0->frame_code[VAR_2].size_mul != VAR_7 ||
                VAR_0->frame_code[VAR_2].size_lsb != VAR_8 + VAR_3 ||

                VAR_0->frame_code[VAR_2].header_idx != VAR_10)
                break;
        }
        if (VAR_3 != VAR_7 - VAR_8)
            VAR_9 = 6;

        FUNC_1(VAR_1, VAR_5);
        FUNC_1(VAR_1, VAR_9);
        if (VAR_9 > 0) FUNC_2(VAR_1, VAR_4);
        if (VAR_9 > 1) FUNC_1(VAR_1, VAR_7);
        if (VAR_9 > 2) FUNC_1(VAR_1, VAR_6);
        if (VAR_9 > 3) FUNC_1(VAR_1, VAR_8);
        if (VAR_9 > 4) FUNC_1(VAR_1, 0 );
        if (VAR_9 > 5) FUNC_1(VAR_1, VAR_3);
        if (VAR_9 > 6) FUNC_1(VAR_1, VAR_11);
        if (VAR_9 > 7) FUNC_1(VAR_1, VAR_10);
    }
    FUNC_1(VAR_1, VAR_0->header_count - 1);
    for (VAR_2 = 1; VAR_2 < VAR_0->header_count; VAR_2++) {
        FUNC_1(VAR_1, VAR_0->header_len[VAR_2]);
        FUNC_0(VAR_1, VAR_0->header[VAR_2], VAR_0->header_len[VAR_2]);
    }

    if (VAR_0->version > 3)
        FUNC_1(VAR_1, VAR_0->flags);
}
