
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1("i8259_unmask_irq(%d)\n", VAR_3);

 FUNC_2(&VAR_2, VAR_4);
 if (VAR_3 < 8)
  VAR_0 &= ~(1 << VAR_3);
 else
  VAR_1 &= ~(1 << (VAR_3-8));
 FUNC_0(VAR_3);
 FUNC_3(&VAR_2, VAR_4);
}
