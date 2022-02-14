
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; int * irq_handler; int card; } ;
typedef int sdio_irq_handler_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ,int ,unsigned char,unsigned char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sdio_func*) ;

int FUNC_5(struct sdio_func *VAR_2, sdio_irq_handler_t *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;

 FUNC_0(!VAR_2);
 FUNC_0(!VAR_2->card);

 FUNC_2("SDIO: Enabling IRQ for %s...\n", FUNC_4(VAR_2));

 if (VAR_2->irq_handler) {
  FUNC_2("SDIO: IRQ for %s already in use.\n", FUNC_4(VAR_2));
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2->card, 0, 0, VAR_1, 0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_5 |= 1 << VAR_2->num;

 VAR_5 |= 1;

 VAR_4 = FUNC_1(VAR_2->card, 1, 0, VAR_1, VAR_5, ((void*)0));
 if (VAR_4)
  return VAR_4;

 VAR_2->irq_handler = VAR_3;
 VAR_4 = FUNC_3(VAR_2->card);
 if (VAR_4)
  VAR_2->irq_handler = ((void*)0);

 return VAR_4;
}
