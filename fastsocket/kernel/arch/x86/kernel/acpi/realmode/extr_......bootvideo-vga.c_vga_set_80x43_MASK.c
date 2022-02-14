
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biosregs {int ax; int bl; } ;


 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{

 struct biosregs VAR_0;

 FUNC_0(&VAR_0);


 VAR_0.ax = 0x1201;
 VAR_0.bl = 0x30;
 FUNC_1(0x10, &VAR_0, ((void*)0));


 VAR_0.ax = 0x0003;
 FUNC_1(0x10, &VAR_0, ((void*)0));

 FUNC_2();
}
