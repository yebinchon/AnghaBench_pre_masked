
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rst_bus_status; int rst_dev_status; int eh_wait; int eh_timer; } ;
typedef TYPE_1__ FAS216_Info ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 FAS216_Info *VAR_2 = (FAS216_Info *)VAR_1;

 FUNC_1(VAR_2, VAR_0, "error handling timed out\n");

 FUNC_0(&VAR_2->eh_timer);

 if (VAR_2->rst_bus_status == 0)
  VAR_2->rst_bus_status = -1;
 if (VAR_2->rst_dev_status == 0)
  VAR_2->rst_dev_status = -1;

 FUNC_2(&VAR_2->eh_wait);
}
