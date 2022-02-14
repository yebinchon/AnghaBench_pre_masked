
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void
FUNC_2(phys_addr VAR_1, unsigned int VAR_2) {
 if (VAR_1 & 0xf)
  FUNC_1("lp486e.c: PORT: address not aligned\n");
 FUNC_0(((VAR_1 & 0xffff) | VAR_2), VAR_0);
 FUNC_0(((VAR_1>>16) & 0xffff), VAR_0+2);
}
