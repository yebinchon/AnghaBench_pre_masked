
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct cpx {int cpx_flags; int cpx_key_len; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;

void FUNC_2(struct cpx *VAR_2, uint16_t VAR_3)
{
 VAR_2->cpx_key_len = VAR_3;

 if (FUNC_1(VAR_2->cpx_flags, VAR_1)) {






  FUNC_0(VAR_2->cpx_flags, VAR_0 | VAR_1);
 }
}
