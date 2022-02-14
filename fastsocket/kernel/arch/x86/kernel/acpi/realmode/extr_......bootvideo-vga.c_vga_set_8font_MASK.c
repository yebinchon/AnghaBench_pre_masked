
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biosregs {int ax; int bl; int cx; } ;


 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,int *) ;

__attribute__((used)) static void FUNC_2(void)
{

 struct biosregs VAR_0;

 FUNC_0(&VAR_0);


 VAR_0.ax = 0x1112;

 FUNC_1(0x10, &VAR_0, ((void*)0));


 VAR_0.ax = 0x1200;
 VAR_0.bl = 0x20;
 FUNC_1(0x10, &VAR_0, ((void*)0));


 VAR_0.ax = 0x1201;
 VAR_0.bl = 0x34;
 FUNC_1(0x10, &VAR_0, ((void*)0));


 VAR_0.ax = 0x0100;
 VAR_0.cx = 0x0607;
 FUNC_1(0x10, &VAR_0, ((void*)0));
}
