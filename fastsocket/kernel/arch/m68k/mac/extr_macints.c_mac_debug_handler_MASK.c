
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,int) ;

irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 if (VAR_1[VAR_2] < 10) {
  FUNC_0("DEBUG: Unexpected IRQ %d\n", VAR_2);
  VAR_1[VAR_2]++;
 }
 return VAR_0;
}
