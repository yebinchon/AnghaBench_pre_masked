
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ process; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_1(void)
{
 int VAR_3;

 if (VAR_2) {
  for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   if (VAR_2[VAR_3].process)
    FUNC_0(VAR_2[VAR_3].process, VAR_0);
  }
 }
}
