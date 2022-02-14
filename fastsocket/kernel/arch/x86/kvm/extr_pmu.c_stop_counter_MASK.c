
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pmc {int * perf_event; int counter; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_pmc*) ;

__attribute__((used)) static void FUNC_2(struct kvm_pmc *VAR_0)
{
 if (VAR_0->perf_event) {
  VAR_0->counter = FUNC_1(VAR_0);
  FUNC_0(VAR_0->perf_event);
  VAR_0->perf_event = ((void*)0);
 }
}
