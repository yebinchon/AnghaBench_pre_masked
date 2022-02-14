
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,void*) ;

irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 int VAR_3 = 8;
 int VAR_4, VAR_5;


 do {
  VAR_4 = FUNC_0(VAR_1);
  VAR_5 = FUNC_0(VAR_1);
 } while (VAR_4 != VAR_5 && --VAR_3 > 0);

 if (VAR_4 == 0 || VAR_3 <= 0)
  return VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
