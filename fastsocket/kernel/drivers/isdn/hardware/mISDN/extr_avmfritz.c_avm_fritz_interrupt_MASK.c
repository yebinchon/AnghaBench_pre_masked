
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fritzcard {int lock; int isac; int irqcnt; int name; scalar_t__ addr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fritzcard*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fritzcard*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_6, void *VAR_7)
{
 struct fritzcard *VAR_8 = VAR_7;
 u8 VAR_9;
 u8 VAR_10;

 FUNC_5(&VAR_8->lock);
 VAR_10 = FUNC_2(VAR_8->addr + 2);
 FUNC_4("%s: irq stat0 %x\n", VAR_8->name, VAR_10);
 if ((VAR_10 & VAR_2) == VAR_2) {

  FUNC_6(&VAR_8->lock);
  return VAR_4;
 }
 VAR_8->irqcnt++;

 if (!(VAR_10 & VAR_1)) {
  VAR_9 = FUNC_1(VAR_8, VAR_5);
  FUNC_3(&VAR_8->isac, VAR_9);
 }
 if (!(VAR_10 & VAR_0))
  FUNC_0(VAR_8);
 FUNC_6(&VAR_8->lock);
 return VAR_3;
}
