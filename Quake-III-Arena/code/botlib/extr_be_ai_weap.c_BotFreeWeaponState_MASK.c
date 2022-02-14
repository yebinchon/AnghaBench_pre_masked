
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Print ) (int ,char*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int ** VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;

void FUNC_4(int VAR_4)
{
 if (VAR_4 <= 0 || VAR_4 > VAR_0)
 {
  VAR_2.Print(VAR_1, "move state handle %d out of range\n", VAR_4);
  return;
 }
 if (!VAR_3[VAR_4])
 {
  VAR_2.Print(VAR_1, "invalid move state %d\n", VAR_4);
  return;
 }
 FUNC_0(VAR_4);
 FUNC_1(VAR_3[VAR_4]);
 VAR_3[VAR_4] = ((void*)0);
}
