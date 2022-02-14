
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {struct saa7134_card_ir* remote; } ;
struct saa7134_card_ir {int active; int dev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct saa7134_dev *VAR_1 = (struct saa7134_dev *)VAR_0;
 struct saa7134_card_ir *VAR_2 = VAR_1->remote;

 FUNC_0(VAR_1->remote->dev);

 VAR_2->active = 0;
}
