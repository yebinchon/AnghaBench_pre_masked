
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct axon_ram_bank* platform_data; } ;
struct of_device {TYPE_1__ dev; } ;
struct axon_ram_bank {int ecc_counter; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static irqreturn_t
FUNC_2(int VAR_1, void *VAR_2)
{
 struct of_device *VAR_3 = VAR_2;
 struct axon_ram_bank *VAR_4 = VAR_3->dev.platform_data;

 FUNC_0(!VAR_4);

 FUNC_1(&VAR_3->dev, "Correctable memory error occured\n");
 VAR_4->ecc_counter++;
 return VAR_0;
}
