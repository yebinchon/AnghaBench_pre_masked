
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mtd_info {struct cafe_priv* priv; } ;
struct cafe_priv {scalar_t__ datalen; TYPE_1__* pdev; scalar_t__ mmio; scalar_t__ dmabuf; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_2, uint8_t *VAR_3, int VAR_4)
{
 struct cafe_priv *VAR_5 = VAR_2->priv;

 if (VAR_1)
  FUNC_1(VAR_3, VAR_5->dmabuf + VAR_5->datalen, VAR_4);
 else
  FUNC_2(VAR_3, VAR_5->mmio + VAR_0 + VAR_5->datalen, VAR_4);

 FUNC_0(&VAR_5->pdev->dev, "Copy 0x%x bytes from position 0x%x in read buffer.\n",
    VAR_4, VAR_5->datalen);
 VAR_5->datalen += VAR_4;
}
