
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_mask; int release; int * bus; struct device* parent; } ;
struct umc_dev {TYPE_1__ dev; } ;
struct device {int dma_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int) ;
 struct umc_dev* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

struct umc_dev *FUNC_3(struct device *VAR_3, int VAR_4)
{
 struct umc_dev *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct umc_dev), VAR_0);
 if (VAR_5) {
  FUNC_1(&VAR_5->dev, "%s-%d", FUNC_0(VAR_3), VAR_4);
  VAR_5->dev.parent = VAR_3;
  VAR_5->dev.bus = &VAR_1;
  VAR_5->dev.release = VAR_2;

  VAR_5->dev.dma_mask = VAR_3->dma_mask;
 }
 return VAR_5;
}
