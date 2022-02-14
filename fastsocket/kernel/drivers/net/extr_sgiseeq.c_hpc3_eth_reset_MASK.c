
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpc3_ethregs {int reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct hpc3_ethregs *VAR_2)
{
 VAR_2->reset = VAR_1 | VAR_0;
 FUNC_0(20);
 VAR_2->reset = 0;
}
