
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


struct TYPE_14__ {void* MaxFALL; void* MaxCLL; } ;
struct TYPE_13__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_12__ {int size; } ;
struct TYPE_11__ {TYPE_7__* fc; } ;
struct TYPE_10__ {TYPE_8__* coll; int coll_size; } ;
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
 TYPE_8__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_7__*,int ,char*,...) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(MOVContext *VAR_4, AVIOContext *VAR_5, MOVAtom VAR_6)
{
    MOVStreamContext *VAR_7;
    int VAR_8;

    if (VAR_4->fc->nb_streams < 1)
        return VAR_0;

    VAR_7 = VAR_4->fc->streams[VAR_4->fc->nb_streams - 1]->priv_data;

    if (VAR_6.size < 5) {
        FUNC_2(VAR_4->fc, VAR_1, "Empty Content Light Level box\n");
        return VAR_0;
    }

    VAR_8 = FUNC_3(VAR_5);
    if (VAR_8) {
        FUNC_2(VAR_4->fc, VAR_2, "Unsupported Content Light Level box version %d\n", VAR_8);
        return 0;
    }
    FUNC_5(VAR_5, 3);

    VAR_7->coll = FUNC_1(&VAR_7->coll_size);
    if (!VAR_7->coll)
        return FUNC_0(VAR_3);

    VAR_7->coll->MaxCLL = FUNC_4(VAR_5);
    VAR_7->coll->MaxFALL = FUNC_4(VAR_5);

    return 0;
}
