
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_set_singleshot_timer {int flags; int timeout_abs_ns; } ;
struct clock_event_device {scalar_t__ mode; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,struct vcpu_set_singleshot_timer*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_4,
         struct clock_event_device *VAR_5)
{
 int VAR_6 = FUNC_4();
 struct vcpu_set_singleshot_timer VAR_7;
 int VAR_8;

 FUNC_2(VAR_5->mode != VAR_0);

 VAR_7.timeout_abs_ns = FUNC_3(VAR_4);
 VAR_7.flags = VAR_3;

 VAR_8 = FUNC_1(VAR_2, VAR_6, &VAR_7);

 FUNC_0(VAR_8 != 0 && VAR_8 != -VAR_1);

 return VAR_8;
}
