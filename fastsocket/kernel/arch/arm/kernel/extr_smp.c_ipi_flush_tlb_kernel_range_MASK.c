
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb_args {int ta_end; int ta_start; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_0)
{
 struct tlb_args *VAR_1 = (struct tlb_args *)VAR_0;

 FUNC_0(VAR_1->ta_start, VAR_1->ta_end);
}
