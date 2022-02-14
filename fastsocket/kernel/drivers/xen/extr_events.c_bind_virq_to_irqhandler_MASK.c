
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_handler_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ,unsigned long,char const*,void*) ;
 int FUNC_2 (unsigned int) ;

int FUNC_3(unsigned int VAR_0, unsigned int VAR_1,
       irq_handler_t VAR_2,
       unsigned long VAR_3, const char *VAR_4, void *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_0, VAR_1);
 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 != 0) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 return VAR_6;
}
