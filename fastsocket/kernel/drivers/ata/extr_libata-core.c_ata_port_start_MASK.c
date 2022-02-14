
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ata_port {int prd; int prd_dma; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int *,int ) ;

int FUNC_1(struct ata_port *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;

 VAR_3->prd = FUNC_0(VAR_4, VAR_0, &VAR_3->prd_dma,
          VAR_2);
 if (!VAR_3->prd)
  return -VAR_1;

 return 0;
}
