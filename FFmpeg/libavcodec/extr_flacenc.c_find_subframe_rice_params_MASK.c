
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {int coding_mode; } ;
struct TYPE_9__ {int lpc_coeff_precision; int exact_rice_parameters; int max_partition_order; int min_partition_order; } ;
struct TYPE_8__ {int blocksize; } ;
struct TYPE_11__ {TYPE_2__ options; TYPE_1__ frame; } ;
struct TYPE_10__ {int obits; scalar_t__ type; int residual; int rc_sums; int rc_udata; TYPE_7__ rc; } ;
typedef TYPE_3__ FlacSubframe ;
typedef TYPE_4__ FlacEncodeContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,int ,int,int,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static uint64_t FUNC_2(FlacEncodeContext *VAR_1,
                                          FlacSubframe *VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_1(VAR_1->options.min_partition_order,
                               VAR_1->frame.blocksize, VAR_3);
    int VAR_5 = FUNC_1(VAR_1->options.max_partition_order,
                               VAR_1->frame.blocksize, VAR_3);

    uint64_t VAR_6 = 8 + VAR_3 * VAR_2->obits + 2 + VAR_2->rc.coding_mode;
    if (VAR_2->type == VAR_0)
        VAR_6 += 4 + 5 + VAR_3 * VAR_1->options.lpc_coeff_precision;
    VAR_6 += FUNC_0(&VAR_2->rc, VAR_2->rc_udata, VAR_2->rc_sums, VAR_4, VAR_5, VAR_2->residual,
                             VAR_1->frame.blocksize, VAR_3, VAR_1->options.exact_rice_parameters);
    return VAR_6;
}
