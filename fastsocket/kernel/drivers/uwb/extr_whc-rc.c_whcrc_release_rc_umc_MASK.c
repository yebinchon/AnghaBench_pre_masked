
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whcrc {int rc_len; int area; int rc_base; int cmd_dma_buf; int cmd_buf; int evt_dma_buf; int evt_buf; struct umc_dev* umc_dev; } ;
struct umc_dev {int irq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,struct whcrc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static
void FUNC_4(struct whcrc *VAR_1)
{
 struct umc_dev *VAR_2 = VAR_1->umc_dev;

 FUNC_0(&VAR_2->dev, VAR_0, VAR_1->evt_buf,
     VAR_1->evt_dma_buf);
 FUNC_0(&VAR_2->dev, VAR_0, VAR_1->cmd_buf,
     VAR_1->cmd_dma_buf);
 FUNC_1(VAR_2->irq, VAR_1);
 FUNC_2(VAR_1->rc_base);
 FUNC_3(VAR_1->area, VAR_1->rc_len);
}
