
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct whc {scalar_t__ base; TYPE_1__* umc; int pz_list_dma; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct whc*,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ,int,char*) ;

void FUNC_3(struct whc *VAR_4)
{
 FUNC_0(VAR_4->pz_list_dma, VAR_4->base + VAR_1);

 FUNC_1(VAR_4, VAR_0, VAR_0);
 FUNC_2(&VAR_4->umc->dev, VAR_4->base + VAR_2,
        VAR_3, VAR_3,
        1000, "start PZL");
}
