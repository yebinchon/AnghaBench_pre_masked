
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sps; } ;
struct TYPE_9__ {int skip_flag; TYPE_3__* HEVClc; TYPE_2__ ps; } ;
struct TYPE_8__ {scalar_t__ ctb_up_flag; scalar_t__ ctb_left_flag; } ;
struct TYPE_6__ {int min_cb_width; int log2_ctb_size; } ;
typedef TYPE_4__ HEVCContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int) ;
 size_t VAR_0 ;
 int FUNC_2 (int,int ) ;
 scalar_t__* VAR_1 ;

int FUNC_3(HEVCContext *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7 = VAR_2->ps.sps->min_cb_width;
    int VAR_8 = 0;
    int VAR_9 = FUNC_2(VAR_3, VAR_2->ps.sps->log2_ctb_size);
    int VAR_10 = FUNC_2(VAR_4, VAR_2->ps.sps->log2_ctb_size);

    if (VAR_2->HEVClc->ctb_left_flag || VAR_9)
        VAR_8 = !!FUNC_1(VAR_2->skip_flag, VAR_5 - 1, VAR_6);
    if (VAR_2->HEVClc->ctb_up_flag || VAR_10)
        VAR_8 += !!FUNC_1(VAR_2->skip_flag, VAR_5, VAR_6 - 1);

    return FUNC_0(VAR_1[VAR_0] + VAR_8);
}
