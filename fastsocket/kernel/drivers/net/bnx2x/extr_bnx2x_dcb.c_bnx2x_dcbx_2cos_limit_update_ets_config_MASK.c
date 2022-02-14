
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x_dcbx_pg_params {int num_of_cos; TYPE_2__* cos_params; } ;
struct TYPE_3__ {struct bnx2x_dcbx_pg_params ets; } ;
struct bnx2x {int link_params; TYPE_1__ dcbx_port_params; } ;
struct TYPE_4__ {scalar_t__ strict; scalar_t__ bw_tbl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_4)
{
 struct bnx2x_dcbx_pg_params *VAR_5 = &(VAR_4->dcbx_port_params.ets);
 int VAR_6 = 0;

 if (VAR_5->num_of_cos == 0 || VAR_5->num_of_cos > VAR_2) {
  FUNC_0("Illegal number of COSes %d\n", VAR_5->num_of_cos);
  return;
 }


 if (VAR_5->num_of_cos == 1)
  return;


 if (((VAR_1 == VAR_5->cos_params[0].strict) &&
      (VAR_3 == VAR_5->cos_params[0].bw_tbl)) ||
     ((VAR_1 == VAR_5->cos_params[1].strict) &&
      (VAR_3 == VAR_5->cos_params[1].bw_tbl))) {
  FUNC_0("all COS should have at least bw_limit or strict"
       "ets->cos_params[0].strict= %x"
       "ets->cos_params[0].bw_tbl= %x"
       "ets->cos_params[1].strict= %x"
       "ets->cos_params[1].bw_tbl= %x",
     VAR_5->cos_params[0].strict,
     VAR_5->cos_params[0].bw_tbl,
     VAR_5->cos_params[1].strict,
     VAR_5->cos_params[1].bw_tbl);
  return;
 }

 if ((VAR_3 != VAR_5->cos_params[0].bw_tbl) &&
     (VAR_3 != VAR_5->cos_params[1].bw_tbl)) {
  u32 VAR_7 = VAR_5->cos_params[0].bw_tbl;
  u32 VAR_8 = VAR_5->cos_params[1].bw_tbl;




  if (VAR_7 == 0) {
   VAR_7 = 1;
   VAR_8 = 99;
  } else if (VAR_8 == 0) {
   VAR_8 = 1;
   VAR_7 = 99;
  }

  FUNC_1(&VAR_4->link_params, VAR_7, VAR_8);
 } else {
  if (VAR_5->cos_params[0].strict == VAR_0)
   VAR_6 = FUNC_2(&VAR_4->link_params, 0);
  else if (VAR_5->cos_params[1].strict
     == VAR_0)
   VAR_6 = FUNC_2(&VAR_4->link_params, 1);
  if (VAR_6)
   FUNC_0("update_ets_params failed\n");
 }
}
