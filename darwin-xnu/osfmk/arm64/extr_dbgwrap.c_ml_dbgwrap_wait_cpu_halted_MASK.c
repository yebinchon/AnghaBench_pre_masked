
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dbgwrap_status_t ;
typedef int dbgwrap_reg_t ;
struct TYPE_3__ {scalar_t__* coresight_base; } ;
typedef TYPE_1__ cpu_data_t ;


 size_t VAR_0 ;
 int volatile VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;

dbgwrap_status_t
FUNC_3(int VAR_6, uint64_t VAR_7)
{
 cpu_data_t *VAR_8 = FUNC_0(VAR_6);
 if ((VAR_8 == ((void*)0)) || (VAR_8->coresight_base[VAR_0] == 0))
  return VAR_3;

 volatile dbgwrap_reg_t *VAR_9 = (volatile dbgwrap_reg_t *)(VAR_8->coresight_base[VAR_0] + VAR_4);

 uint64_t VAR_10;
 FUNC_2(VAR_7, &VAR_10);
 uint64_t VAR_11 = FUNC_1() + VAR_10;
 while (!(*VAR_9 & VAR_1)) {
  if (FUNC_1() > VAR_11)
   return VAR_2;
 }

 return VAR_5;
}
