
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int status; int * action; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 struct irq_desc* FUNC_3 (int) ;
 int FUNC_4 (int,struct irq_desc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 int VAR_9;
 struct irq_desc *VAR_10;
 unsigned long VAR_11;

 FUNC_7(&VAR_6, VAR_11);


 FUNC_6(0x0c, 0x20);
 VAR_9 = FUNC_2(0x20);




 if (FUNC_9(!(VAR_9 & 0x80)))
  goto out_unlock;

 VAR_9 &= 7;

 if (FUNC_9(VAR_9 == 2)) {
  FUNC_6(0x0c, 0xa0);
  VAR_9 = FUNC_2(0xa0);

  if (FUNC_9(!(VAR_9 & 0x80)))
   goto out_unlock;

  VAR_9 = (VAR_9 & 7) + 8;
 }


 VAR_3 |= 1 << VAR_9;
 if (FUNC_9(VAR_9 > 7)) {
  FUNC_2(0xa1);
  FUNC_6(VAR_5, 0xa1);
  FUNC_6(0x60 + (VAR_9 & 7), 0xa0);
  FUNC_6(0x60 + 2, 0x20);
 } else {
  FUNC_2(0x21);
  FUNC_6(VAR_4, 0x21);
  FUNC_6(0x60 + VAR_9, 0x20);
 }

 FUNC_8(&VAR_6, VAR_11);

 VAR_10 = FUNC_3(VAR_9);




 FUNC_4(VAR_9, VAR_10);

 if (FUNC_5(VAR_10->action != ((void*)0)))
  FUNC_1(VAR_9, VAR_10->action);

 if (!(VAR_10->status & VAR_0))
  FUNC_0(VAR_9);

 return VAR_1;

out_unlock:
 FUNC_8(&VAR_6, VAR_11);
 return VAR_2;
}
