
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int bpc; } ;


 int FUNC_0 (unsigned short,struct pt_regs*) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0, struct pt_regs *VAR_1,
 unsigned char **VAR_2)
{
 int VAR_3 = 0;






 if (VAR_0 & 0x80000000) {
  *VAR_2 += (short)(VAR_0 & 0x0000ffff);
  VAR_1->bpc += 4;
 } else {







   VAR_1->bpc += 2;
 }

 return VAR_3;
}
