
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slowport_cfg {int ADC; void* PCR; void* RTC; void* WTC; void* CCR; } ;


 int * VAR_0 ;
 void** VAR_1 ;
 void** VAR_2 ;
 void** VAR_3 ;
 void** VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (void**,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct slowport_cfg *VAR_7, struct slowport_cfg *VAR_8)
{
 FUNC_2(&VAR_6, VAR_5);

 VAR_8->CCR = *VAR_1;
 VAR_8->WTC = *VAR_4;
 VAR_8->RTC = *VAR_3;
 VAR_8->PCR = *VAR_2;
 VAR_8->ADC = *VAR_0;

 FUNC_1(VAR_1, VAR_7->CCR);
 FUNC_1(VAR_4, VAR_7->WTC);
 FUNC_1(VAR_3, VAR_7->RTC);
 FUNC_1(VAR_2, VAR_7->PCR);
 FUNC_0(VAR_0, VAR_7->ADC);
}
