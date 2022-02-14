
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biosregs {int bx; int cx; int ah; int al; } ;


 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,int *) ;

void __attribute__((section(".inittext"))) FUNC_2(int VAR_0)
{
 struct biosregs VAR_1;

 if (VAR_0 == '\n')
  FUNC_2('\r');

 FUNC_0(&VAR_1);
 VAR_1.bx = 0x0007;
 VAR_1.cx = 0x0001;
 VAR_1.ah = 0x0e;
 VAR_1.al = VAR_0;
 FUNC_1(0x10, &VAR_1, ((void*)0));
}
