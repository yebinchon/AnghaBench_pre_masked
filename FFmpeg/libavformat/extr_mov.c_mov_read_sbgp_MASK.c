
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_19__ {scalar_t__ eof_reached; } ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {TYPE_12__* fc; } ;
struct TYPE_16__ {unsigned int rap_group_count; TYPE_11__* rap_group; } ;
struct TYPE_15__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_14__ {void* index; void* count; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (TYPE_12__*,int ,char*) ;
 TYPE_11__* FUNC_4 (unsigned int,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 void* FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(MOVContext *VAR_3, AVIOContext *VAR_4, MOVAtom VAR_5)
{
    AVStream *VAR_6;
    MOVStreamContext *VAR_7;
    unsigned int VAR_8, VAR_9;
    uint8_t VAR_10;
    uint32_t VAR_11;

    if (VAR_3->fc->nb_streams < 1)
        return 0;
    VAR_6 = VAR_3->fc->streams[VAR_3->fc->nb_streams-1];
    VAR_7 = VAR_6->priv_data;

    VAR_10 = FUNC_5(VAR_4);
    FUNC_6(VAR_4);
    VAR_11 = FUNC_8(VAR_4);
    if (VAR_11 != FUNC_1( 'r','a','p',' '))
        return 0;
    if (VAR_10 == 1)
        FUNC_7(VAR_4);

    VAR_9 = FUNC_7(VAR_4);
    if (!VAR_9)
        return 0;
    if (VAR_7->rap_group)
        FUNC_3(VAR_3->fc, VAR_1, "Duplicated SBGP atom\n");
    FUNC_2(VAR_7->rap_group);
    VAR_7->rap_group_count = 0;
    VAR_7->rap_group = FUNC_4(VAR_9, sizeof(*VAR_7->rap_group));
    if (!VAR_7->rap_group)
        return FUNC_0(VAR_2);

    for (VAR_8 = 0; VAR_8 < VAR_9 && !VAR_4->eof_reached; VAR_8++) {
        VAR_7->rap_group[VAR_8].count = FUNC_7(VAR_4);
        VAR_7->rap_group[VAR_8].index = FUNC_7(VAR_4);
    }

    VAR_7->rap_group_count = VAR_8;

    if (VAR_4->eof_reached) {
        FUNC_3(VAR_3->fc, VAR_1, "reached eof, corrupted SBGP atom\n");
        return VAR_0;
    }

    return 0;
}
