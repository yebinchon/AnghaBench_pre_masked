
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int irq_handler_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned int,int ,unsigned long,char const*,void*) ;

int FUNC_2(u32 VAR_2, irq_handler_t VAR_3,
   unsigned long VAR_4, const char *VAR_5,
   void *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(((void*)0), VAR_2);

 if (VAR_7 == VAR_1)
  return -VAR_0;

 return FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
}
