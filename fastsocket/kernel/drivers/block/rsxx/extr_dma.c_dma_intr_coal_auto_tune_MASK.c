
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ mode; int latency; } ;
struct TYPE_9__ {TYPE_3__ intr_coal; } ;
struct TYPE_10__ {TYPE_4__ data; } ;
struct rsxx_cardinfo {int n_targets; scalar_t__ regmap; TYPE_5__ config; TYPE_2__* ctrl; int eeh_state; } ;
struct TYPE_6__ {int hw_q_depth; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rsxx_cardinfo *VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5;

 if (VAR_2->config.data.intr_coal.mode != VAR_1 ||
     FUNC_3(VAR_2->eeh_state))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->n_targets; VAR_3++)
  VAR_4 += FUNC_0(&VAR_2->ctrl[VAR_3].stats.hw_q_depth);

 VAR_5 = FUNC_1(VAR_2->config.data.intr_coal.mode,
          VAR_4 / 2,
          VAR_2->config.data.intr_coal.latency);
 FUNC_2(VAR_5, VAR_2->regmap + VAR_0);
}
