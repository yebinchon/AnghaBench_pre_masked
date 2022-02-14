
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_runstate_info {size_t state; unsigned long long state_entry_time; unsigned long long* time; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vcpu_runstate_info*) ;
 unsigned long long FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static unsigned long long FUNC_5(void)
{
 struct vcpu_runstate_info VAR_2;

 unsigned long long VAR_3;
 unsigned long long VAR_4;
 unsigned long long VAR_5;






 FUNC_3();





 VAR_3 = FUNC_2();

 FUNC_1(&VAR_2);

 FUNC_0(VAR_2.state != VAR_1);

 VAR_4 = 0;
 if (VAR_3 > VAR_2.state_entry_time)
  VAR_4 = VAR_3 - VAR_2.state_entry_time;
 VAR_5 = VAR_2.time[VAR_0] +
  VAR_2.time[VAR_1] +
  VAR_4;

 FUNC_4();

 return VAR_5;
}
