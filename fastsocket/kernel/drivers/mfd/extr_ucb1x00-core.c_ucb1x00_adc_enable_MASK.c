
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int adc_cr; int adc_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ucb1x00*) ;
 int FUNC_2 (struct ucb1x00*,int ,int ) ;

void FUNC_3(struct ucb1x00 *VAR_2)
{
 FUNC_0(&VAR_2->adc_sem);

 VAR_2->adc_cr |= VAR_1;

 FUNC_1(VAR_2);
 FUNC_2(VAR_2, VAR_0, VAR_2->adc_cr);
}
