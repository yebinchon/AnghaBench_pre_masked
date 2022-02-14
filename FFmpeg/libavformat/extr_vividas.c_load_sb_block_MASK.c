
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int n_sb_entries; size_t current_sb; scalar_t__ current_sb_entry; TYPE_2__* sb_entries; TYPE_1__* sb_blocks; int * sb_pb; int * sb_buf; int sb_key; } ;
typedef TYPE_3__ VividasDemuxContext ;
struct TYPE_10__ {int pb; } ;
struct TYPE_8__ {int flag; int size; } ;
struct TYPE_7__ {int n_packets; } ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_0, VividasDemuxContext *VAR_1, unsigned VAR_2)
{
    uint32_t VAR_3 = 0;
    int VAR_4;
    AVIOContext *VAR_5 = 0;

    if (VAR_1->sb_pb) {
        FUNC_0(VAR_1->sb_pb);
        VAR_1->sb_pb = ((void*)0);
    }

    if (VAR_1->sb_buf)
        FUNC_0(VAR_1->sb_buf);

    VAR_1->sb_buf = FUNC_4(VAR_0->pb, &VAR_3, &VAR_1->sb_key, VAR_2);
    if (!VAR_1->sb_buf) {
        return;
    }

    VAR_5 = FUNC_1(VAR_1->sb_buf, VAR_3, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_5)
        return;

    VAR_1->sb_pb = VAR_5;

    FUNC_2(VAR_5);
    FUNC_2(VAR_5);
    FUNC_3(VAR_5);
    FUNC_2(VAR_5);
    FUNC_3(VAR_5);

    VAR_1->n_sb_entries = VAR_1->sb_blocks[VAR_1->current_sb].n_packets;

    for (VAR_4 = 0; VAR_4 < VAR_1->n_sb_entries; VAR_4++) {
        VAR_1->sb_entries[VAR_4].size = FUNC_3(VAR_5);
        VAR_1->sb_entries[VAR_4].flag = FUNC_2(VAR_5);
    }

    FUNC_3(VAR_5);
    FUNC_2(VAR_5);

    VAR_1->current_sb_entry = 0;
}
