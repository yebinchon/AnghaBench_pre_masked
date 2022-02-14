
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_dev {scalar_t__ hints_read; scalar_t__ regs; int * hint_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct c2_dev*,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;

void FUNC_3(struct c2_dev *VAR_1)
{
 unsigned int VAR_2;

 while (VAR_1->hints_read != FUNC_0(*VAR_1->hint_count)) {
  VAR_2 = FUNC_2(VAR_1->regs + VAR_0);
  if (VAR_2 & 0x80000000) {
   break;
  }

  VAR_1->hints_read++;
  FUNC_1(VAR_1, VAR_2);
 }

}
