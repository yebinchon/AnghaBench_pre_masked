
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_blade_state {void* kernel_dsr; void* kernel_cb; } ;


 int FUNC_0 (unsigned long) ;
 struct gru_blade_state* FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void FUNC_4(unsigned long VAR_2, void **VAR_3, void **VAR_4)
{
 struct gru_blade_state *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 FUNC_2(VAR_6);
 VAR_7 = FUNC_3(VAR_6);
 if (VAR_3)
  *VAR_3 = VAR_5->kernel_cb + VAR_7 * VAR_0;
 if (VAR_4)
  *VAR_4 = VAR_5->kernel_dsr + VAR_7 * VAR_1;
}
