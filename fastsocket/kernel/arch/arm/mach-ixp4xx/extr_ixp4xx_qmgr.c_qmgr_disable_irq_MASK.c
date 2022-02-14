
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * irqstat; int * irqen; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(unsigned int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = VAR_3 / 32;
 u32 VAR_6 = 1 << (VAR_3 & (VAR_0 - 1));

 FUNC_2(&VAR_1, VAR_4);
 FUNC_1(FUNC_0(&VAR_2->irqen[VAR_5]) & ~VAR_6,
       &VAR_2->irqen[VAR_5]);
 FUNC_1(VAR_6, &VAR_2->irqstat[VAR_5]);
 FUNC_3(&VAR_1, VAR_4);
}
