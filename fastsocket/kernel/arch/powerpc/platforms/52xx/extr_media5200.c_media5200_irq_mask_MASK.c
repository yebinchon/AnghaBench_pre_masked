
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int hwirq; } ;
struct TYPE_3__ {int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_3.lock, VAR_5);
 VAR_6 = FUNC_0(VAR_3.regs + VAR_0);
 VAR_6 &= ~(1 << (VAR_1 + VAR_2[VAR_4].hwirq));
 FUNC_1(VAR_3.regs + VAR_0, VAR_6);
 FUNC_3(&VAR_3.lock, VAR_5);
}
