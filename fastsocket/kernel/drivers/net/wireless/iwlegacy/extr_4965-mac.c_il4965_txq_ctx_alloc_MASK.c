
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dma; } ;
struct TYPE_4__ {int max_txq_num; int scd_bc_tbls_size; } ;
struct il_priv {TYPE_2__ scd_bc_tbls; TYPE_2__ kw; TYPE_1__ hw_params; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct il_priv*,TYPE_2__*,int ) ;
 int FUNC_2 (struct il_priv*,TYPE_2__*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*,int ) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*,int) ;
 int FUNC_7 (struct il_priv*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int
FUNC_10(struct il_priv *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5;


 FUNC_3(VAR_2);

 VAR_3 =
     FUNC_1(VAR_2, &VAR_2->scd_bc_tbls,
     VAR_2->hw_params.scd_bc_tbls_size);
 if (VAR_3) {
  FUNC_0("Scheduler BC Table allocation failed\n");
  goto error_bc_tbls;
 }

 VAR_3 = FUNC_1(VAR_2, &VAR_2->kw, VAR_1);
 if (VAR_3) {
  FUNC_0("Keep Warm allocation failed\n");
  goto error_kw;
 }


 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  goto error;

 FUNC_8(&VAR_2->lock, VAR_5);


 FUNC_4(VAR_2, 0);


 FUNC_7(VAR_2, VAR_0, VAR_2->kw.dma >> 4);

 FUNC_9(&VAR_2->lock, VAR_5);


 for (VAR_4 = 0; VAR_4 < VAR_2->hw_params.max_txq_num; VAR_4++) {
  VAR_3 = FUNC_6(VAR_2, VAR_4);
  if (VAR_3) {
   FUNC_0("Tx %d queue init failed\n", VAR_4);
   goto error;
  }
 }

 return VAR_3;

error:
 FUNC_3(VAR_2);
 FUNC_2(VAR_2, &VAR_2->kw);
error_kw:
 FUNC_2(VAR_2, &VAR_2->scd_bc_tbls);
error_bc_tbls:
 return VAR_3;
}
