
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ start; } ;
struct inf_hw {int lock; int ipac; int irqcnt; TYPE_1__ cfg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_5, void *VAR_6)
{
 struct inf_hw *VAR_7 = VAR_6;
 u32 VAR_8;

 FUNC_3(&VAR_7->lock);
 VAR_8 = FUNC_0((u32)VAR_7->cfg.start + VAR_3);
 if (!(VAR_8 & VAR_2)) {
  FUNC_4(&VAR_7->lock);
  return VAR_1;
 }
 FUNC_2(VAR_8, (u32)VAR_7->cfg.start + VAR_3);
 VAR_7->irqcnt++;
 FUNC_1(&VAR_7->ipac, VAR_4);
 FUNC_4(&VAR_7->lock);
 return VAR_0;
}
