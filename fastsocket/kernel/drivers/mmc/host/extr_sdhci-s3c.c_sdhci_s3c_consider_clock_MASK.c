
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_s3c {TYPE_1__* pdev; struct clk** clk_bus; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned long FUNC_0 (struct clk*) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned long,unsigned int,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_2(struct sdhci_s3c *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 unsigned long VAR_4;
 struct clk *VAR_5 = VAR_1->clk_bus[VAR_2];
 int VAR_6;

 if (!VAR_5)
  return VAR_0;

 VAR_4 = FUNC_0(VAR_5);

 for (VAR_6 = 1; VAR_6 < 256; VAR_6 *= 2) {
  if ((VAR_4 / VAR_6) <= VAR_3)
   break;
 }

 FUNC_1(&VAR_1->pdev->dev, "clk %d: rate %ld, want %d, got %ld\n",
  VAR_2, VAR_4, VAR_3, VAR_4 / VAR_6);

 return (VAR_3 - (VAR_4 / VAR_6));
}
