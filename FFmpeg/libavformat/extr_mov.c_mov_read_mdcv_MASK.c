
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
struct TYPE_13__ {int has_luminance; int has_primaries; void* min_luminance; void* max_luminance; void** white_point; void*** display_primaries; } ;
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
 int FUNC_1 (TYPE_8__*,int ,char*) ;
 void* FUNC_2 (int ,int const) ;
 TYPE_7__* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(MOVContext *VAR_3, AVIOContext *VAR_4, MOVAtom VAR_5)
{
    MOVStreamContext *VAR_6;
    const int VAR_7[3] = {1, 2, 0};
    const int VAR_8 = 50000;
    const int VAR_9 = 10000;
    int VAR_10;

    if (VAR_3->fc->nb_streams < 1)
        return VAR_0;

    VAR_6 = VAR_3->fc->streams[VAR_3->fc->nb_streams - 1]->priv_data;

    if (VAR_5.size < 24) {
        FUNC_1(VAR_3->fc, VAR_1, "Invalid Mastering Display Color Volume box\n");
        return VAR_0;
    }

    VAR_6->mastering = FUNC_3();
    if (!VAR_6->mastering)
        return FUNC_0(VAR_2);

    for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
        const int VAR_11 = VAR_7[VAR_10];
        VAR_6->mastering->display_primaries[VAR_11][0] = FUNC_2(FUNC_4(VAR_4), VAR_8);
        VAR_6->mastering->display_primaries[VAR_11][1] = FUNC_2(FUNC_4(VAR_4), VAR_8);
    }
    VAR_6->mastering->white_point[0] = FUNC_2(FUNC_4(VAR_4), VAR_8);
    VAR_6->mastering->white_point[1] = FUNC_2(FUNC_4(VAR_4), VAR_8);

    VAR_6->mastering->max_luminance = FUNC_2(FUNC_5(VAR_4), VAR_9);
    VAR_6->mastering->min_luminance = FUNC_2(FUNC_5(VAR_4), VAR_9);

    VAR_6->mastering->has_luminance = 1;
    VAR_6->mastering->has_primaries = 1;

    return 0;
}
