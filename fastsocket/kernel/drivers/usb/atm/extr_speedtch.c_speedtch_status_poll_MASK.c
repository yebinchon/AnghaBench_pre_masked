
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct speedtch_instance_data {scalar_t__ poll_delay; int usbatm; TYPE_1__ status_checker; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct speedtch_instance_data *VAR_3 = (void *)VAR_2;

 FUNC_3(&VAR_3->status_checker, 0);


 if (VAR_3->poll_delay < VAR_0)
  FUNC_1(&VAR_3->status_checker.timer, VAR_1 + FUNC_2(VAR_3->poll_delay));
 else
  FUNC_0(VAR_3->usbatm, "Too many failures - disabling line status polling\n");
}
