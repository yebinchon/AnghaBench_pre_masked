
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_id_t ;
struct TYPE_2__ {scalar_t__ stsy_entry; scalar_t__ stsy_return; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 int FUNC_2 (uintptr_t) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, dtrace_id_t VAR_3, void *VAR_4)
{
#pragma unused(arg,id)

 int VAR_5 = FUNC_2((uintptr_t)VAR_4);

#pragma unused(sysnum)




 if (FUNC_1((uintptr_t)VAR_4)) {
  FUNC_0(VAR_1[VAR_5].stsy_entry == VAR_0);
 } else {
  FUNC_0(VAR_1[VAR_5].stsy_return == VAR_0);
 }
}
