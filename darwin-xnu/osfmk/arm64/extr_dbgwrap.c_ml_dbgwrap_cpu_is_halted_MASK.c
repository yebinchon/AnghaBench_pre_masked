
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dbgwrap_reg_t ;
struct TYPE_3__ {scalar_t__* coresight_base; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int boolean_t ;


 size_t VAR_0 ;
 int volatile VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;

boolean_t
FUNC_1(int VAR_4)
{
 cpu_data_t *VAR_5 = FUNC_0(VAR_4);
 if ((VAR_5 == ((void*)0)) || (VAR_5->coresight_base[VAR_0] == 0))
  return VAR_3;

 return ((*(volatile dbgwrap_reg_t *)(VAR_5->coresight_base[VAR_0] + VAR_2) & VAR_1) != 0);
}
