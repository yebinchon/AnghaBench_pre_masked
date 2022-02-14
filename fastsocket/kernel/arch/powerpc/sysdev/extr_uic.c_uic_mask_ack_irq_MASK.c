
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uic {int lock; scalar_t__ dcrbase; } ;
struct irq_desc {int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct uic* FUNC_0 (unsigned int) ;
 struct irq_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_3)
{
 struct irq_desc *VAR_4 = FUNC_1(VAR_3);
 struct uic *VAR_5 = FUNC_0(VAR_3);
 unsigned int VAR_6 = FUNC_6(VAR_3);
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;

 VAR_9 = 1 << (31-VAR_6);
 FUNC_4(&VAR_5->lock, VAR_7);
 VAR_8 = FUNC_2(VAR_5->dcrbase + VAR_1);
 VAR_8 &= ~VAR_9;
 FUNC_3(VAR_5->dcrbase + VAR_1, VAR_8);
 if (!(VAR_4->status & VAR_0))
  FUNC_3(VAR_5->dcrbase + VAR_2, VAR_9);
 FUNC_5(&VAR_5->lock, VAR_7);
}
