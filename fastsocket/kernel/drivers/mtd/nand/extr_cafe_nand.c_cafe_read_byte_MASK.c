
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mtd_info {struct cafe_priv* priv; } ;
struct cafe_priv {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct mtd_info*,int *,int) ;

__attribute__((used)) static uint8_t FUNC_2(struct mtd_info *VAR_0)
{
 struct cafe_priv *VAR_1 = VAR_0->priv;
 uint8_t VAR_2;

 FUNC_1(VAR_0, &VAR_2, 1);
 FUNC_0(&VAR_1->pdev->dev, "Read %02x\n", VAR_2);

 return VAR_2;
}
