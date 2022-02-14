
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idx; int dma_addr; int * buf; } ;
struct TYPE_3__ {scalar_t__ idx; int dma_addr; int * buf; } ;
struct rsxx_dma_ctrl {scalar_t__ regmap; TYPE_2__ cmd; TYPE_1__ status; } ;
struct pci_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int ) ;
 void* FUNC_5 (struct pci_dev*,int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct pci_dev *VAR_13, struct rsxx_dma_ctrl *VAR_14)
{
 VAR_14->status.buf = FUNC_5(VAR_13, VAR_10,
    &VAR_14->status.dma_addr);
 VAR_14->cmd.buf = FUNC_5(VAR_13, VAR_2,
    &VAR_14->cmd.dma_addr);
 if (VAR_14->status.buf == ((void*)0) || VAR_14->cmd.buf == ((void*)0))
  return -VAR_4;

 FUNC_4(VAR_14->status.buf, 0xac, VAR_10);
 FUNC_2(FUNC_3(VAR_14->status.dma_addr),
  VAR_14->regmap + VAR_9);
 FUNC_2(FUNC_6(VAR_14->status.dma_addr),
  VAR_14->regmap + VAR_8);

 FUNC_4(VAR_14->cmd.buf, 0x83, VAR_2);
 FUNC_2(FUNC_3(VAR_14->cmd.dma_addr), VAR_14->regmap + VAR_1);
 FUNC_2(FUNC_6(VAR_14->cmd.dma_addr), VAR_14->regmap + VAR_0);

 VAR_14->status.idx = FUNC_1(VAR_14->regmap + VAR_6);
 if (VAR_14->status.idx > VAR_7) {
  FUNC_0(&VAR_13->dev, "Failed reading status cnt x%x\n",
   VAR_14->status.idx);
  return -VAR_3;
 }
 FUNC_2(VAR_14->status.idx, VAR_14->regmap + VAR_6);
 FUNC_2(VAR_14->status.idx, VAR_14->regmap + VAR_12);

 VAR_14->cmd.idx = FUNC_1(VAR_14->regmap + VAR_5);
 if (VAR_14->cmd.idx > VAR_7) {
  FUNC_0(&VAR_13->dev, "Failed reading cmd cnt x%x\n",
   VAR_14->status.idx);
  return -VAR_3;
 }
 FUNC_2(VAR_14->cmd.idx, VAR_14->regmap + VAR_5);
 FUNC_2(VAR_14->cmd.idx, VAR_14->regmap + VAR_11);

 return 0;
}
