
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vpd_params {int uclk; int mem_timing; scalar_t__ mclk; } ;
struct TYPE_6__ {int max_pkt_size; } ;
struct TYPE_4__ {int nroutes; int nfilters; int nservers; } ;
struct TYPE_5__ {scalar_t__ rev; TYPE_3__ sge; int chan_map; int tp; TYPE_1__ mc5; struct vpd_params vpd; } ;
struct adapter {TYPE_2__ params; int mc5; int cm; int pmtx; int pmrx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct adapter*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int ) ;
 scalar_t__ FUNC_6 (struct adapter*,int,int ) ;
 int FUNC_7 (struct adapter*) ;
 scalar_t__ FUNC_8 (struct adapter*) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,int ) ;
 int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct adapter*,int *) ;
 scalar_t__ FUNC_13 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_14 (struct adapter*,int ) ;
 int FUNC_15 (struct adapter*,int ,int ,int) ;
 int FUNC_16 (struct adapter*,TYPE_3__*) ;
 int FUNC_17 (struct adapter*,int ,int) ;
 int FUNC_18 (struct adapter*,int ) ;
 int FUNC_19 (struct adapter*,int ,int) ;
 scalar_t__ FUNC_20 (struct adapter*,int *) ;
 int FUNC_21 (struct adapter*,int *) ;

int FUNC_22(struct adapter *VAR_18, u32 VAR_19)
{
 int VAR_20 = -VAR_9, VAR_21, VAR_22;
 const struct vpd_params *VAR_23 = &VAR_18->params.vpd;

 if (VAR_18->params.rev > 0)
  FUNC_4(VAR_18);
 else if (FUNC_3(VAR_18))
  goto out_err;

 if (VAR_23->mclk) {
  FUNC_12(VAR_18, &VAR_18->params.tp);

  if (FUNC_9(&VAR_18->pmrx, VAR_23->mclk, VAR_23->mem_timing) ||
      FUNC_9(&VAR_18->pmtx, VAR_23->mclk, VAR_23->mem_timing) ||
      FUNC_9(&VAR_18->cm, VAR_23->mclk, VAR_23->mem_timing) ||
      FUNC_13(&VAR_18->mc5, VAR_18->params.mc5.nservers,
    VAR_18->params.mc5.nfilters,
    VAR_18->params.mc5.nroutes))
   goto out_err;

  for (VAR_22 = 0; VAR_22 < 32; VAR_22++)
   if (FUNC_6(VAR_18, VAR_22, VAR_13))
    goto out_err;
 }

 if (FUNC_20(VAR_18, &VAR_18->params.tp))
  goto out_err;

 FUNC_17(VAR_18,
      FUNC_10(VAR_18->params.sge.max_pkt_size,
          VAR_16), 1);
 FUNC_18(VAR_18,
        FUNC_10(VAR_18->params.sge.max_pkt_size, 16384U));
 FUNC_21(VAR_18, &VAR_18->params.tp);

 if (FUNC_8(VAR_18))
  FUNC_7(VAR_18);
 else
  FUNC_15(VAR_18, VAR_2, 0,
     VAR_14 | VAR_12);

 if (VAR_18->params.rev == VAR_17)
  FUNC_15(VAR_18, VAR_8, 0,
     VAR_11);

 FUNC_19(VAR_18, VAR_4, 0xffffffff);
 FUNC_19(VAR_18, VAR_5, 0);
 FUNC_19(VAR_18, VAR_6, 0);
 FUNC_5(VAR_18, VAR_18->params.chan_map);
 FUNC_16(VAR_18, &VAR_18->params.sge);
 FUNC_15(VAR_18, VAR_3, 0, VAR_15);

 FUNC_19(VAR_18, VAR_7, FUNC_2(VAR_18));

 FUNC_19(VAR_18, VAR_1, VAR_23->uclk | VAR_19);
 FUNC_19(VAR_18, VAR_0,
       FUNC_1(VAR_10 >> 2));
 FUNC_14(VAR_18, VAR_0);

 VAR_21 = 100;
 do {
  FUNC_11(20);
 } while (FUNC_14(VAR_18, VAR_1) && --VAR_21);
 if (!VAR_21) {
  FUNC_0(VAR_18, "uP initialization timed out\n");
  goto out_err;
 }

 VAR_20 = 0;
out_err:
 return VAR_20;
}
