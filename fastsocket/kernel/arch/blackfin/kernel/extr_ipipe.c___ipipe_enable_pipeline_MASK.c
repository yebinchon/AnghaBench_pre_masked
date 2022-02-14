
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ipipe_irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 (int ,unsigned int,int ,int *,int *,int) ;

void FUNC_2(void)
{
 unsigned VAR_8;

 VAR_4 = FUNC_0();
 VAR_5 = 1000000000UL / VAR_4;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
  FUNC_1(VAR_7,
         VAR_8,
         (ipipe_irq_handler_t)&VAR_6,
         ((void*)0),
         &VAR_3,
         VAR_0 | VAR_1);
}
