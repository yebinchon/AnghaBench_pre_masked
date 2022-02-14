
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct alarm {int dummy; } ;
typedef TYPE_1__* clock_t ;
struct TYPE_5__ {scalar_t__ cl_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int,int,char*) ;

void
FUNC_3(void)
{
 clock_t VAR_3;
 int VAR_4;




 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2[VAR_4];
  if (VAR_3->cl_ops) {
   FUNC_1(VAR_3);
   FUNC_0(VAR_3);
  }
 }





 VAR_4 = sizeof(struct alarm);
 VAR_0 = FUNC_2(VAR_4, (4096/VAR_4)*VAR_4, 10*VAR_4, "alarms");
}
