
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8083_state {int dummy; } ;
typedef scalar_t__ fe_code_rate_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_1 (struct tda8083_state* VAR_4, fe_code_rate_t VAR_5)
{
 if (VAR_5 == VAR_3)
  return FUNC_0 (VAR_4, 0x07, 0xff);

 if (VAR_5 >= VAR_1 && VAR_5 <= VAR_2)
  return FUNC_0 (VAR_4, 0x07, 1 << (VAR_2 - VAR_5));

 return -VAR_0;
}
