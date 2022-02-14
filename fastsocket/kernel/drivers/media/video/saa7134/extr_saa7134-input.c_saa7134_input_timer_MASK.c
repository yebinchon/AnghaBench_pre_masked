
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {struct saa7134_card_ir* remote; } ;
struct saa7134_card_ir {int polling; int timer; } ;


 int FUNC_0 (struct saa7134_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct saa7134_dev *VAR_2 = (struct saa7134_dev *)VAR_1;
 struct saa7134_card_ir *VAR_3 = VAR_2->remote;

 FUNC_0(VAR_2);
 FUNC_1(&VAR_3->timer, VAR_0 + FUNC_2(VAR_3->polling));
}
