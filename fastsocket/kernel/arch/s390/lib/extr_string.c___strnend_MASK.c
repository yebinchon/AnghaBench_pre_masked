
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline char *FUNC_0(const char *VAR_0, size_t VAR_1)
{
 register unsigned long VAR_2 asm("0") = 0;
 const char *VAR_3 = VAR_0 + VAR_1;

 asm volatile ("0: srst  %0,%1\n"
        "   jo    0b"
        : "+d" (VAR_3), "+a" (VAR_0) : "d" (VAR_2) : "cc" );
 return (char *) VAR_3;
}
