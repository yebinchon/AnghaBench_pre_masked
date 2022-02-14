
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int bpc; } ;


 int FUNC_0 (unsigned long,struct pt_regs*) ;
 int FUNC_1 (unsigned long,struct pt_regs*) ;

int FUNC_2(unsigned long VAR_0, struct pt_regs *VAR_1)
{
 unsigned short VAR_2;
 int VAR_3;

 VAR_2 = VAR_0 >> 16;


 if ((VAR_2 & 0x7000) != 0x2000)
  return -1;


 if ((VAR_2 & 0x8000) && (VAR_1->bpc & 3))
  return -1;

 if (VAR_2 & 0x0080)
  VAR_3 = FUNC_0(VAR_0, VAR_1);
 else
  VAR_3 = FUNC_1(VAR_0, VAR_1);

 return VAR_3;
}
