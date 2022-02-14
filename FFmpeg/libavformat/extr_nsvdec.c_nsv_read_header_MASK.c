
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int nb_streams; TYPE_2__* priv_data; } ;
struct TYPE_11__ {scalar_t__ state; TYPE_1__* ahead; } ;
struct TYPE_10__ {int * data; } ;
typedef TYPE_2__ NSVContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_5)
{
    NSVContext *VAR_6 = VAR_5->priv_data;
    int VAR_7, VAR_8;

    VAR_6->state = VAR_4;
    VAR_6->ahead[0].data = VAR_6->ahead[1].data = ((void*)0);

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        if (FUNC_4(VAR_5) < 0)
            return -1;
        if (VAR_6->state == VAR_1) {
            VAR_8 = FUNC_1(VAR_5);
            if (VAR_8 < 0)
                return VAR_8;
        }

        if (VAR_6->state == VAR_2) {
            VAR_8 = FUNC_2(VAR_5);
            if (VAR_8 < 0)
                return VAR_8;
            break;
        }
    }
    if (VAR_5->nb_streams < 1)
        return -1;

    VAR_8 = FUNC_3(VAR_5, 1);

    FUNC_0(VAR_5, VAR_0, "parsed header\n");
    return VAR_8;
}
