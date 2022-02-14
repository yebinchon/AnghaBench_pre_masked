
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsxx_dma_ctrl {TYPE_1__* card; } ;
struct rsxx_dma {scalar_t__ cmd; int dma_addr; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rsxx_dma*) ;
 int FUNC_1 (int ,struct rsxx_dma*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct rsxx_dma_ctrl *VAR_5, struct rsxx_dma *VAR_6)
{
 if (VAR_6->cmd != VAR_0) {
  if (!FUNC_2(VAR_5->card->dev, VAR_6->dma_addr)) {
   FUNC_3(VAR_5->card->dev, VAR_6->dma_addr,
           FUNC_0(VAR_6),
           VAR_6->cmd == VAR_1 ?
         VAR_3 :
         VAR_2);
  }
 }

 FUNC_1(VAR_4, VAR_6);
}
