
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_1, unsigned long VAR_2)
{
 if ((VAR_1 & (VAR_0 - 1)) || (VAR_2 & (VAR_0 - 1))) {
  FUNC_2("mtrr: size and base must be multiples of 4 kiB\n");
  FUNC_1("mtrr: size: 0x%lx  base: 0x%lx\n", VAR_2, VAR_1);
  FUNC_0();
  return -1;
 }
 return 0;
}
