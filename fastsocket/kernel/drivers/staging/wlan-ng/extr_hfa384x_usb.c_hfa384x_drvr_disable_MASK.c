
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {scalar_t__* port_enabled; scalar_t__ isap; } ;
typedef TYPE_1__ hfa384x_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t) ;

int FUNC_1(hfa384x_t *VAR_2, u16 VAR_3)
{
 int VAR_4 = 0;

 if ((!VAR_2->isap && VAR_3 != 0) ||
     (VAR_2->isap && !(VAR_3 <= VAR_1)) ||
     !(VAR_2->port_enabled[VAR_3])) {
  VAR_4 = -VAR_0;
 } else {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4 == 0)
   VAR_2->port_enabled[VAR_3] = 0;
 }
 return VAR_4;
}
