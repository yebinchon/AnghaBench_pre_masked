
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(u8 VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != VAR_0)
  FUNC_0("bad return code cppr - rc = %lx\n", VAR_2);
}
