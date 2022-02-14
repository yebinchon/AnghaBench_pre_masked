
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int int64_t ;
struct TYPE_23__ {int nb_streams; TYPE_2__** streams; TYPE_6__* priv_data; TYPE_4__* pb; } ;
struct TYPE_22__ {int riff_id; } ;
struct TYPE_21__ {scalar_t__ pos; char* tag; scalar_t__ flags; scalar_t__ len; } ;
struct TYPE_20__ {int seekable; } ;
struct TYPE_16__ {scalar_t__ entry; } ;
struct TYPE_19__ {scalar_t__ entry; TYPE_15__ indexes; } ;
struct TYPE_18__ {TYPE_1__* codecpar; TYPE_3__* priv_data; } ;
struct TYPE_17__ {int codec_type; } ;
typedef TYPE_3__ AVIStream ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVIIentry ;
typedef TYPE_6__ AVIContext ;
typedef TYPE_7__ AVFormatContext ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_15__*,scalar_t__) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,char*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_1)
{
    AVIOContext *VAR_2 = VAR_1->pb;
    AVIContext *VAR_3 = VAR_1->priv_data;
    int64_t VAR_4;
    int VAR_5;
    char VAR_6[5];

    if (VAR_2->seekable & VAR_0) {
        AVIStream *VAR_7;
        AVIIentry *VAR_8 = 0, *VAR_9;
        int VAR_10, VAR_11 = -1;

        VAR_4 = FUNC_5(VAR_2, "idx1");
        for (VAR_5 = 0; VAR_5 < VAR_1->nb_streams; VAR_5++) {
            VAR_7 = VAR_1->streams[VAR_5]->priv_data;
            VAR_7->entry = 0;
        }

        do {
            VAR_10 = 1;
            for (VAR_5 = 0; VAR_5 < VAR_1->nb_streams; VAR_5++) {
                VAR_7 = VAR_1->streams[VAR_5]->priv_data;
                if (VAR_7->indexes.entry <= VAR_7->entry)
                    continue;

                VAR_9 = FUNC_0(&VAR_7->indexes, VAR_7->entry);
                if (VAR_10 || VAR_9->pos < VAR_8->pos) {
                    VAR_8 = VAR_9;
                    VAR_11 = VAR_5;
                }
                VAR_10 = 0;
            }
            if (!VAR_10) {
                VAR_7 = VAR_1->streams[VAR_11]->priv_data;
                if (*VAR_8->tag)
                    FUNC_6(VAR_2, VAR_8->tag);
                else {
                    FUNC_1(VAR_6, VAR_11,
                                  VAR_1->streams[VAR_11]->codecpar->codec_type);
                    FUNC_6(VAR_2, VAR_6);
                }
                FUNC_3(VAR_2, VAR_8->flags);
                FUNC_3(VAR_2, VAR_8->pos);
                FUNC_3(VAR_2, VAR_8->len);
                VAR_7->entry++;
            }
        } while (!VAR_10);
        FUNC_4(VAR_2, VAR_4);

        FUNC_2(VAR_1, VAR_3->riff_id);
    }
    return 0;
}
