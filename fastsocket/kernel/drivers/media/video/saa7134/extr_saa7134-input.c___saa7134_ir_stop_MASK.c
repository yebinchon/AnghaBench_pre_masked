
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {struct saa7134_card_ir* remote; } ;
struct saa7134_card_ir {int running; int active; int timer; scalar_t__ raw_decode; scalar_t__ polling; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct saa7134_dev *VAR_1 = VAR_0;
 struct saa7134_card_ir *VAR_2;

 if (!VAR_1 || !VAR_1->remote)
  return;

 VAR_2 = VAR_1->remote;
 if (!VAR_2->running)
  return;

 if (VAR_2->polling || VAR_2->raw_decode)
  FUNC_0(&VAR_2->timer);

 VAR_2->active = 0;
 VAR_2->running = 0;

 return;
}
