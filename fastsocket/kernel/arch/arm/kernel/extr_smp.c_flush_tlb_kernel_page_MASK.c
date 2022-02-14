
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb_args {unsigned long ta_start; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,struct tlb_args*,int) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(unsigned long VAR_1)
{
 if (FUNC_2()) {
  struct tlb_args VAR_2;
  VAR_2.ta_start = VAR_1;
  FUNC_1(VAR_0, &VAR_2, 1);
 } else
  FUNC_0(VAR_1);
}
