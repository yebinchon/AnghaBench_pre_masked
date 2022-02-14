
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fritzcard {int ctrlreg; int lock; scalar_t__ addr; int name; int isac; int irqcnt; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fritzcard*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct fritzcard*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_9(int VAR_8, void *VAR_9)
{
 struct fritzcard *VAR_10 = VAR_9;
 u8 VAR_11;
 u8 VAR_12;

 FUNC_6(&VAR_10->lock);
 VAR_12 = FUNC_2(VAR_10->addr + 2);
 FUNC_5("%s: irq stat0 %x\n", VAR_10->name, VAR_12);
 if (!(VAR_12 & VAR_2)) {

  FUNC_7(&VAR_10->lock);
  return VAR_6;
 }
 VAR_10->irqcnt++;

 if (VAR_12 & VAR_0)
  FUNC_0(VAR_10);
 if (VAR_12 & VAR_1) {
  VAR_11 = FUNC_1(VAR_10, VAR_7);
  FUNC_3(&VAR_10->isac, VAR_11);
 }
 if (VAR_12 & VAR_3) {
  FUNC_5("%s: timer irq\n", VAR_10->name);
  FUNC_4(VAR_10->ctrlreg | VAR_4, VAR_10->addr + 2);
  FUNC_8(1);
  FUNC_4(VAR_10->ctrlreg, VAR_10->addr + 2);
 }
 FUNC_7(&VAR_10->lock);
 return VAR_5;
}
