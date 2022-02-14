
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* shift_lsbs; } ;
struct TYPE_10__ {int mc_coding; } ;
struct TYPE_11__ {scalar_t__ js_switch; TYPE_1__ sconf; int gb; } ;
typedef int GetBitContext ;
typedef TYPE_1__ ALSSpecificConfig ;
typedef TYPE_2__ ALSDecContext ;
typedef TYPE_3__ ALSBlockData ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(ALSDecContext *VAR_0, ALSBlockData *VAR_1)
{
    int VAR_2;
    GetBitContext *VAR_3 = &VAR_0->gb;
    ALSSpecificConfig *VAR_4 = &VAR_0->sconf;

    *VAR_1->shift_lsbs = 0;

    if (FUNC_1(VAR_3)) {
        VAR_2 = FUNC_3(VAR_0, VAR_1);
    } else {
        VAR_2 = FUNC_2(VAR_0, VAR_1);
    }

    if (!VAR_4->mc_coding || VAR_0->js_switch)
        FUNC_0(VAR_3);

    return VAR_2;
}
