
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_history_entry ;
struct TYPE_2__ {int * entries; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(void)
{
  int VAR_2;
  for(VAR_2=0; VAR_2 < VAR_0; VAR_2++)
    FUNC_1(&VAR_1.entries[VAR_2], 0, sizeof(t_history_entry));


  FUNC_0();
}
