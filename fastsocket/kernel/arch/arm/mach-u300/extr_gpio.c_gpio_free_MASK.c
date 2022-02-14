
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ users; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(unsigned VAR_3)
{
 VAR_1--;
 VAR_0[VAR_3].users--;
 if (FUNC_1(VAR_0[VAR_3].users < 0)) {
  FUNC_0(VAR_2, "warning: gpio#%d release mismatch\n",
    VAR_3);
  VAR_0[VAR_3].users = 0;
 }

 return;
}
