
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {struct saa7134_card_ir* remote; } ;
struct saa7134_card_ir {int mask_keydown; int active; int timer; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct saa7134_dev *VAR_6)
{
 struct saa7134_card_ir *VAR_7 = VAR_6->remote;
 unsigned long VAR_8;
 int VAR_9;


 FUNC_3(VAR_2, VAR_3);
 FUNC_5(VAR_2, VAR_3);
 VAR_9 = FUNC_4(VAR_4 >> 2) & VAR_7->mask_keydown;
 FUNC_0(VAR_6->remote->dev, VAR_9 ? VAR_1 : VAR_0);






 if (!VAR_7->active) {
  VAR_8 = VAR_5 + FUNC_1(15);
  FUNC_2(&VAR_7->timer, VAR_8);
  VAR_7->active = 1;
 }

 return 1;
}
