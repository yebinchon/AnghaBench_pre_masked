
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct c2_mq {int host_dma; } ;
struct c2_dev {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct c2_mq*,int ,int,int,int *,int *,int ) ;
 int * FUNC_1 (int *,int,int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct c2_mq*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct c2_dev *VAR_4, struct c2_mq *VAR_5, int VAR_6,
      int VAR_7)
{
 u8 *VAR_8;

 VAR_8 = FUNC_1(&VAR_4->pcidev->dev, VAR_6 * VAR_7,
     &VAR_5->host_dma, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(VAR_5,
         0,
         VAR_6,
         VAR_7,
         VAR_8,
         ((void*)0),
         VAR_0);

 FUNC_2(VAR_5, VAR_3, VAR_5->host_dma);

 return 0;
}
