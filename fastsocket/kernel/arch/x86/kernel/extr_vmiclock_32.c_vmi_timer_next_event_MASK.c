
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {scalar_t__ mode; } ;
typedef scalar_t__ cycle_t ;
struct TYPE_2__ {int (* set_alarm ) (int ,scalar_t__,int ) ;scalar_t__ (* get_cycle_counter ) (int ) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_3,
    struct clock_event_device *VAR_4)
{





 cycle_t VAR_5 = VAR_2.get_cycle_counter(FUNC_3(VAR_1));

 FUNC_0(VAR_4->mode != VAR_0);
 VAR_2.set_alarm(VAR_1, VAR_5 + VAR_3, 0);
 return 0;
}
