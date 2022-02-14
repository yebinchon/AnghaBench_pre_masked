
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_device {int * resource; } ;
struct lance_private {int init_block_dvma; scalar_t__ init_block_mem; TYPE_2__* op; scalar_t__ init_block_iomem; TYPE_1__* lebuffer; scalar_t__ dregs; struct of_device* ledma; scalar_t__ lregs; } ;
struct lance_init_block {int dummy; } ;
struct TYPE_4__ {int dev; int * resource; } ;
struct TYPE_3__ {int * resource; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct lance_private *VAR_1)
{
 if (VAR_1->lregs)
  FUNC_1(&VAR_1->op->resource[0], VAR_1->lregs, VAR_0);
 if (VAR_1->dregs) {
  struct of_device *VAR_2 = VAR_1->ledma;

  FUNC_1(&VAR_2->resource[0], VAR_1->dregs,
      FUNC_2(&VAR_2->resource[0]));
 }
 if (VAR_1->init_block_iomem) {
  FUNC_1(&VAR_1->lebuffer->resource[0], VAR_1->init_block_iomem,
      sizeof(struct lance_init_block));
 } else if (VAR_1->init_block_mem) {
  FUNC_0(&VAR_1->op->dev,
      sizeof(struct lance_init_block),
      VAR_1->init_block_mem,
      VAR_1->init_block_dvma);
 }
}
