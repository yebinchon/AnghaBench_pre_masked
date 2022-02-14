
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int draining; } ;
typedef TYPE_1__ V4L2m2mContext ;
struct TYPE_13__ {int name; } ;
typedef TYPE_2__ V4L2Context ;
typedef int V4L2Buffer ;
struct TYPE_14__ {int size; } ;
typedef TYPE_3__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__ const*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(V4L2Context* VAR_2, const AVPacket* VAR_3)
{
    V4L2m2mContext *VAR_4 = FUNC_2(VAR_2);
    V4L2Buffer* VAR_5;
    int VAR_6;

    if (!VAR_3->size) {
        VAR_6 = FUNC_7(VAR_2);
        if (VAR_6)
            FUNC_1(FUNC_5(VAR_2), VAR_0, "%s stop_decode\n", VAR_2->name);
        VAR_4->draining = 1;
        return 0;
    }

    VAR_5 = FUNC_6(VAR_2);
    if (!VAR_5)
        return FUNC_0(VAR_1);

    VAR_6 = FUNC_3(VAR_3, VAR_5);
    if (VAR_6)
        return VAR_6;

    return FUNC_4(VAR_5);
}
