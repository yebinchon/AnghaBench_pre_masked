
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_sglist {int num_dma_sg; int num_sg; int scatterlist; } ;
struct ipr_ioa_cfg {TYPE_1__* host; struct ipr_sglist* ucode_sglist; scalar_t__ in_reset_reload; int reset_wait_q; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct ipr_ioa_cfg *VAR_3,
    struct ipr_sglist *VAR_4)
{
 unsigned long VAR_5;

 FUNC_3(VAR_3->host->host_lock, VAR_5);
 while(VAR_3->in_reset_reload) {
  FUNC_4(VAR_3->host->host_lock, VAR_5);
  FUNC_5(VAR_3->reset_wait_q, !VAR_3->in_reset_reload);
  FUNC_3(VAR_3->host->host_lock, VAR_5);
 }

 if (VAR_3->ucode_sglist) {
  FUNC_4(VAR_3->host->host_lock, VAR_5);
  FUNC_0(&VAR_3->pdev->dev,
   "Microcode download already in progress\n");
  return -VAR_1;
 }

 VAR_4->num_dma_sg = FUNC_2(VAR_3->pdev, VAR_4->scatterlist,
     VAR_4->num_sg, VAR_0);

 if (!VAR_4->num_dma_sg) {
  FUNC_4(VAR_3->host->host_lock, VAR_5);
  FUNC_0(&VAR_3->pdev->dev,
   "Failed to map microcode download buffer!\n");
  return -VAR_1;
 }

 VAR_3->ucode_sglist = VAR_4;
 FUNC_1(VAR_3, VAR_2);
 FUNC_4(VAR_3->host->host_lock, VAR_5);
 FUNC_5(VAR_3->reset_wait_q, !VAR_3->in_reset_reload);

 FUNC_3(VAR_3->host->host_lock, VAR_5);
 VAR_3->ucode_sglist = ((void*)0);
 FUNC_4(VAR_3->host->host_lock, VAR_5);
 return 0;
}
