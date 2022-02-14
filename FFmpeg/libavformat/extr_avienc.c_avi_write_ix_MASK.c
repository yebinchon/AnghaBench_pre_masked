
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_26__ {int nb_streams; TYPE_2__** streams; TYPE_6__* priv_data; TYPE_4__* pb; } ;
struct TYPE_25__ {int riff_id; int master_index_max_size; int movi_list; } ;
struct TYPE_24__ {int pos; int flags; scalar_t__ len; } ;
struct TYPE_23__ {int seekable; } ;
struct TYPE_19__ {int master_odml_riff_id_base; int entry; } ;
struct TYPE_22__ {TYPE_18__ indexes; } ;
struct TYPE_21__ {TYPE_1__* codecpar; TYPE_3__* priv_data; } ;
struct TYPE_20__ {int codec_type; } ;
typedef TYPE_3__ AVIStream ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVIIentry ;
typedef TYPE_6__ AVIContext ;
typedef TYPE_7__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (TYPE_18__*,int) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_7__*,int,int,int) ;
 int FUNC_11 (TYPE_7__*,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_3)
{
    AVIOContext *VAR_4 = VAR_3->pb;
    AVIContext *VAR_5 = VAR_3->priv_data;
    char VAR_6[5];
    char VAR_7[] = "ix00";
    int VAR_8, VAR_9;

    FUNC_0(VAR_4->seekable & VAR_0);

    for (VAR_8 = 0; VAR_8 < VAR_3->nb_streams; VAR_8++) {
        AVIStream *VAR_10 = VAR_3->streams[VAR_8]->priv_data;
        if (VAR_5->riff_id - VAR_10->indexes.master_odml_riff_id_base == VAR_5->master_index_max_size) {
            int64_t VAR_11;
            int VAR_12 = VAR_2 + VAR_1 * VAR_5->master_index_max_size;

            VAR_11 = FUNC_4(VAR_4);
            FUNC_10(VAR_3, VAR_8, VAR_11, VAR_12);
            FUNC_11(VAR_3, VAR_8);
            FUNC_1(FUNC_4(VAR_4) - VAR_11 == VAR_12);
            VAR_10->indexes.master_odml_riff_id_base = VAR_5->riff_id - 1;
        }
        FUNC_0(VAR_5->riff_id - VAR_10->indexes.master_odml_riff_id_base < VAR_5->master_index_max_size);
    }

    for (VAR_8 = 0; VAR_8 < VAR_3->nb_streams; VAR_8++) {
        AVIStream *VAR_13 = VAR_3->streams[VAR_8]->priv_data;
        int64_t VAR_14;

        FUNC_3(VAR_6, VAR_8, VAR_3->streams[VAR_8]->codecpar->codec_type);
        VAR_7[3] = '0' + VAR_8;


        VAR_14 = FUNC_4(VAR_4);
        FUNC_9(VAR_4, VAR_7);
        FUNC_7(VAR_4, VAR_13->indexes.entry * 8 + 24);

        FUNC_6(VAR_4, 2);
        FUNC_5(VAR_4, 0);
        FUNC_5(VAR_4, 1);
        FUNC_7(VAR_4, VAR_13->indexes.entry);

        FUNC_9(VAR_4, VAR_6);
        FUNC_8(VAR_4, VAR_5->movi_list);
        FUNC_7(VAR_4, 0);

        for (VAR_9 = 0; VAR_9 < VAR_13->indexes.entry; VAR_9++) {
            AVIIentry *VAR_15 = FUNC_2(&VAR_13->indexes, VAR_9);
            FUNC_7(VAR_4, VAR_15->pos + 8);
            FUNC_7(VAR_4, ((uint32_t) VAR_15->len & ~0x80000000) |
                          (VAR_15->flags & 0x10 ? 0 : 0x80000000));
        }

        FUNC_10(VAR_3, VAR_8, VAR_14, FUNC_4(VAR_4) - VAR_14);
    }
    return 0;
}
