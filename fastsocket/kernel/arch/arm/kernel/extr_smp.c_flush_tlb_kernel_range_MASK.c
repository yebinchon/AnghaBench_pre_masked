
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb_args {unsigned long ta_start; unsigned long ta_end; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int ,struct tlb_args*,int) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(unsigned long VAR_1, unsigned long VAR_2)
{
 if (FUNC_2()) {
  struct tlb_args VAR_3;
  VAR_3.ta_start = VAR_1;
  VAR_3.ta_end = VAR_2;
  FUNC_1(VAR_0, &VAR_3, 1);
 } else
  FUNC_0(VAR_1, VAR_2);
}
