
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int dbgwrap_status_t ;
typedef int dbgwrap_reg_t ;
struct TYPE_3__ {scalar_t__* coresight_base; } ;
typedef TYPE_1__ cpu_data_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__,unsigned int,scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

dbgwrap_status_t
FUNC_5(int VAR_9, uint64_t VAR_10)
{
 cpu_data_t *VAR_11 = FUNC_0(VAR_9);
 if ((VAR_11 == ((void*)0)) || (VAR_11->coresight_base[VAR_0] == 0))
  return VAR_4;



 int VAR_12 = FUNC_1();
 if (VAR_9 == VAR_12)
  return VAR_3;

 if (!FUNC_2((uint32_t)-1, (unsigned int)VAR_12, &VAR_8) &&
     (VAR_8 != (uint32_t)VAR_12))
  return VAR_2;

 volatile dbgwrap_reg_t *VAR_13 = (volatile dbgwrap_reg_t *)(VAR_11->coresight_base[VAR_0] + VAR_5);

 if (FUNC_3(VAR_9))
  return VAR_7;


 *VAR_13 = VAR_1;

 if (VAR_10 != 0) {
  dbgwrap_status_t VAR_14 = FUNC_4(VAR_9, VAR_10);
  return VAR_14;
 }
 else
  return VAR_6;
}
