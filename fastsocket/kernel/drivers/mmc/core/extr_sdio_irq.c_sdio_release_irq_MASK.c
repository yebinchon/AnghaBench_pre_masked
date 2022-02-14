
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; int card; int * irq_handler; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ,int ,unsigned char,unsigned char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sdio_func*) ;

int FUNC_5(struct sdio_func *VAR_1)
{
 int VAR_2;
 unsigned char VAR_3;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_1->card);

 FUNC_2("SDIO: Disabling IRQ for %s...\n", FUNC_4(VAR_1));

 if (VAR_1->irq_handler) {
  VAR_1->irq_handler = ((void*)0);
  FUNC_3(VAR_1->card);
 }

 VAR_2 = FUNC_1(VAR_1->card, 0, 0, VAR_0, 0, &VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_3 &= ~(1 << VAR_1->num);


 if (!(VAR_3 & 0xFE))
  VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_1->card, 1, 0, VAR_0, VAR_3, ((void*)0));
 if (VAR_2)
  return VAR_2;

 return 0;
}
