
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* HEVClc; } ;
struct TYPE_7__ {int res_scale_val; } ;
struct TYPE_8__ {TYPE_1__ tu; } ;
typedef TYPE_2__ HEVCLocalContext ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(HEVCContext *VAR_0, int VAR_1) {
    HEVCLocalContext *VAR_2 = VAR_0->HEVClc;
    int VAR_3 = FUNC_0(VAR_0, VAR_1);

    if (VAR_3 != 0) {
        int VAR_4 = FUNC_1(VAR_0, VAR_1);
        VAR_2->tu.res_scale_val = (1 << (VAR_3 - 1)) *
                               (1 - 2 * VAR_4);
    } else {
        VAR_2->tu.res_scale_val = 0;
    }


    return 0;
}
