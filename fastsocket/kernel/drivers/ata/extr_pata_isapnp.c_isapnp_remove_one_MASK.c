
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pnp_dev {struct device dev; } ;
struct ata_host {int dummy; } ;


 int FUNC_0 (struct ata_host*) ;
 struct ata_host* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct pnp_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct ata_host *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);
}
