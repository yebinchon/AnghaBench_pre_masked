
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idle_flag; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(int VAR_2)
{
 if (VAR_2) {
  if (VAR_1->idle_flag == 0) {



   FUNC_0(0, VAR_0);
  }

  VAR_1->idle_flag = 1;
 } else {



  FUNC_0(VAR_0, VAR_0);

  VAR_1->idle_flag = 0;
 }
}
