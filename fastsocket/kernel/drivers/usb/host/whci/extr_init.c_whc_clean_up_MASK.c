
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct whc {int n_devices; scalar_t__ workqueue; scalar_t__ base_phys; scalar_t__ base; TYPE_2__* umc; scalar_t__ qset_pool; int gen_cmd_buf_dma; scalar_t__ gen_cmd_buf; int dn_buf_dma; scalar_t__ dn_buf; int di_buf_dma; scalar_t__ di_buf; } ;
struct dn_buf_entry {int dummy; } ;
struct di_buf_entry {int dummy; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_4__ {TYPE_1__ resource; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct whc*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct whc*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

void FUNC_7(struct whc *VAR_2)
{
 resource_size_t VAR_3;

 if (VAR_2->di_buf)
  FUNC_2(&VAR_2->umc->dev, sizeof(struct di_buf_entry) * VAR_2->n_devices,
      VAR_2->di_buf, VAR_2->di_buf_dma);
 if (VAR_2->dn_buf)
  FUNC_2(&VAR_2->umc->dev, sizeof(struct dn_buf_entry) * VAR_1,
      VAR_2->dn_buf, VAR_2->dn_buf_dma);
 if (VAR_2->gen_cmd_buf)
  FUNC_2(&VAR_2->umc->dev, VAR_0,
      VAR_2->gen_cmd_buf, VAR_2->gen_cmd_buf_dma);

 FUNC_5(VAR_2);
 FUNC_0(VAR_2);

 if (VAR_2->qset_pool)
  FUNC_3(VAR_2->qset_pool);

 VAR_3 = VAR_2->umc->resource.end - VAR_2->umc->resource.start + 1;
 if (VAR_2->base)
  FUNC_4(VAR_2->base);
 if (VAR_2->base_phys)
  FUNC_6(VAR_2->base_phys, VAR_3);

 if (VAR_2->workqueue)
  FUNC_1(VAR_2->workqueue);
}
