
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int nb_streams; TYPE_4__** streams; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int size; } ;
struct TYPE_9__ {TYPE_7__* fc; } ;
struct TYPE_8__ {int color_primaries; int color_trc; int color_space; int color_range; } ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,int ,char*,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(MOVContext *VAR_8, AVIOContext *VAR_9, MOVAtom VAR_10)
{
    AVStream *VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

    if (VAR_8->fc->nb_streams < 1)
        return 0;
    VAR_11 = VAR_8->fc->streams[VAR_8->fc->nb_streams - 1];

    if (VAR_10.size < 5) {
        FUNC_3(VAR_8->fc, VAR_6, "Empty VP Codec Configuration box\n");
        return VAR_5;
    }

    VAR_12 = FUNC_4(VAR_9);
    if (VAR_12 != 1) {
        FUNC_3(VAR_8->fc, VAR_7, "Unsupported VP Codec Configuration box version %d\n", VAR_12);
        return 0;
    }
    FUNC_6(VAR_9, 3);

    FUNC_6(VAR_9, 2);
    VAR_13 = FUNC_4(VAR_9);
    VAR_14 = FUNC_4(VAR_9);
    VAR_15 = FUNC_4(VAR_9);
    VAR_16 = FUNC_4(VAR_9);
    if (FUNC_5(VAR_9))
        return VAR_5;

    if (!FUNC_0(VAR_14))
        VAR_14 = VAR_0;
    if (!FUNC_2(VAR_15))
        VAR_15 = VAR_4;
    if (!FUNC_1(VAR_16))
        VAR_16 = VAR_3;

    VAR_11->codecpar->color_range = (VAR_13 & 1) ? VAR_1 : VAR_2;
    VAR_11->codecpar->color_primaries = VAR_14;
    VAR_11->codecpar->color_trc = VAR_15;
    VAR_11->codecpar->color_space = VAR_16;

    return 0;
}
