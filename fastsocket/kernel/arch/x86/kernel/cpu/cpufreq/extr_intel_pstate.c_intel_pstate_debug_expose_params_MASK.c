
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (scalar_t__,int,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3 = 0;

 VAR_0 = FUNC_1("pstate_snb", ((void*)0));
 if (FUNC_0(VAR_0))
  return;
 while (VAR_2[VAR_3].name) {
  FUNC_2(VAR_2[VAR_3].name, 0660,
    VAR_0, VAR_2[VAR_3].value,
    &VAR_1);
  VAR_3++;
 }
}
