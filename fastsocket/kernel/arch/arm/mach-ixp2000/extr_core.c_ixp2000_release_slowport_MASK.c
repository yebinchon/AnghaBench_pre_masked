
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slowport_cfg {int ADC; int PCR; int RTC; int WTC; int CCR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct slowport_cfg *VAR_7)
{
 FUNC_1(VAR_1, VAR_7->CCR);
 FUNC_1(VAR_4, VAR_7->WTC);
 FUNC_1(VAR_3, VAR_7->RTC);
 FUNC_1(VAR_2, VAR_7->PCR);
 FUNC_0(VAR_0, VAR_7->ADC);

 FUNC_2(&VAR_6,
     VAR_5);
}
