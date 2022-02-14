
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_4)
{
 if (VAR_4 & VAR_3)
  FUNC_0(" recoverable");
 if (VAR_4 & VAR_0)
  FUNC_0(" dcache");
 if (VAR_4 & VAR_1)
  FUNC_0(" icache");
 if (VAR_4 & VAR_2)
  FUNC_0(" multiple-buserr");
 FUNC_0("\n");
}
