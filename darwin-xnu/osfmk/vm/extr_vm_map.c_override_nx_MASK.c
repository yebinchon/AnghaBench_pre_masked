
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ pmap; int map_disallow_data_exec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

int
FUNC_1(vm_map_t VAR_7, uint32_t VAR_8)
{
 int VAR_9;

 if (VAR_7->pmap == VAR_6) return VAR_0;





 if (FUNC_0(VAR_7))
  VAR_9 = VAR_2;
 else
  VAR_9 = VAR_1;






 if (VAR_8 == VAR_3)
  return VAR_5 & VAR_9;

 return (VAR_4 & VAR_9) && (VAR_7->map_disallow_data_exec == VAR_0);
}
