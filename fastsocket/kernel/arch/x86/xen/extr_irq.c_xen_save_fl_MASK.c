
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_info {int evtchn_upcall_mask; } ;


 unsigned long VAR_0 ;
 struct vcpu_info* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static unsigned long FUNC_1(void)
{
 struct vcpu_info *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_0(VAR_1);


 VAR_3 = !VAR_2->evtchn_upcall_mask;





 return (-VAR_3) & VAR_0;
}
