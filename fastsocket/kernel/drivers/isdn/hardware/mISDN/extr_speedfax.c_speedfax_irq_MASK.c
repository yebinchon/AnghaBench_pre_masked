
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sfax_hw {int lock; int name; int isac; int isar; int irqcnt; scalar_t__ cfg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sfax_hw*,int ) ;
 int FUNC_1 (struct sfax_hw*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int,int ) ;
 int FUNC_6 (char*,int ,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_10(int VAR_8, void *VAR_9)
{
 struct sfax_hw *VAR_10 = VAR_9;
 u8 VAR_11;
 int VAR_12 = VAR_7;

 FUNC_8(&VAR_10->lock);
 VAR_11 = FUNC_2(VAR_10->cfg + VAR_6);
 if (VAR_11 & VAR_5) {
  FUNC_9(&VAR_10->lock);
  return VAR_1;
 }
 VAR_10->irqcnt++;
 VAR_11 = FUNC_1(VAR_10, VAR_3);
Start_ISAR:
 if (VAR_11 & VAR_4)
  FUNC_4(&VAR_10->isar);
 VAR_11 = FUNC_0(VAR_10, VAR_2);
 if (VAR_11)
  FUNC_3(&VAR_10->isac, VAR_11);
 VAR_11 = FUNC_1(VAR_10, VAR_3);
 if ((VAR_11 & VAR_4) && VAR_12--)
  goto Start_ISAR;
 if (VAR_12 < VAR_7)
  FUNC_5("%s: %d irqloops cpu%d\n", VAR_10->name,
   VAR_7 - VAR_12, FUNC_7());
 if (VAR_7 && !VAR_12)
  FUNC_6("%s: %d IRQ LOOP cpu%d\n", VAR_10->name,
   VAR_7, FUNC_7());
 FUNC_9(&VAR_10->lock);
 return VAR_0;
}
