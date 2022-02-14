
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_13__ {int has_primaries; int has_luminance; void* min_luminance; void* max_luminance; void** white_point; void*** display_primaries; } ;
struct TYPE_12__ {int size; } ;
struct TYPE_11__ {TYPE_8__* fc; } ;
struct TYPE_10__ {TYPE_7__* mastering; } ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef TYPE_4__ MOVAtom ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_8__*,int ,char*,...) ;
 void* FUNC_2 (int ,int) ;
 TYPE_7__* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(MOVContext *VAR_4, AVIOContext *VAR_5, MOVAtom VAR_6)
{
    MOVStreamContext *VAR_7;
    int VAR_8, VAR_9;

    if (VAR_4->fc->nb_streams < 1)
        return VAR_0;

    VAR_7 = VAR_4->fc->streams[VAR_4->fc->nb_streams - 1]->priv_data;

    if (VAR_6.size < 5) {
        FUNC_1(VAR_4->fc, VAR_1, "Empty Mastering Display Metadata box\n");
        return VAR_0;
    }

    VAR_9 = FUNC_4(VAR_5);
    if (VAR_9) {
        FUNC_1(VAR_4->fc, VAR_2, "Unsupported Mastering Display Metadata box version %d\n", VAR_9);
        return 0;
    }
    FUNC_7(VAR_5, 3);

    VAR_7->mastering = FUNC_3();
    if (!VAR_7->mastering)
        return FUNC_0(VAR_3);

    for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
        VAR_7->mastering->display_primaries[VAR_8][0] = FUNC_2(FUNC_5(VAR_5), 1 << 16);
        VAR_7->mastering->display_primaries[VAR_8][1] = FUNC_2(FUNC_5(VAR_5), 1 << 16);
    }
    VAR_7->mastering->white_point[0] = FUNC_2(FUNC_5(VAR_5), 1 << 16);
    VAR_7->mastering->white_point[1] = FUNC_2(FUNC_5(VAR_5), 1 << 16);

    VAR_7->mastering->max_luminance = FUNC_2(FUNC_6(VAR_5), 1 << 8);
    VAR_7->mastering->min_luminance = FUNC_2(FUNC_6(VAR_5), 1 << 14);

    VAR_7->mastering->has_primaries = 1;
    VAR_7->mastering->has_luminance = 1;

    return 0;
}
