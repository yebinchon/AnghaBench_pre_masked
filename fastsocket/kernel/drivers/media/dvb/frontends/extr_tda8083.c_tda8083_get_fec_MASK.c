
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tda8083_state {int dummy; } ;
typedef int fe_code_rate_t ;
 int FUNC_0 (struct tda8083_state*,int) ;

__attribute__((used)) static fe_code_rate_t FUNC_1 (struct tda8083_state* VAR_0)
{
 u8 VAR_1;
 static fe_code_rate_t VAR_2 [] = { 128, 135, 134, 133,
           132, 131, 130, 129 };

 VAR_1 = FUNC_0(VAR_0, 0x0e) & 0x07;

 return VAR_2 [VAR_1];
}
