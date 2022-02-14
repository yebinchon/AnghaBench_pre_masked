
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_handler_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_8 ;

void FUNC_4()
{
 register u32 VAR_9 = (u32)VAR_3;
 register u32 VAR_10 = (u32)VAR_4;
 register u32 VAR_11 = 0;

 FUNC_2(VAR_7,0,32*sizeof(struct irq_handler_s));

 *((u32*)VAR_10) = 0xDEADBEEF;
 VAR_9 = VAR_9 - VAR_0;
 VAR_9 &= ~(VAR_1-1);
 *((u32*)VAR_9) = 0;

 FUNC_3(272,VAR_11);
 FUNC_3(273,VAR_9);

 VAR_8 = 0;
 VAR_6 = 0;
 VAR_5[1] = 0xf0;

 FUNC_0(-32);

 VAR_5[0] = 0x01;
 FUNC_1(VAR_2);
}
