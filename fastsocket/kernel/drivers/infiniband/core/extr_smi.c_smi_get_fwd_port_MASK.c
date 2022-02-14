
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {int* initial_path; int hop_ptr; int* return_path; } ;


 int FUNC_0 (struct ib_smp*) ;

int FUNC_1(struct ib_smp *VAR_0)
{
 return (!FUNC_0(VAR_0) ? VAR_0->initial_path[VAR_0->hop_ptr+1] :
  VAR_0->return_path[VAR_0->hop_ptr-1]);
}
