
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_12__ {scalar_t__ eof_reached; } ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
struct TYPE_10__ {TYPE_8__* fc; } ;
struct TYPE_9__ {unsigned int stps_count; void** stps_data; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void**) ;
 int FUNC_2 (TYPE_8__*,int ,char*) ;
 void** FUNC_3 (unsigned int,int) ;
 void* FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(MOVContext *VAR_3, AVIOContext *VAR_4, MOVAtom VAR_5)
{
    AVStream *VAR_6;
    MOVStreamContext *VAR_7;
    unsigned VAR_8, VAR_9;

    if (VAR_3->fc->nb_streams < 1)
        return 0;
    VAR_6 = VAR_3->fc->streams[VAR_3->fc->nb_streams-1];
    VAR_7 = VAR_6->priv_data;

    FUNC_4(VAR_4);

    VAR_9 = FUNC_4(VAR_4);
    if (VAR_7->stps_data)
        FUNC_2(VAR_3->fc, VAR_1, "Duplicated STPS atom\n");
    FUNC_1(VAR_7->stps_data);
    VAR_7->stps_count = 0;
    VAR_7->stps_data = FUNC_3(VAR_9, sizeof(*VAR_7->stps_data));
    if (!VAR_7->stps_data)
        return FUNC_0(VAR_2);

    for (VAR_8 = 0; VAR_8 < VAR_9 && !VAR_4->eof_reached; VAR_8++) {
        VAR_7->stps_data[VAR_8] = FUNC_4(VAR_4);
    }

    VAR_7->stps_count = VAR_8;

    if (VAR_4->eof_reached) {
        FUNC_2(VAR_3->fc, VAR_1, "reached eof, corrupted STPS atom\n");
        return VAR_0;
    }

    return 0;
}
