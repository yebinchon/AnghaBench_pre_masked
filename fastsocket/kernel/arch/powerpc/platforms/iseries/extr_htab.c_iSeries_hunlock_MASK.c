
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_1)
{
 if (VAR_1 & 0x8)
  VAR_1 = ~VAR_1;
 FUNC_0(&VAR_0[(VAR_1 >> 4) & 0x3f]);
}
