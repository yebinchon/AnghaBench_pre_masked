
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_19__ {scalar_t__ eof_reached; } ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {scalar_t__ type; } ;
struct TYPE_16__ {TYPE_13__* fc; } ;
struct TYPE_15__ {unsigned int chunk_count; void** chunk_offsets; } ;
struct TYPE_14__ {int nb_streams; TYPE_4__** streams; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (TYPE_13__*,int ,char*) ;
 void** FUNC_4 (unsigned int,int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 void* FUNC_7 (TYPE_5__*) ;
 void* FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_9(MOVContext *VAR_4, AVIOContext *VAR_5, MOVAtom VAR_6)
{
    AVStream *VAR_7;
    MOVStreamContext *VAR_8;
    unsigned int VAR_9, VAR_10;

    if (VAR_4->fc->nb_streams < 1)
        return 0;
    VAR_7 = VAR_4->fc->streams[VAR_4->fc->nb_streams-1];
    VAR_8 = VAR_7->priv_data;

    FUNC_5(VAR_5);
    FUNC_6(VAR_5);

    VAR_10 = FUNC_7(VAR_5);

    if (!VAR_10)
        return 0;

    if (VAR_8->chunk_offsets)
        FUNC_3(VAR_4->fc, VAR_2, "Duplicated STCO atom\n");
    FUNC_2(VAR_8->chunk_offsets);
    VAR_8->chunk_count = 0;
    VAR_8->chunk_offsets = FUNC_4(VAR_10, sizeof(*VAR_8->chunk_offsets));
    if (!VAR_8->chunk_offsets)
        return FUNC_0(VAR_3);
    VAR_8->chunk_count = VAR_10;

    if (VAR_6.type == FUNC_1('s','t','c','o'))
        for (VAR_9 = 0; VAR_9 < VAR_10 && !VAR_5->eof_reached; VAR_9++)
            VAR_8->chunk_offsets[VAR_9] = FUNC_7(VAR_5);
    else if (VAR_6.type == FUNC_1('c','o','6','4'))
        for (VAR_9 = 0; VAR_9 < VAR_10 && !VAR_5->eof_reached; VAR_9++)
            VAR_8->chunk_offsets[VAR_9] = FUNC_8(VAR_5);
    else
        return VAR_1;

    VAR_8->chunk_count = VAR_9;

    if (VAR_5->eof_reached) {
        FUNC_3(VAR_4->fc, VAR_2, "reached eof, corrupted STCO atom\n");
        return VAR_0;
    }

    return 0;
}
